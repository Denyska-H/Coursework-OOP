#pragma once

namespace Paint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Ñâîäêà äëÿ PaintForm
	/// </summary>
	public ref class PaintForm : public System::Windows::Forms::Form
	{
	public:

		PaintForm(void);

	protected:

		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~PaintForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ ïðîÏðîãðàìóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pic;
	private: System::Windows::Forms::Button^ picColor;
	private: System::Windows::Forms::Button^ btnColor;
	private: System::Windows::Forms::ToolStripMenuItem^ Ä³¿ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çáåðåãòèßêToolStripMenuItem;

	private: System::Windows::Forms::Button^ btnPencil;
	private: System::Windows::Forms::Button^ btnFill;
	private: System::Windows::Forms::Button^ btnEraser;
	private: System::Windows::Forms::Button^ btnCircle;
	private: System::Windows::Forms::Button^ btnRect;
	private: System::Windows::Forms::Button^ btnLine;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnColorPicker;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::ToolStripMenuItem^ ðîçì³ðÏåíçëÿToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ïêñToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ïêñToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ ïêñToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ ïêñToolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^ ðîçì³ðÃóìêèToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ïêñToolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^ ïêñToolStripMenuItem5;
private: System::Windows::Forms::ToolStripMenuItem^ ïêñToolStripMenuItem6;
private: System::Windows::Forms::ToolStripMenuItem^ ïêñToolStripMenuItem7;
private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: void Fill(int x, int y, Color newClr, Color oldClr);
private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		/// 

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PaintForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ä³¿ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåðåãòèßêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ðîçì³ðÏåíçëÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïêñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïêñToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïêñToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïêñToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ðîçì³ðÃóìêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïêñToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïêñToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïêñToolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïêñToolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïðîÏðîãðàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->btnColorPicker = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnLine = (gcnew System::Windows::Forms::Button());
			this->btnRect = (gcnew System::Windows::Forms::Button());
			this->btnCircle = (gcnew System::Windows::Forms::Button());
			this->btnEraser = (gcnew System::Windows::Forms::Button());
			this->btnPencil = (gcnew System::Windows::Forms::Button());
			this->btnFill = (gcnew System::Windows::Forms::Button());
			this->btnColor = (gcnew System::Windows::Forms::Button());
			this->picColor = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pic = (gcnew System::Windows::Forms::PictureBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->Ä³¿ToolStripMenuItem,
					this->ïðîÏðîãðàìóToolStripMenuItem, this->âèõ³äToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1201, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ä³¿ToolStripMenuItem
			// 
			this->Ä³¿ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->çáåðåãòèßêToolStripMenuItem,
					this->ðîçì³ðÏåíçëÿToolStripMenuItem, this->ðîçì³ðÃóìêèToolStripMenuItem
			});
			this->Ä³¿ToolStripMenuItem->Name = L"Ä³¿ToolStripMenuItem";
			this->Ä³¿ToolStripMenuItem->Size = System::Drawing::Size(41, 24);
			this->Ä³¿ToolStripMenuItem->Text = L"Ä³¿";
			// 
			// çáåðåãòèßêToolStripMenuItem
			// 
			this->çáåðåãòèßêToolStripMenuItem->Name = L"çáåðåãòèßêToolStripMenuItem";
			this->çáåðåãòèßêToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->çáåðåãòèßêToolStripMenuItem->Text = L"Çáåðåãòè ÿê";
			this->çáåðåãòèßêToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::çáåðåãòèßêToolStripMenuItem_Click);
			// 
			// ðîçì³ðÏåíçëÿToolStripMenuItem
			// 
			this->ðîçì³ðÏåíçëÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ïêñToolStripMenuItem,
					this->ïêñToolStripMenuItem1, this->ïêñToolStripMenuItem2, this->ïêñToolStripMenuItem3
			});
			this->ðîçì³ðÏåíçëÿToolStripMenuItem->Name = L"ðîçì³ðÏåíçëÿToolStripMenuItem";
			this->ðîçì³ðÏåíçëÿToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->ðîçì³ðÏåíçëÿToolStripMenuItem->Text = L"Ðîçì³ð ïåíçëÿ";
			// 
			// ïêñToolStripMenuItem
			// 
			this->ïêñToolStripMenuItem->Name = L"ïêñToolStripMenuItem";
			this->ïêñToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			this->ïêñToolStripMenuItem->Text = L"1 ïêñ";
			this->ïêñToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::ïêñToolStripMenuItem_Click);
			// 
			// ïêñToolStripMenuItem1
			// 
			this->ïêñToolStripMenuItem1->Name = L"ïêñToolStripMenuItem1";
			this->ïêñToolStripMenuItem1->Size = System::Drawing::Size(135, 26);
			this->ïêñToolStripMenuItem1->Text = L"3 ïêñ";
			this->ïêñToolStripMenuItem1->Click += gcnew System::EventHandler(this, &PaintForm::ïêñToolStripMenuItem1_Click);
			// 
			// ïêñToolStripMenuItem2
			// 
			this->ïêñToolStripMenuItem2->Name = L"ïêñToolStripMenuItem2";
			this->ïêñToolStripMenuItem2->Size = System::Drawing::Size(135, 26);
			this->ïêñToolStripMenuItem2->Text = L"8 ïêñ";
			this->ïêñToolStripMenuItem2->Click += gcnew System::EventHandler(this, &PaintForm::ïêñToolStripMenuItem2_Click);
			// 
			// ïêñToolStripMenuItem3
			// 
			this->ïêñToolStripMenuItem3->Name = L"ïêñToolStripMenuItem3";
			this->ïêñToolStripMenuItem3->Size = System::Drawing::Size(135, 26);
			this->ïêñToolStripMenuItem3->Text = L"10 ïêñ";
			this->ïêñToolStripMenuItem3->Click += gcnew System::EventHandler(this, &PaintForm::ïêñToolStripMenuItem3_Click);
			// 
			// ðîçì³ðÃóìêèToolStripMenuItem
			// 
			this->ðîçì³ðÃóìêèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ïêñToolStripMenuItem4,
					this->ïêñToolStripMenuItem5, this->ïêñToolStripMenuItem6, this->ïêñToolStripMenuItem7
			});
			this->ðîçì³ðÃóìêèToolStripMenuItem->Name = L"ðîçì³ðÃóìêèToolStripMenuItem";
			this->ðîçì³ðÃóìêèToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->ðîçì³ðÃóìêèToolStripMenuItem->Text = L"Ðîçì³ð ãóìêè";
			// 
			// ïêñToolStripMenuItem4
			// 
			this->ïêñToolStripMenuItem4->Name = L"ïêñToolStripMenuItem4";
			this->ïêñToolStripMenuItem4->Size = System::Drawing::Size(135, 26);
			this->ïêñToolStripMenuItem4->Text = L"1 ïêñ";
			this->ïêñToolStripMenuItem4->Click += gcnew System::EventHandler(this, &PaintForm::ïêñToolStripMenuItem4_Click);
			// 
			// ïêñToolStripMenuItem5
			// 
			this->ïêñToolStripMenuItem5->Name = L"ïêñToolStripMenuItem5";
			this->ïêñToolStripMenuItem5->Size = System::Drawing::Size(135, 26);
			this->ïêñToolStripMenuItem5->Text = L"3 ïêñ";
			this->ïêñToolStripMenuItem5->Click += gcnew System::EventHandler(this, &PaintForm::ïêñToolStripMenuItem5_Click);
			// 
			// ïêñToolStripMenuItem6
			// 
			this->ïêñToolStripMenuItem6->Name = L"ïêñToolStripMenuItem6";
			this->ïêñToolStripMenuItem6->Size = System::Drawing::Size(135, 26);
			this->ïêñToolStripMenuItem6->Text = L"8 ïêñ";
			this->ïêñToolStripMenuItem6->Click += gcnew System::EventHandler(this, &PaintForm::ïêñToolStripMenuItem6_Click);
			// 
			// ïêñToolStripMenuItem7
			// 
			this->ïêñToolStripMenuItem7->Name = L"ïêñToolStripMenuItem7";
			this->ïêñToolStripMenuItem7->Size = System::Drawing::Size(135, 26);
			this->ïêñToolStripMenuItem7->Text = L"10 ïêñ";
			this->ïêñToolStripMenuItem7->Click += gcnew System::EventHandler(this, &PaintForm::ïêñToolStripMenuItem7_Click);
			// 
			// ïðîÏðîãðàìóToolStripMenuItem
			// 
			this->ïðîÏðîãðàìóToolStripMenuItem->Name = L"ïðîÏðîãðàìóToolStripMenuItem";
			this->ïðîÏðîãðàìóToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->ïðîÏðîãðàìóToolStripMenuItem->Text = L"Ïðî ïðîãðàìó";
			this->ïðîÏðîãðàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::ïðîÏðîãðàìóToolStripMenuItem_Click);
			// 
			// âèõ³äToolStripMenuItem
			// 
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->âèõ³äToolStripMenuItem->Text = L"Âèõ³ä";
			this->âèõ³äToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::âèõ³äToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->btnClear);
			this->panel1->Controls->Add(this->btnLine);
			this->panel1->Controls->Add(this->btnRect);
			this->panel1->Controls->Add(this->btnCircle);
			this->panel1->Controls->Add(this->btnEraser);
			this->panel1->Controls->Add(this->btnPencil);
			this->panel1->Controls->Add(this->btnFill);
			this->panel1->Controls->Add(this->btnColor);
			this->panel1->Controls->Add(this->picColor);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1201, 139);
			this->panel1->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel4->Controls->Add(this->button11);
			this->panel4->Controls->Add(this->button10);
			this->panel4->Controls->Add(this->button9);
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->button7);
			this->panel4->Controls->Add(this->button6);
			this->panel4->Controls->Add(this->button5);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->button47);
			this->panel4->Controls->Add(this->button35);
			this->panel4->Controls->Add(this->button23);
			this->panel4->Controls->Add(this->button46);
			this->panel4->Controls->Add(this->button34);
			this->panel4->Controls->Add(this->button17);
			this->panel4->Controls->Add(this->button45);
			this->panel4->Controls->Add(this->button33);
			this->panel4->Controls->Add(this->button22);
			this->panel4->Controls->Add(this->button44);
			this->panel4->Controls->Add(this->button32);
			this->panel4->Controls->Add(this->button14);
			this->panel4->Controls->Add(this->button43);
			this->panel4->Controls->Add(this->button31);
			this->panel4->Controls->Add(this->button21);
			this->panel4->Controls->Add(this->button42);
			this->panel4->Controls->Add(this->button30);
			this->panel4->Controls->Add(this->button16);
			this->panel4->Controls->Add(this->button41);
			this->panel4->Controls->Add(this->button29);
			this->panel4->Controls->Add(this->button20);
			this->panel4->Controls->Add(this->button40);
			this->panel4->Controls->Add(this->button28);
			this->panel4->Controls->Add(this->button13);
			this->panel4->Controls->Add(this->button39);
			this->panel4->Controls->Add(this->button27);
			this->panel4->Controls->Add(this->button19);
			this->panel4->Controls->Add(this->button38);
			this->panel4->Controls->Add(this->button26);
			this->panel4->Controls->Add(this->button15);
			this->panel4->Controls->Add(this->button37);
			this->panel4->Controls->Add(this->button25);
			this->panel4->Controls->Add(this->button18);
			this->panel4->Controls->Add(this->button36);
			this->panel4->Controls->Add(this->button24);
			this->panel4->Controls->Add(this->button12);
			this->panel4->Controls->Add(this->btnColorPicker);
			this->panel4->Location = System::Drawing::Point(3, 6);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(288, 129);
			this->panel4->TabIndex = 4;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(260, 9);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(17, 23);
			this->button11->TabIndex = 9;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Black;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(237, 9);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(17, 23);
			this->button10->TabIndex = 9;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(197)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(214, 9);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(17, 23);
			this->button9->TabIndex = 9;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)));
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(191, 9);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(17, 23);
			this->button8->TabIndex = 9;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(168, 9);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(17, 23);
			this->button7->TabIndex = 9;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(145, 9);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(17, 23);
			this->button6->TabIndex = 9;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(122, 9);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(17, 23);
			this->button5->TabIndex = 9;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(99, 9);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(17, 23);
			this->button4->TabIndex = 9;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(131)), static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(76, 9);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(17, 23);
			this->button3->TabIndex = 9;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(53, 9);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(17, 23);
			this->button2->TabIndex = 9;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(30, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(17, 23);
			this->button1->TabIndex = 9;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(205)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)));
			this->button47->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button47->FlatAppearance->BorderSize = 0;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Location = System::Drawing::Point(260, 96);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(17, 28);
			this->button47->TabIndex = 9;
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->button35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Location = System::Drawing::Point(168, 96);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(17, 28);
			this->button35->TabIndex = 9;
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)));
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(76, 96);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(17, 28);
			this->button23->TabIndex = 9;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button46->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button46->FlatAppearance->BorderSize = 0;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Location = System::Drawing::Point(214, 96);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(17, 28);
			this->button46->TabIndex = 9;
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Location = System::Drawing::Point(122, 96);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(17, 28);
			this->button34->TabIndex = 9;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(30, 96);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(17, 28);
			this->button17->TabIndex = 9;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button45->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button45->FlatAppearance->BorderSize = 0;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Location = System::Drawing::Point(237, 96);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(17, 28);
			this->button45->TabIndex = 9;
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Location = System::Drawing::Point(145, 96);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(17, 28);
			this->button33->TabIndex = 9;
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(53, 96);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(17, 28);
			this->button22->TabIndex = 9;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->button44->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button44->FlatAppearance->BorderSize = 0;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Location = System::Drawing::Point(191, 96);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(17, 28);
			this->button44->TabIndex = 9;
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Location = System::Drawing::Point(99, 96);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(17, 28);
			this->button32->TabIndex = 9;
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(7, 96);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(17, 28);
			this->button14->TabIndex = 9;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(228)));
			this->button43->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button43->FlatAppearance->BorderSize = 0;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Location = System::Drawing::Point(260, 68);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(17, 28);
			this->button43->TabIndex = 9;
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Location = System::Drawing::Point(168, 68);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(17, 28);
			this->button31->TabIndex = 9;
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(76, 68);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(17, 28);
			this->button21->TabIndex = 9;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button42->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button42->FlatAppearance->BorderSize = 0;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Location = System::Drawing::Point(214, 68);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(17, 28);
			this->button42->TabIndex = 9;
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->button30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Location = System::Drawing::Point(122, 68);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(17, 28);
			this->button30->TabIndex = 9;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(205)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(30, 68);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(17, 28);
			this->button16->TabIndex = 9;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->button41->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button41->FlatAppearance->BorderSize = 0;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Location = System::Drawing::Point(237, 68);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(17, 28);
			this->button41->TabIndex = 9;
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(121)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Location = System::Drawing::Point(145, 68);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(17, 28);
			this->button29->TabIndex = 9;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(53, 68);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(17, 28);
			this->button20->TabIndex = 9;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->button40->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button40->FlatAppearance->BorderSize = 0;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Location = System::Drawing::Point(191, 68);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(17, 28);
			this->button40->TabIndex = 9;
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(99, 68);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(17, 28);
			this->button28->TabIndex = 9;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(7, 68);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(17, 28);
			this->button13->TabIndex = 9;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button39->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button39->FlatAppearance->BorderSize = 0;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Location = System::Drawing::Point(260, 40);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(17, 28);
			this->button39->TabIndex = 9;
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(203)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->button27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(168, 40);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(17, 28);
			this->button27->TabIndex = 9;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)));
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(76, 40);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(17, 28);
			this->button19->TabIndex = 9;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button38->FlatAppearance->BorderSize = 0;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Location = System::Drawing::Point(214, 40);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(17, 28);
			this->button38->TabIndex = 9;
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->button26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(122, 40);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(17, 28);
			this->button26->TabIndex = 9;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(30, 40);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(17, 28);
			this->button15->TabIndex = 9;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(181)));
			this->button37->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button37->FlatAppearance->BorderSize = 0;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Location = System::Drawing::Point(237, 40);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(17, 28);
			this->button37->TabIndex = 9;
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(145, 40);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(17, 28);
			this->button25->TabIndex = 9;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(53, 40);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(17, 28);
			this->button18->TabIndex = 9;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Location = System::Drawing::Point(191, 40);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(17, 28);
			this->button36->TabIndex = 9;
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(99, 40);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(17, 28);
			this->button24->TabIndex = 9;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(7, 40);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(17, 28);
			this->button12->TabIndex = 9;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// btnColorPicker
			// 
			this->btnColorPicker->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnColorPicker->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnColorPicker->FlatAppearance->BorderSize = 0;
			this->btnColorPicker->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnColorPicker->Location = System::Drawing::Point(7, 9);
			this->btnColorPicker->Name = L"btnColorPicker";
			this->btnColorPicker->Size = System::Drawing::Size(17, 23);
			this->btnColorPicker->TabIndex = 9;
			this->btnColorPicker->UseVisualStyleBackColor = false;
			this->btnColorPicker->Click += gcnew System::EventHandler(this, &PaintForm::btnColorPicker_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::Transparent;
			this->btnClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClear->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btnClear->FlatAppearance->BorderSize = 3;
			this->btnClear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->btnClear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::White;
			this->btnClear->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnClear->Location = System::Drawing::Point(1076, 43);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(91, 60);
			this->btnClear->TabIndex = 8;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &PaintForm::btnClear_Click);
			// 
			// btnLine
			// 
			this->btnLine->BackColor = System::Drawing::Color::Transparent;
			this->btnLine->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLine->FlatAppearance->BorderColor = System::Drawing::Color::Cyan;
			this->btnLine->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->btnLine->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->btnLine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLine->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnLine->ForeColor = System::Drawing::Color::White;
			this->btnLine->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLine.Image")));
			this->btnLine->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnLine->Location = System::Drawing::Point(958, 34);
			this->btnLine->Name = L"btnLine";
			this->btnLine->Size = System::Drawing::Size(90, 74);
			this->btnLine->TabIndex = 7;
			this->btnLine->Text = L"Line";
			this->btnLine->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnLine->UseVisualStyleBackColor = false;
			this->btnLine->Click += gcnew System::EventHandler(this, &PaintForm::btnLine_Click);
			// 
			// btnRect
			// 
			this->btnRect->BackColor = System::Drawing::Color::Transparent;
			this->btnRect->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRect->FlatAppearance->BorderColor = System::Drawing::Color::Cyan;
			this->btnRect->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->btnRect->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->btnRect->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRect->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRect->ForeColor = System::Drawing::Color::White;
			this->btnRect->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRect.Image")));
			this->btnRect->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnRect->Location = System::Drawing::Point(862, 34);
			this->btnRect->Name = L"btnRect";
			this->btnRect->Size = System::Drawing::Size(90, 74);
			this->btnRect->TabIndex = 6;
			this->btnRect->Text = L"Rect";
			this->btnRect->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnRect->UseVisualStyleBackColor = false;
			this->btnRect->Click += gcnew System::EventHandler(this, &PaintForm::btnRect_Click);
			// 
			// btnCircle
			// 
			this->btnCircle->BackColor = System::Drawing::Color::Transparent;
			this->btnCircle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCircle->FlatAppearance->BorderColor = System::Drawing::Color::Cyan;
			this->btnCircle->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->btnCircle->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->btnCircle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCircle->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCircle->ForeColor = System::Drawing::Color::White;
			this->btnCircle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCircle.Image")));
			this->btnCircle->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnCircle->Location = System::Drawing::Point(766, 34);
			this->btnCircle->Name = L"btnCircle";
			this->btnCircle->Size = System::Drawing::Size(90, 74);
			this->btnCircle->TabIndex = 5;
			this->btnCircle->Text = L"Circle";
			this->btnCircle->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnCircle->UseVisualStyleBackColor = false;
			this->btnCircle->Click += gcnew System::EventHandler(this, &PaintForm::btnCircle_Click);
			// 
			// btnEraser
			// 
			this->btnEraser->BackColor = System::Drawing::Color::Transparent;
			this->btnEraser->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEraser->FlatAppearance->BorderColor = System::Drawing::Color::Cyan;
			this->btnEraser->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->btnEraser->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->btnEraser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEraser->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEraser->ForeColor = System::Drawing::Color::White;
			this->btnEraser->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEraser.Image")));
			this->btnEraser->Location = System::Drawing::Point(670, 34);
			this->btnEraser->Name = L"btnEraser";
			this->btnEraser->Size = System::Drawing::Size(90, 74);
			this->btnEraser->TabIndex = 4;
			this->btnEraser->Text = L"Eraser";
			this->btnEraser->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnEraser->UseVisualStyleBackColor = false;
			this->btnEraser->Click += gcnew System::EventHandler(this, &PaintForm::btnEraser_Click);
			// 
			// btnPencil
			// 
			this->btnPencil->BackColor = System::Drawing::Color::Transparent;
			this->btnPencil->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPencil->FlatAppearance->BorderColor = System::Drawing::Color::Cyan;
			this->btnPencil->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->btnPencil->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->btnPencil->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPencil->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPencil->ForeColor = System::Drawing::Color::White;
			this->btnPencil->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPencil.Image")));
			this->btnPencil->Location = System::Drawing::Point(574, 34);
			this->btnPencil->Name = L"btnPencil";
			this->btnPencil->Size = System::Drawing::Size(90, 74);
			this->btnPencil->TabIndex = 3;
			this->btnPencil->Text = L"Pencil";
			this->btnPencil->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnPencil->UseVisualStyleBackColor = false;
			this->btnPencil->Click += gcnew System::EventHandler(this, &PaintForm::btnPencil_Click);
			// 
			// btnFill
			// 
			this->btnFill->BackColor = System::Drawing::Color::Transparent;
			this->btnFill->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFill->FlatAppearance->BorderColor = System::Drawing::Color::Cyan;
			this->btnFill->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->btnFill->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->btnFill->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFill->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFill->ForeColor = System::Drawing::Color::White;
			this->btnFill->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFill.Image")));
			this->btnFill->Location = System::Drawing::Point(479, 34);
			this->btnFill->Name = L"btnFill";
			this->btnFill->Size = System::Drawing::Size(90, 74);
			this->btnFill->TabIndex = 2;
			this->btnFill->Text = L"Fill";
			this->btnFill->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnFill->UseVisualStyleBackColor = false;
			this->btnFill->Click += gcnew System::EventHandler(this, &PaintForm::btnFill_Click);
			// 
			// btnColor
			// 
			this->btnColor->BackColor = System::Drawing::Color::Transparent;
			this->btnColor->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnColor->FlatAppearance->BorderColor = System::Drawing::Color::Cyan;
			this->btnColor->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->btnColor->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->btnColor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnColor->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnColor->ForeColor = System::Drawing::Color::White;
			this->btnColor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnColor.Image")));
			this->btnColor->Location = System::Drawing::Point(383, 34);
			this->btnColor->Name = L"btnColor";
			this->btnColor->Size = System::Drawing::Size(90, 74);
			this->btnColor->TabIndex = 1;
			this->btnColor->Text = L"Color";
			this->btnColor->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnColor->UseVisualStyleBackColor = false;
			this->btnColor->Click += gcnew System::EventHandler(this, &PaintForm::btnColor_Click);
			// 
			// picColor
			// 
			this->picColor->BackColor = System::Drawing::Color::White;
			this->picColor->Location = System::Drawing::Point(301, 50);
			this->picColor->Name = L"picColor";
			this->picColor->Size = System::Drawing::Size(60, 51);
			this->picColor->TabIndex = 0;
			this->picColor->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Location = System::Drawing::Point(371, 22);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(688, 97);
			this->panel3->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 551);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1201, 24);
			this->panel2->TabIndex = 2;
			// 
			// pic
			// 
			this->pic->BackColor = System::Drawing::Color::White;
			this->pic->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pic->Location = System::Drawing::Point(0, 167);
			this->pic->Name = L"pic";
			this->pic->Size = System::Drawing::Size(1201, 384);
			this->pic->TabIndex = 3;
			this->pic->TabStop = false;
			this->pic->Click += gcnew System::EventHandler(this, &PaintForm::pic_Click);
			this->pic->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PaintForm::pic_Paint);
			this->pic->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pic_MouseDown);
			this->pic->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pic_MouseMove);
			this->pic->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pic_MouseUp);
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// PaintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1201, 575);
			this->Controls->Add(this->pic);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PaintForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Paint";
			this->Load += gcnew System::EventHandler(this, &PaintForm::PaintForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private:
		// Çì³íí³
		Graphics^ canvas;
		List <Point>^ points;
		Pen^ pen;
		Pen^ erase;
		Bitmap^ background;
		Bitmap^ Img;
		ColorDialog^ cd;
		Color^ newColor;
		Image^ icon;

		bool draw;
		int statePen;
		int x, y, sX, sY, cX, cY;
		//------------------------


	// Îáðîáíèêè ïîä³é
	private: System::Void pic_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void pic_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void pic_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void pic_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void pic_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void PaintForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void çáåðåãòèßêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïðîÏðîãðàìóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âèõ³äToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïêñToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);	
	private: System::Void ïêñToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïêñToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïêñToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïêñToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïêñToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïêñToolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïêñToolStripMenuItem7_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void btnPencil_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnEraser_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnCircle_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnRect_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnLine_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnColor_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnColorPicker_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnFill_Click(System::Object^ sender, System::EventArgs^ e);
	//-------------------------------------------------------------------------------------------------------
};
}
