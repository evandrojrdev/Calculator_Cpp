#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btnBackSpace;
	protected:

	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::Button^ btnC;



	private: System::Windows::Forms::Button^ btnPM;



	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btn9;

	private: System::Windows::Forms::Button^ btn8;

	private: System::Windows::Forms::Button^ btn7;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn4;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ btn3;

	private: System::Windows::Forms::Button^ btn2;

	private: System::Windows::Forms::Button^ btn1;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ btnEquals;
	private: System::Windows::Forms::Button^ btnDot;


	private: System::Windows::Forms::Button^ btn0;

	private: System::Windows::Forms::Label^ lblShowOp;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnBackSpace = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnPM = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::Color::Black;
			this->txtDisplay->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtDisplay->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->ForeColor = System::Drawing::Color::DarkOrange;
			this->txtDisplay->Location = System::Drawing::Point(-2, -1);
			this->txtDisplay->Margin = System::Windows::Forms::Padding(4);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtDisplay->Size = System::Drawing::Size(300, 185);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->UseWaitCursor = true;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &Form1::txtDisplay_TextChanged);
			// 
			// btnBackSpace
			// 
			this->btnBackSpace->BackColor = System::Drawing::Color::DarkOrange;
			this->btnBackSpace->FlatAppearance->BorderSize = 0;
			this->btnBackSpace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBackSpace->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBackSpace->ForeColor = System::Drawing::Color::White;
			this->btnBackSpace->Location = System::Drawing::Point(6, 192);
			this->btnBackSpace->Margin = System::Windows::Forms::Padding(4);
			this->btnBackSpace->Name = L"btnBackSpace";
			this->btnBackSpace->Size = System::Drawing::Size(66, 49);
			this->btnBackSpace->TabIndex = 1;
			this->btnBackSpace->Text = L"🠔";
			this->btnBackSpace->UseVisualStyleBackColor = false;
			this->btnBackSpace->Click += gcnew System::EventHandler(this, &Form1::btnBackSpace_Click);
			// 
			// btnCE
			// 
			this->btnCE->BackColor = System::Drawing::Color::DarkOrange;
			this->btnCE->FlatAppearance->BorderSize = 0;
			this->btnCE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCE->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->ForeColor = System::Drawing::Color::White;
			this->btnCE->Location = System::Drawing::Point(79, 191);
			this->btnCE->Margin = System::Windows::Forms::Padding(4);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(66, 49);
			this->btnCE->TabIndex = 2;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = false;
			this->btnCE->Click += gcnew System::EventHandler(this, &Form1::btnCE_Click);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::DarkOrange;
			this->btnC->FlatAppearance->BorderSize = 0;
			this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnC->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->ForeColor = System::Drawing::Color::White;
			this->btnC->Location = System::Drawing::Point(153, 191);
			this->btnC->Margin = System::Windows::Forms::Padding(4);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(66, 49);
			this->btnC->TabIndex = 3;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &Form1::btnC_Click_Click);
			// 
			// btnPM
			// 
			this->btnPM->BackColor = System::Drawing::Color::DarkOrange;
			this->btnPM->FlatAppearance->BorderSize = 0;
			this->btnPM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPM->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPM->ForeColor = System::Drawing::Color::White;
			this->btnPM->Location = System::Drawing::Point(227, 191);
			this->btnPM->Margin = System::Windows::Forms::Padding(4);
			this->btnPM->Name = L"btnPM";
			this->btnPM->Size = System::Drawing::Size(66, 49);
			this->btnPM->TabIndex = 4;
			this->btnPM->Text = L"+/-";
			this->btnPM->UseVisualStyleBackColor = false;
			this->btnPM->Click += gcnew System::EventHandler(this, &Form1::btnPM_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkOrange;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(227, 248);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 45);
			this->button5->TabIndex = 8;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::Arithimetic);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::Transparent;
			this->btn9->FlatAppearance->BorderSize = 0;
			this->btn9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn9->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::Color::DarkOrange;
			this->btn9->Location = System::Drawing::Point(153, 249);
			this->btn9->Margin = System::Windows::Forms::Padding(4);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(66, 49);
			this->btn9->TabIndex = 7;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::Transparent;
			this->btn8->FlatAppearance->BorderSize = 0;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn8->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::Color::DarkOrange;
			this->btn8->Location = System::Drawing::Point(79, 249);
			this->btn8->Margin = System::Windows::Forms::Padding(4);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(66, 49);
			this->btn8->TabIndex = 6;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::Transparent;
			this->btn7->FlatAppearance->BorderSize = 0;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::Color::DarkOrange;
			this->btn7->Location = System::Drawing::Point(6, 249);
			this->btn7->Margin = System::Windows::Forms::Padding(4);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(66, 49);
			this->btn7->TabIndex = 5;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DarkOrange;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(227, 405);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 107);
			this->button9->TabIndex = 12;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::Arithimetic);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Transparent;
			this->btn6->FlatAppearance->BorderSize = 0;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::Color::DarkOrange;
			this->btn6->Location = System::Drawing::Point(153, 326);
			this->btn6->Margin = System::Windows::Forms::Padding(4);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(66, 49);
			this->btn6->TabIndex = 11;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::Transparent;
			this->btn5->FlatAppearance->BorderSize = 0;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::Color::DarkOrange;
			this->btn5->Location = System::Drawing::Point(79, 326);
			this->btn5->Margin = System::Windows::Forms::Padding(4);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(66, 49);
			this->btn5->TabIndex = 10;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Transparent;
			this->btn4->FlatAppearance->BorderSize = 0;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::Color::DarkOrange;
			this->btn4->Location = System::Drawing::Point(5, 326);
			this->btn4->Margin = System::Windows::Forms::Padding(4);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(66, 49);
			this->btn4->TabIndex = 9;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DarkOrange;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(227, 301);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(65, 44);
			this->button13->TabIndex = 16;
			this->button13->Text = L"*";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::Arithimetic);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Transparent;
			this->btn3->FlatAppearance->BorderSize = 0;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::Color::DarkOrange;
			this->btn3->Location = System::Drawing::Point(153, 413);
			this->btn3->Margin = System::Windows::Forms::Padding(4);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(66, 49);
			this->btn3->TabIndex = 15;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Transparent;
			this->btn2->FlatAppearance->BorderSize = 0;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::Color::DarkOrange;
			this->btn2->Location = System::Drawing::Point(79, 413);
			this->btn2->Margin = System::Windows::Forms::Padding(4);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(66, 49);
			this->btn2->TabIndex = 14;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Transparent;
			this->btn1->FlatAppearance->BorderSize = 0;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::Color::DarkOrange;
			this->btn1->Location = System::Drawing::Point(6, 405);
			this->btn1->Margin = System::Windows::Forms::Padding(4);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(66, 49);
			this->btn1->TabIndex = 13;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::DarkOrange;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(227, 353);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(65, 44);
			this->button17->TabIndex = 20;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::Arithimetic);
			// 
			// btnEquals
			// 
			this->btnEquals->BackColor = System::Drawing::Color::Transparent;
			this->btnEquals->FlatAppearance->BorderSize = 0;
			this->btnEquals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEquals->ForeColor = System::Drawing::Color::DarkOrange;
			this->btnEquals->Location = System::Drawing::Point(153, 470);
			this->btnEquals->Margin = System::Windows::Forms::Padding(4);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(66, 49);
			this->btnEquals->TabIndex = 19;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = false;
			this->btnEquals->Click += gcnew System::EventHandler(this, &Form1::btnEquals_Click);
			// 
			// btnDot
			// 
			this->btnDot->BackColor = System::Drawing::Color::Transparent;
			this->btnDot->FlatAppearance->BorderSize = 0;
			this->btnDot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDot->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDot->ForeColor = System::Drawing::Color::DarkOrange;
			this->btnDot->Location = System::Drawing::Point(79, 470);
			this->btnDot->Margin = System::Windows::Forms::Padding(4);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(66, 49);
			this->btnDot->TabIndex = 18;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = false;
			this->btnDot->Click += gcnew System::EventHandler(this, &Form1::btnDot_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::Transparent;
			this->btn0->FlatAppearance->BorderSize = 0;
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn0->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::Color::DarkOrange;
			this->btn0->Location = System::Drawing::Point(6, 470);
			this->btn0->Margin = System::Windows::Forms::Padding(4);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(66, 49);
			this->btn0->TabIndex = 17;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::button_click);
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::Color::Black;
			this->lblShowOp->ForeColor = System::Drawing::Color::DarkOrange;
			this->lblShowOp->Location = System::Drawing::Point(-2, 4);
			this->lblShowOp->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 20);
			this->lblShowOp->TabIndex = 21;
			this->lblShowOp->Click += gcnew System::EventHandler(this, &Form1::lblShowOp_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(305, 547);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnPM);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnBackSpace);
			this->Controls->Add(this->txtDisplay);
			this->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"CALCULATOR - CPP";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double iFirstNum;
		double iSecondNum;
		double iResult;
		String^ iOperator;

	private: System::Void lblShowOp_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnC_Click_Click(System::Object^ sender, System::EventArgs^ e) {
	//button C
	txtDisplay->Text = "0";
	lblShowOp->Text = "";
}

