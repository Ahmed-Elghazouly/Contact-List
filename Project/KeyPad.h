#pragma once
#include "Add_Contact.h"
#include "Recents.h"
//#include "Dialpad.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for KeyPad
	/// </summary>
	public ref class KeyPad : public System::Windows::Forms::Form
	{
	public:
		KeyPad(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~KeyPad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btn0;

	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn7;



	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn8;







	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;

	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ addbtn;
	private: System::Windows::Forms::Button^ Exitbtn;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnerase;
	private: System::Windows::Forms::Button^ button7;













	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(KeyPad::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btnerase = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->addbtn = (gcnew System::Windows::Forms::Button());
			this->Exitbtn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(86, 137);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(262, 33);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &KeyPad::textBox1_TextChanged);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::Black;
			this->btn0->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn0->FlatAppearance->BorderSize = 0;
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn0->ForeColor = System::Drawing::Color::White;
			this->btn0->Location = System::Drawing::Point(80, 222);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(71, 67);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &KeyPad::btn0_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Black;
			this->btn1->FlatAppearance->BorderSize = 0;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->ForeColor = System::Drawing::Color::White;
			this->btn1->Location = System::Drawing::Point(3, 3);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(71, 67);
			this->btn1->TabIndex = 2;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &KeyPad::btn1_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Black;
			this->btn4->FlatAppearance->BorderSize = 0;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->ForeColor = System::Drawing::Color::White;
			this->btn4->Location = System::Drawing::Point(3, 76);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(71, 67);
			this->btn4->TabIndex = 3;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &KeyPad::btn4_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::Black;
			this->btn7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn7->FlatAppearance->BorderSize = 0;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->ForeColor = System::Drawing::Color::White;
			this->btn7->Location = System::Drawing::Point(3, 149);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(71, 67);
			this->btn7->TabIndex = 4;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &KeyPad::btn7_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Black;
			this->btn2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn2->FlatAppearance->BorderSize = 0;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->ForeColor = System::Drawing::Color::White;
			this->btn2->Location = System::Drawing::Point(80, 3);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(71, 67);
			this->btn2->TabIndex = 5;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &KeyPad::btn2_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::Black;
			this->btn5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn5.BackgroundImage")));
			this->btn5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn5->FlatAppearance->BorderSize = 0;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->ForeColor = System::Drawing::Color::White;
			this->btn5->Location = System::Drawing::Point(80, 76);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(71, 67);
			this->btn5->TabIndex = 6;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &KeyPad::btn5_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::Black;
			this->btn8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn8->FlatAppearance->BorderSize = 0;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn8->ForeColor = System::Drawing::Color::White;
			this->btn8->Location = System::Drawing::Point(80, 149);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(71, 67);
			this->btn8->TabIndex = 7;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &KeyPad::btn8_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button3, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(41, 726);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(353, 76);
			this->tableLayoutPanel1->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button2->Location = System::Drawing::Point(120, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 70);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Contacts";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &KeyPad::button2_Click);
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 70);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Recents";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &KeyPad::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button3->Location = System::Drawing::Point(237, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 70);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Keypad";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &KeyPad::button3_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->Controls->Add(this->button5, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->button4, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->btn9, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->btn8, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->btn4, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->btn5, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->btn6, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->btn7, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->btn2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->btn1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->btn0, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->button6, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->btnerase, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->btn3, 2, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(100, 259);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->Size = System::Drawing::Size(233, 368);
			this->tableLayoutPanel2->TabIndex = 15;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(157, 222);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(73, 67);
			this->button5->TabIndex = 15;
			this->button5->Text = L"#";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &KeyPad::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 27, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(3, 222);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(71, 67);
			this->button4->TabIndex = 14;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &KeyPad::button4_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::Black;
			this->btn9->FlatAppearance->BorderSize = 0;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn9->ForeColor = System::Drawing::Color::White;
			this->btn9->Location = System::Drawing::Point(157, 149);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(73, 67);
			this->btn9->TabIndex = 10;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &KeyPad::btn9_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Black;
			this->btn6->FlatAppearance->BorderSize = 0;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->ForeColor = System::Drawing::Color::White;
			this->btn6->Location = System::Drawing::Point(157, 76);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(73, 67);
			this->btn6->TabIndex = 9;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &KeyPad::btn6_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::DarkBlue;
			this->button6->Location = System::Drawing::Point(80, 295);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(71, 70);
			this->button6->TabIndex = 16;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &KeyPad::button6_Click);
			// 
			// btnerase
			// 
			this->btnerase->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnerase.BackgroundImage")));
			this->btnerase->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnerase->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->btnerase->FlatAppearance->BorderSize = 0;
			this->btnerase->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->btnerase->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->btnerase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnerase->Location = System::Drawing::Point(157, 295);
			this->btnerase->Name = L"btnerase";
			this->btnerase->Size = System::Drawing::Size(73, 67);
			this->btnerase->TabIndex = 13;
			this->btnerase->UseVisualStyleBackColor = true;
			this->btnerase->Click += gcnew System::EventHandler(this, &KeyPad::btnerase_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Black;
			this->btn3->FlatAppearance->BorderSize = 0;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->ForeColor = System::Drawing::Color::White;
			this->btn3->Location = System::Drawing::Point(157, 3);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(73, 67);
			this->btn3->TabIndex = 8;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &KeyPad::btn3_Click);
			// 
			// addbtn
			// 
			this->addbtn->FlatAppearance->BorderSize = 0;
			this->addbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addbtn->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->addbtn->Location = System::Drawing::Point(100, 163);
			this->addbtn->Name = L"addbtn";
			this->addbtn->Size = System::Drawing::Size(233, 38);
			this->addbtn->TabIndex = 16;
			this->addbtn->Text = L"Add number";
			this->addbtn->UseVisualStyleBackColor = true;
			this->addbtn->Click += gcnew System::EventHandler(this, &KeyPad::button7_Click);
			// 
			// Exitbtn
			// 
			this->Exitbtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Exitbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exitbtn.BackgroundImage")));
			this->Exitbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Exitbtn->CausesValidation = false;
			this->Exitbtn->FlatAppearance->BorderSize = 0;
			this->Exitbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exitbtn->Location = System::Drawing::Point(339, 33);
			this->Exitbtn->Name = L"Exitbtn";
			this->Exitbtn->Size = System::Drawing::Size(40, 39);
			this->Exitbtn->TabIndex = 29;
			this->Exitbtn->UseVisualStyleBackColor = true;
			this->Exitbtn->Click += gcnew System::EventHandler(this, &KeyPad::button7_Click_1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(23, 725);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(386, 2);
			this->panel2->TabIndex = 30;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(41, 37);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(66, 63);
			this->button7->TabIndex = 31;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &KeyPad::button7_Click_2);
			// 
			// KeyPad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 32);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(428, 845);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Exitbtn);
			this->Controls->Add(this->addbtn);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->textBox1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Arial Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Cyan;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"KeyPad";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"KeyPad";
			this->Load += gcnew System::EventHandler(this, &KeyPad::KeyPad_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void KeyPad_Load(System::Object^ sender, System::EventArgs^ e) {
		int  counter = 1;

		addbtn->Hide();
		btnerase->Hide();
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath0 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath0->AddEllipse(0, 0, btn0->Width - 1, btn0->Height - 1);
		btn0->Region = gcnew System::Drawing::Region(circularPath0);
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath1 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath1->AddEllipse(0, 0, btn1->Width - 1, btn1->Height - 1);
		btn1->Region = gcnew System::Drawing::Region(circularPath1);
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath2 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath2->AddEllipse(0, 0, btn2->Width - 1, btn2->Height - 1);
		btn2->Region = gcnew System::Drawing::Region(circularPath2);
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath3 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath3->AddEllipse(0, 0, btn3->Width - 1, btn3->Height - 1);
		btn3->Region = gcnew System::Drawing::Region(circularPath3);
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath4 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath4->AddEllipse(0, 0, btn4->Width - 1, btn4->Height - 1);
		btn4->Region = gcnew System::Drawing::Region(circularPath4);
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath5 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath5->AddEllipse(0, 0, btn5->Width - 1, btn5->Height - 1);
		btn5->Region = gcnew System::Drawing::Region(circularPath5);
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath6 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath6->AddEllipse(0, 0, btn6->Width - 1, btn6->Height - 1);
		btn6->Region = gcnew System::Drawing::Region(circularPath6);
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath7 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath7->AddEllipse(0, 0, btn7->Width - 1, btn7->Height - 1);
		btn7->Region = gcnew System::Drawing::Region(circularPath7);
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath8 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath8->AddEllipse(0, 0, btn8->Width - 1, btn8->Height - 1);
		btn8->Region = gcnew System::Drawing::Region(circularPath8);
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath9 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath9->AddEllipse(0, 0, btn9->Width - 1, btn9->Height - 1);
		btn9->Region = gcnew System::Drawing::Region(circularPath9);
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath10 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath10->AddEllipse(0, 0, button6->Width - 1, button6->Height - 1);
		button6->Region = gcnew System::Drawing::Region(circularPath10);
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath11 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath11->AddEllipse(0, 0, button4->Width - 1, button4->Height - 1);
		button4->Region = gcnew System::Drawing::Region(circularPath11);
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath12 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath12->AddEllipse(0, 0, button5->Width - 1, button5->Height - 1);
		button5->Region = gcnew System::Drawing::Region(circularPath12);
		//
		System::Drawing::Drawing2D::GraphicsPath^ circularPath13 = gcnew System::Drawing::Drawing2D::GraphicsPath();
		circularPath13->AddEllipse(0, 0, btnerase->Width - 1, btnerase->Height - 1);
		btnerase->Region = gcnew System::Drawing::Region(circularPath13);
		//
	}
     public: int count = 0;
  	 
private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "0";
		//count++;
		///*if (count ==4||count==7) {
		//	textBox1->Text += "  ";
		//
		//}*/
}
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "1";
		/*count++;
		if(count ==4||count==7){
			textBox1->Text += "  ";
		}*/
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "2";
		/*count++;
		if(count ==4||count==7){
			textBox1->Text += "  ";
		}*/
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "3";
	/*count++;
	if (count ==4||count==7) {
		textBox1->Text += "  ";
	}*/
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "4";
	/*count++;
	if (count ==4||count==7) {
		textBox1->Text += "  ";
	}*/
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "5";
	/*count++;
	if (count ==4||count==7) {
		textBox1->Text += "  ";
	}*/
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "6";
	/*count++;
	if (count ==4||count==7) {
		textBox1->Text += "  ";
	}*/
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "7";
	/*count++;
	if (count ==4||count==7) {
		textBox1->Text += "  ";
	}*/
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "8";
	/*count++;
	if (count ==4||count==7) {
		textBox1->Text += "  ";
	}*/
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "9";
	
	/*count++;
	if (count ==4||count==7) {
		textBox1->Text += "  ";
	}*/
}
	private: System::Void btnerase_Click(System::Object^ sender, System::EventArgs^ e) {
		//textBox1->Text= textBox1->Clear(System::Convert::ToDouble( textBox1->TextLength-1));

		String^ s = textBox1->Text;
		if (s->Length>0) {
			s = s->Substring(0, s->Length - 1);
			textBox1->Text = s;
		}
		else 
		{
			btnerase->Hide();
			//MessageBox::Show("The textbox is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ text = textBox1->Text;
	 if (text->Length > 0) {
		btnerase->Show();
		addbtn->Show();
	}
	else {
		btnerase->Hide();
		addbtn->Hide();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "*";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "#";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = textBox1->Text;
	if (text->Length != 11) {
	MessageBox::Show("The contact must be 11 numbers", "Error", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
	else {

	// we will save the contact into file here 
	MessageBox::Show("The contact is called succesfully", "Well", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
		public:void performmode() {
				button7->PerformClick();
			}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Add_Contact^ formI = gcnew Add_Contact(textBox1->Text);
	if (count%2!=0)
	{
		formI->BackColor = System::Drawing::Color::FromArgb(246, 248, 237);
		formI->ChangeButtonColor(count);
	}
	formI->ShowDialog();
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button7_Click_2(System::Object^ sender, System::EventArgs^ e) {
	count++;
	Bitmap^ img1 = gcnew Bitmap("C:\\Users\\medog\\source\\repos\\Project\\Project\\Sun.png");
	Bitmap^ img2 = gcnew Bitmap("C:\\Users\\medog\\source\\repos\\Project\\Project\\Moon.png");
	if (count%2==0) {
		button7->BackgroundImage = img1;
		button7->BackgroundImageLayout = ImageLayout::Zoom;
		this->BackColor = System::Drawing::Color::FromArgb(39,39 ,39 );
		textBox1->BackColor = System::Drawing::Color::FromArgb(39,39 ,39 );
		textBox1->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		button3->BackColor = System::Drawing::Color::FromArgb(39, 39, 39);
		button3->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		button7->BackColor = System::Drawing::Color::FromArgb(39,39 ,39 );
		btn1->BackColor = System::Drawing::Color::FromArgb(0,0,0);
		btn2->BackColor = System::Drawing::Color::FromArgb(0,0,0);
		btn3->BackColor = System::Drawing::Color::FromArgb(0,0,0);
		btn4->BackColor = System::Drawing::Color::FromArgb(0,0,0);
		btn5->BackColor = System::Drawing::Color::FromArgb(0,0,0);
		btn6->BackColor = System::Drawing::Color::FromArgb(0,0,0);
		btn7->BackColor = System::Drawing::Color::FromArgb(0,0,0);
		btn8->BackColor = System::Drawing::Color::FromArgb(0,0,0);
		btn9->BackColor = System::Drawing::Color::FromArgb(0,0,0);
		btn0->BackColor = System::Drawing::Color::FromArgb(0,0,0);
		button4->BackColor = System::Drawing::Color::FromArgb(0,0,0);
		button5->BackColor = System::Drawing::Color::FromArgb(0,0,0);
		btnerase->BackColor = System::Drawing::Color::FromArgb(39,39 ,39 );
		//ADJUSTING THE FORECOLOR
		btn1->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		btn2->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		btn3->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		btn4->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		btn5->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		btn6->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		btn7->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		btn8->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		btn9->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		btn0->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		button5->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		Bitmap^ starimg = gcnew Bitmap("C:\\AWS Course\\whitestar.png");
		button4->BackgroundImage = starimg;
		Bitmap^ eraseimg = gcnew Bitmap("C:\\AWS Course\\Whiteerase.png");
		btnerase->BackgroundImage = eraseimg;
		btnerase->BackColor = System::Drawing::Color::FromArgb(39,39,39);
		btnerase->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(39,39,39);
		btnerase->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(39,39,39);
		btnerase->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(39,39,39);
	}
	else {
		button7->BackgroundImage = img2;
		button7->BackgroundImageLayout = ImageLayout::Zoom;
		/////
		/*KeyPad::BackColor::*/
		this->BackColor = System::Drawing::Color::FromArgb(246, 248, 237);
		textBox1->BackColor= System::Drawing::Color::FromArgb(246, 248, 237);
		textBox1->ForeColor= System::Drawing::Color::FromArgb(39,39,39);
		button3->BackColor= System::Drawing::Color::FromArgb(246, 248, 237);
		button3->ForeColor= System::Drawing::Color::FromArgb(39, 39, 39);
		button7->BackColor= System::Drawing::Color::FromArgb(246, 248, 237);
		btn1->BackColor= System::Drawing::Color::FromArgb(128,128,128);
		btn2->BackColor = System::Drawing::Color::FromArgb(128, 128, 128);
		btn3->BackColor = System::Drawing::Color::FromArgb(128, 128, 128);
		btn4->BackColor = System::Drawing::Color::FromArgb(128, 128, 128);
		btn5->BackColor = System::Drawing::Color::FromArgb(128, 128, 128);
		btn6->BackColor = System::Drawing::Color::FromArgb(128, 128, 128);
		btn7->BackColor = System::Drawing::Color::FromArgb(128, 128, 128);
		btn8->BackColor = System::Drawing::Color::FromArgb(128, 128, 128);
		btn9->BackColor = System::Drawing::Color::FromArgb(128, 128, 128);
		btn0->BackColor = System::Drawing::Color::FromArgb(128, 128, 128);
		button4->BackColor = System::Drawing::Color::FromArgb(128, 128, 128);
		button5->BackColor = System::Drawing::Color::FromArgb(128, 128, 128);
		btnerase->BackColor = System::Drawing::Color::FromArgb(246,248,237);
		//ADJUSTING THE FORECOLOR
		btn1->ForeColor = System::Drawing::Color::FromArgb(0,0,0);
		btn2->ForeColor = System::Drawing::Color::FromArgb(0,0,0);
		btn3->ForeColor = System::Drawing::Color::FromArgb(0,0,0);
		btn4->ForeColor = System::Drawing::Color::FromArgb(0,0,0);
		btn5->ForeColor = System::Drawing::Color::FromArgb(0,0,0);
		btn6->ForeColor = System::Drawing::Color::FromArgb(0,0,0);
		btn7->ForeColor = System::Drawing::Color::FromArgb(0,0,0);
		btn8->ForeColor = System::Drawing::Color::FromArgb(0,0,0);
		btn9->ForeColor = System::Drawing::Color::FromArgb(0,0,0);
		btn0->ForeColor = System::Drawing::Color::FromArgb(0,0,0);
		button5->ForeColor = System::Drawing::Color::FromArgb(0,0,0);
		Bitmap^ starimg = gcnew Bitmap("C:\\AWS Course\\blackstar.png");
		button4->BackgroundImage = starimg;
		Bitmap^ eraseimg = gcnew Bitmap("C:\\AWS Course\\Blackerase.png");
		btnerase->BackgroundImage = eraseimg;
		btnerase->BackColor = System::Drawing::Color::FromArgb(246, 248, 237);
		btnerase->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(246, 248, 237);
		btnerase->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(246, 248, 237);
		btnerase->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(246, 248, 237);
	}


}
	   public: Recents^ recentform = gcnew Recents();
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	recentform->ShowDialog();
}
};
}