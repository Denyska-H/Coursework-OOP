#include "PaintForm.h"
#include <vector>

using namespace System;
using namespace System::Windows::Forms;

// Точка входу
[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Paint::PaintForm form;
	Application::Run(% form);
}
//-----------------------------------------------------------

Paint::PaintForm::PaintForm(void)
{
	InitializeComponent();

	saveFileDialog1->Filter = "JPG (*.jpg)|*.jpg";
}


// Функції заливки
void FillFunc(Paint::Bitmap^ bm, int x, int y, System::Drawing::Color newClr, System::Drawing::Color oldClr) {

	if (oldClr == newClr) return;

	int x1;
	bool spanAbove, spanBelow;

	std::vector<int> stackX, stackY;

	stackX.push_back(x);
	stackY.push_back(y);

	while (!stackX.empty())
	{
		x = stackX.back(); 
		y = stackY.back();
		stackX.pop_back();
		stackY.pop_back();

		x1 = x;
		while (x1 >= 0 && bm->GetPixel(x1, y) == oldClr) x1--;
		x1++;
		spanAbove = spanBelow = 0;
		while (x1 < bm->Width && bm->GetPixel(x1, y) == oldClr)
		{
			bm->SetPixel(x1, y, newClr);

			if (!spanAbove && y > 0 && bm->GetPixel(x1, y - 1) == oldClr)
			{
				stackX.push_back(x1);
				stackY.push_back(y - 1);

				spanAbove = 1;
			}
			else if (spanAbove && y > 0 && bm->GetPixel(x1, y - 1) != oldClr)
			{
				spanAbove = 0;
			}
			if (!spanBelow && y < bm->Height - 1 && bm->GetPixel(x1, y + 1) == oldClr)
			{
				stackX.push_back(x1);
				stackY.push_back(y + 1);

				spanBelow = 1;
			}
			else if (spanBelow && y < bm->Height - 1 && bm->GetPixel(x1, y + 1) != oldClr)
			{
				spanBelow = 0;
			}
			x1++;
		}
	}

	// Recursion 
	//if (x > 0 && y > 0 && x < bm->Width && y < bm->Height) {
	//	System::Drawing::Color curClr = bm->GetPixel(x, y);
	//	
	//	if (curClr == oldClr && curClr != newClr) {
	//		bm->SetPixel(x, y, newClr);
	//	
	//		FillFunc(bm, x + 1, y, newClr, oldClr);
	//		FillFunc(bm, x - 1, y, newClr, oldClr);
	//		FillFunc(bm, x, y + 1, newClr, oldClr);
	//		FillFunc(bm, x, y - 1, newClr, oldClr);
	//	}
	//}
}

void Paint::PaintForm::Fill(int x, int y, Color newClr, Color oldClr)
{
	FillFunc(Img, x, y, newClr, oldClr);
}
//----------------------------------------------------------------------------------------------------------------------


// Форма
System::Void Paint::PaintForm::PaintForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	pen = gcnew Pen(Color::Black, 3);
	erase = gcnew Pen(Color::White, 8);
	points = gcnew List <Point>();
	cd = gcnew ColorDialog();
	draw = false;

	this->Width = 900;
	this->Height = 700;

	Img = gcnew Bitmap(pic->Width, pic->Height);

	canvas = Graphics::FromImage(Img);
	canvas->Clear(Color::White);
	pic->Image = Img;

	notifyIcon1->BalloonTipText = "Зображення збережено";
	notifyIcon1->BalloonTipTitle = "Системне сповіщення";

	notifyIcon1->Icon =	gcnew System::Drawing::Icon(System::Environment::GetFolderPath
	(System::Environment::SpecialFolder::MyComputer) + "D:\\Моя папка\\Универ\\2 курс\\ООП\\Курсач\\Paint icon\\favicon.ico");
	notifyIcon1->Visible = true;
	notifyIcon1->Text = "Paint";
}
//----------------------------------------------------------------------------------------------------------------------


// Події для PictureBox
System::Void Paint::PaintForm::pic_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	draw = true;

	if (statePen == 1 || statePen == 2) {
		points->Clear();
		points->Add(e->Location);	
	}
	if (statePen == 3 || statePen == 4 || statePen == 5) {
		cX = e->X;
		cY = e->Y;
	}
}

System::Void Paint::PaintForm::pic_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (draw) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			points->Add(e->Location);
		}
		if (statePen == 1) {
			canvas->DrawLines(pen, points->ToArray());
		}
		if (statePen == 2) {
			canvas->DrawLines(erase, points->ToArray());
		}
	}

	pic->Invalidate();

	x = e->X;
	y = e->Y;
	sX = e->X - cX;
	sY = e->Y - cY;
}