private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
	//button CE
	txtDisplay->Text = "0";
}
private: System::Void button_click(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);
		if (txtDisplay->Text == "0") 
		{
			txtDisplay->Text = Numbers->Text;
		}
		else
		{
			//////txtDisplay->Text = Numbers->Text + txtDisplay->Text;
			txtDisplay->Text += Numbers->Text;

		}
}
private: System::Void txtDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txtDisplay->Text == "")
		{	
			txtDisplay->Text = "0";
		}
}
private: System::Void Arithimetic(System::Object^ sender, System::EventArgs^ e) {
	Button^ op = safe_cast<Button^>(sender);
	iFirstNum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	iOperator = op->Text;
	lblShowOp->Text = System::Convert::ToString(iFirstNum) + " " + iOperator;

}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {
	lblShowOp->Text = "";
	iSecondNum = Double::Parse(txtDisplay->Text);
		if (iOperator=="+")
		{
			iResult = iFirstNum + iSecondNum;
			txtDisplay->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "-")
		{
			iResult = iFirstNum - iSecondNum;
			txtDisplay->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "*")
		{
			iResult = iFirstNum * iSecondNum;
			txtDisplay->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "/")
		{
			iResult = iFirstNum / iSecondNum;
			txtDisplay->Text = System::Convert::ToString(iResult);
		}
}
private: System::Void btnBackSpace_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtDisplay->Text->Length>0)
		{
			txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1);
		}
}

private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!txtDisplay->Text->Contains("."))
		{
			txtDisplay->Text = txtDisplay->Text + ",";
		}
}
private: System::Void btnPM_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtDisplay->Text->Contains("-"))
		{
			txtDisplay->Text = txtDisplay->Text->Remove(0,1);
		}
		else 
		{
			txtDisplay->Text = "-" + txtDisplay->Text;
		}

}
};
}