System::Void Paint::PaintForm::pic_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	draw = false;

	sX = x - cX;
	sY = y - cY;

	if (statePen == 3) {
		canvas->DrawEllipse(pen, cX, cY, sX, sY);
	}
	if (statePen == 4) {
		canvas->DrawRectangle(pen, cX, cY, sX, sY);
	}
	if (statePen == 5) {
		canvas->DrawLine(pen, cX, cY, x, y);
	}
}

System::Void Paint::PaintForm::pic_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	Graphics^ canvas = e->Graphics;

	if (draw) {
		if (statePen == 3) {
			canvas->DrawEllipse(pen, cX, cY, sX, sY);
		}
		if (statePen == 4) {
			canvas->DrawRectangle(pen, cX, cY, sX, sY);
		}
		if (statePen == 5) {
			canvas->DrawLine(pen, cX, cY, x, y);
		}
	}
}
//----------------------------------------------------------------------------------------------------------------------


// Меню
System::Void Paint::PaintForm::зберегтиЯкToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ fname;

	saveFileDialog1->ShowDialog();

	fname = saveFileDialog1->FileName;

	if (fname == "") return;

	Bitmap^ img = gcnew Bitmap(pic->Image);
	img->Save(fname);

	notifyIcon1->Visible = true;
	notifyIcon1->ShowBalloonTip(1000);
}

System::Void Paint::PaintForm::проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Поставте будь ласка п'ять <3", "Увага! Прохання");
}

System::Void Paint::PaintForm::вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
//----------------------------------------------------------------------------------------------------------------------


// Зміна розміру пензля та гумки
System::Void Paint::PaintForm::пксToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	pen = gcnew Pen(Color::Black, 1);
}

System::Void Paint::PaintForm::пксToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
	pen = gcnew Pen(Color::Black, 3);
}

System::Void Paint::PaintForm::пксToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
	pen = gcnew Pen(Color::Black, 8);
}

System::Void Paint::PaintForm::пксToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e)
{
	pen = gcnew Pen(Color::Black, 10);
}

System::Void Paint::PaintForm::пксToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e)
{
	erase = gcnew Pen(Color::White, 1);
}

System::Void Paint::PaintForm::пксToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e)
{
	erase = gcnew Pen(Color::White, 3);
}

System::Void Paint::PaintForm::пксToolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e)
{
	erase = gcnew Pen(Color::White, 8);
}

System::Void Paint::PaintForm::пксToolStripMenuItem7_Click(System::Object^ sender, System::EventArgs^ e)
{
	erase = gcnew Pen(Color::White, 10);
}
//----------------------------------------------------------------------------------------------------------------


// Панель інструментів
System::Void Paint::PaintForm::btnPencil_Click(System::Object^ sender, System::EventArgs^ e)
{
	statePen = 1;
	pen = gcnew Pen(Color::Black, 3);
	picColor->BackColor = Color::Black;
}

System::Void Paint::PaintForm::btnEraser_Click(System::Object^ sender, System::EventArgs^ e)
{
	statePen = 2;
}

System::Void Paint::PaintForm::btnCircle_Click(System::Object^ sender, System::EventArgs^ e)
{
	statePen = 3;
}

System::Void Paint::PaintForm::btnRect_Click(System::Object^ sender, System::EventArgs^ e)
{
	statePen = 4;
}

System::Void Paint::PaintForm::btnLine_Click(System::Object^ sender, System::EventArgs^ e)
{
	statePen = 5;
}

System::Void Paint::PaintForm::btnClear_Click(System::Object^ sender, System::EventArgs^ e)
{
	canvas->Clear(Color::White);
}

System::Void Paint::PaintForm::btnColor_Click(System::Object^ sender, System::EventArgs^ e)
{
	cd->ShowDialog();
	newColor = cd->Color;
	picColor->BackColor = cd->Color;
	pen->Color = cd->Color;
}

System::Void Paint::PaintForm::btnColorPicker_Click(System::Object^ sender, System::EventArgs^ e)
{
	pen->Color = ((Button^)sender)->BackColor;
	picColor->BackColor = ((Button^)sender)->BackColor;
}

System::Void Paint::PaintForm::pic_Click(System::Object^ sender, System::EventArgs^ e) {
	if (statePen == 6) {
		Bitmap^ bm = gcnew Bitmap(pic->Image);
		Color oldClr = bm->GetPixel(x, y);

		Fill(x, y, pen->Color, oldClr);
	}
}

System::Void Paint::PaintForm::btnFill_Click(System::Object^ sender, System::EventArgs^ e)
{
	statePen = 6;
}
//--------------------------------------------------------------------------------------------------------
