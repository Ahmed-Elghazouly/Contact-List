#pragma once
#include "KeyPad.h"
#include "Recents.h"
#using <mscorlib.dll>
#include"UserWrapper.h"
#include <msclr/marshal_cppstd.h> // Include the header for marshaling
#using <mscorlib.dll>
using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
namespace Project {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
 

    /// <summary>
    /// Summary for Dialpad
    /// </summary>
    public ref class Dialpad : public System::Windows::Forms::Form
    {
    private: //System::Windows::Forms::Button ^ button2;
             List<Button^>^ buttonList = gcnew List<Button^>();
        
 
    public:
        Dialpad(void)
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
        ~Dialpad()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Button^ modebtn;
    private: System::Windows::Forms::TextBox^ SearchBox;
    private: System::Windows::Forms::PictureBox^ pictureBox1;


    private: System::Windows::Forms::Button^ btnB;
    private: System::Windows::Forms::Button^ btnC;
    private: System::Windows::Forms::Button^ btnD;
    private: System::Windows::Forms::Button^ btnE;
    private: System::Windows::Forms::Button^ btnF;
    private: System::Windows::Forms::Button^ btnG;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::Button^ button22;
    private: System::Windows::Forms::Button^ button23;
    private: System::Windows::Forms::Button^ button24;

    private: System::Windows::Forms::Button^ button26;
    private: System::Windows::Forms::Button^ btnA;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ button25;
    private: System::Windows::Forms::Label^ searchlbl;




















    protected:

    protected:


    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dialpad::typeid));
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->modebtn = (gcnew System::Windows::Forms::Button());
            this->SearchBox = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->btnB = (gcnew System::Windows::Forms::Button());
            this->btnC = (gcnew System::Windows::Forms::Button());
            this->btnD = (gcnew System::Windows::Forms::Button());
            this->btnE = (gcnew System::Windows::Forms::Button());
            this->btnF = (gcnew System::Windows::Forms::Button());
            this->btnG = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->button26 = (gcnew System::Windows::Forms::Button());
            this->btnA = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button25 = (gcnew System::Windows::Forms::Button());
            this->searchlbl = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F));
            this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button3->Location = System::Drawing::Point(237, 3);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(113, 70);
            this->button3->TabIndex = 2;
            this->button3->Text = L"Keypad";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &Dialpad::button3_Click);
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
            this->button1->Click += gcnew System::EventHandler(this, &Dialpad::button1_Click);
            // 
            // button2
            // 
            this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button2->Enabled = false;
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
            this->button2->Click += gcnew System::EventHandler(this, &Dialpad::button2_Click_1);
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
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 76)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(353, 76);
            this->tableLayoutPanel1->TabIndex = 1;
            this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dialpad::tableLayoutPanel1_Paint);
            // 
            // button4
            // 
            this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
            this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button4->CausesValidation = false;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(343, 37);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(40, 39);
            this->button4->TabIndex = 28;
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &Dialpad::button4_Click);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Black;
            this->panel2->Location = System::Drawing::Point(30, 725);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(379, 2);
            this->panel2->TabIndex = 29;
            // 
            // modebtn
            // 
            this->modebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->modebtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modebtn.BackgroundImage")));
            this->modebtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->modebtn->FlatAppearance->BorderSize = 0;
            this->modebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->modebtn->Location = System::Drawing::Point(44, 37);
            this->modebtn->Name = L"modebtn";
            this->modebtn->Size = System::Drawing::Size(59, 54);
            this->modebtn->TabIndex = 32;
            this->modebtn->UseVisualStyleBackColor = false;
            this->modebtn->Click += gcnew System::EventHandler(this, &Dialpad::modebtn_Click);
            // 
            // SearchBox
            // 
            this->SearchBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
                static_cast<System::Int32>(static_cast<System::Byte>(16)));
            this->SearchBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->SearchBox->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SearchBox->ForeColor = System::Drawing::Color::White;
            this->SearchBox->Location = System::Drawing::Point(58, 149);
            this->SearchBox->Name = L"SearchBox";
            this->SearchBox->Size = System::Drawing::Size(296, 23);
            this->SearchBox->TabIndex = 34;
            this->SearchBox->Text = L" Search";
            this->SearchBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Dialpad::SearchBox_MouseClick);
            this->SearchBox->TextChanged += gcnew System::EventHandler(this, &Dialpad::SearchBox_TextChanged);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox1->Location = System::Drawing::Point(44, 125);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(326, 71);
            this->pictureBox1->TabIndex = 35;
            this->pictureBox1->TabStop = false;
            // 
            // btnB
            // 
            this->btnB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->btnB->FlatAppearance->BorderSize = 0;
            this->btnB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnB->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->btnB->Location = System::Drawing::Point(383, 247);
            this->btnB->Name = L"btnB";
            this->btnB->Size = System::Drawing::Size(18, 24);
            this->btnB->TabIndex = 37;
            this->btnB->Text = L"B";
            this->btnB->UseVisualStyleBackColor = false;
            // 
            // btnC
            // 
            this->btnC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->btnC->FlatAppearance->BorderSize = 0;
            this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnC->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnC->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->btnC->Location = System::Drawing::Point(383, 265);
            this->btnC->Name = L"btnC";
            this->btnC->Size = System::Drawing::Size(18, 25);
            this->btnC->TabIndex = 37;
            this->btnC->Text = L"C";
            this->btnC->UseVisualStyleBackColor = false;
            // 
            // btnD
            // 
            this->btnD->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->btnD->FlatAppearance->BorderSize = 0;
            this->btnD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnD->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnD->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->btnD->Location = System::Drawing::Point(383, 283);
            this->btnD->Name = L"btnD";
            this->btnD->Size = System::Drawing::Size(18, 24);
            this->btnD->TabIndex = 37;
            this->btnD->Text = L"D";
            this->btnD->UseVisualStyleBackColor = false;
            // 
            // btnE
            // 
            this->btnE->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->btnE->FlatAppearance->BorderSize = 0;
            this->btnE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnE->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->btnE->Location = System::Drawing::Point(383, 301);
            this->btnE->Name = L"btnE";
            this->btnE->Size = System::Drawing::Size(18, 25);
            this->btnE->TabIndex = 37;
            this->btnE->Text = L"E";
            this->btnE->UseVisualStyleBackColor = false;
            // 
            // btnF
            // 
            this->btnF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->btnF->FlatAppearance->BorderSize = 0;
            this->btnF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnF->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnF->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->btnF->Location = System::Drawing::Point(383, 320);
            this->btnF->Name = L"btnF";
            this->btnF->Size = System::Drawing::Size(18, 25);
            this->btnF->TabIndex = 37;
            this->btnF->Text = L"F";
            this->btnF->UseVisualStyleBackColor = false;
            // 
            // btnG
            // 
            this->btnG->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->btnG->FlatAppearance->BorderSize = 0;
            this->btnG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnG->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnG->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->btnG->Location = System::Drawing::Point(383, 339);
            this->btnG->Name = L"btnG";
            this->btnG->Size = System::Drawing::Size(18, 24);
            this->btnG->TabIndex = 37;
            this->btnG->Text = L"G";
            this->btnG->UseVisualStyleBackColor = false;
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button6->Location = System::Drawing::Point(385, 357);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(14, 21);
            this->button6->TabIndex = 37;
            this->button6->Text = L"H";
            this->button6->UseVisualStyleBackColor = false;
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button7->FlatAppearance->BorderSize = 0;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button7->Location = System::Drawing::Point(383, 373);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(18, 25);
            this->button7->TabIndex = 37;
            this->button7->Text = L"I";
            this->button7->UseVisualStyleBackColor = false;
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button8->FlatAppearance->BorderSize = 0;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button8->Location = System::Drawing::Point(383, 391);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(18, 24);
            this->button8->TabIndex = 37;
            this->button8->Text = L"J";
            this->button8->UseVisualStyleBackColor = false;
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button9->FlatAppearance->BorderSize = 0;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button9->Location = System::Drawing::Point(383, 409);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(18, 25);
            this->button9->TabIndex = 37;
            this->button9->Text = L"K";
            this->button9->UseVisualStyleBackColor = false;
            // 
            // button10
            // 
            this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button10->FlatAppearance->BorderSize = 0;
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button10->Location = System::Drawing::Point(383, 426);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(18, 25);
            this->button10->TabIndex = 37;
            this->button10->Text = L"L";
            this->button10->UseVisualStyleBackColor = false;
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button5->Location = System::Drawing::Point(383, 443);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(18, 24);
            this->button5->TabIndex = 37;
            this->button5->Text = L"M";
            this->button5->UseVisualStyleBackColor = false;
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button11->FlatAppearance->BorderSize = 0;
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button11->Location = System::Drawing::Point(384, 443);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(17, 25);
            this->button11->TabIndex = 37;
            this->button11->Text = L"N";
            this->button11->UseVisualStyleBackColor = false;
            // 
            // button12
            // 
            this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button12->FlatAppearance->BorderSize = 0;
            this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button12->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button12->Location = System::Drawing::Point(384, 460);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(17, 24);
            this->button12->TabIndex = 37;
            this->button12->Text = L"O";
            this->button12->UseVisualStyleBackColor = false;
            // 
            // button13
            // 
            this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button13->FlatAppearance->BorderSize = 0;
            this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button13->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button13->Location = System::Drawing::Point(384, 478);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(17, 25);
            this->button13->TabIndex = 37;
            this->button13->Text = L"P";
            this->button13->UseVisualStyleBackColor = false;
            // 
            // button14
            // 
            this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button14->FlatAppearance->BorderSize = 0;
            this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button14->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button14->Location = System::Drawing::Point(384, 496);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(17, 25);
            this->button14->TabIndex = 37;
            this->button14->Text = L"Q";
            this->button14->UseVisualStyleBackColor = false;
            // 
            // button15
            // 
            this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button15->FlatAppearance->BorderSize = 0;
            this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button15->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button15->Location = System::Drawing::Point(384, 513);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(17, 25);
            this->button15->TabIndex = 37;
            this->button15->Text = L"R";
            this->button15->UseVisualStyleBackColor = false;
            // 
            // button16
            // 
            this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button16->FlatAppearance->BorderSize = 0;
            this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button16->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button16->Location = System::Drawing::Point(384, 530);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(17, 24);
            this->button16->TabIndex = 37;
            this->button16->Text = L"S";
            this->button16->UseVisualStyleBackColor = false;
            // 
            // button17
            // 
            this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button17->FlatAppearance->BorderSize = 0;
            this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button17->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button17->Location = System::Drawing::Point(384, 548);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(17, 25);
            this->button17->TabIndex = 37;
            this->button17->Text = L"T";
            this->button17->UseVisualStyleBackColor = false;
            // 
            // button18
            // 
            this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button18->FlatAppearance->BorderSize = 0;
            this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button18->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button18->Location = System::Drawing::Point(384, 566);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(17, 25);
            this->button18->TabIndex = 37;
            this->button18->Text = L"U";
            this->button18->UseVisualStyleBackColor = false;
            // 
            // button19
            // 
            this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button19->FlatAppearance->BorderSize = 0;
            this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button19->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button19->Location = System::Drawing::Point(383, 590);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(18, 24);
            this->button19->TabIndex = 37;
            this->button19->Text = L"M";
            this->button19->UseVisualStyleBackColor = false;
            // 
            // button20
            // 
            this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button20->FlatAppearance->BorderSize = 0;
            this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button20->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button20->Location = System::Drawing::Point(384, 583);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(17, 25);
            this->button20->TabIndex = 37;
            this->button20->Text = L"V";
            this->button20->UseVisualStyleBackColor = false;
            // 
            // button21
            // 
            this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button21->FlatAppearance->BorderSize = 0;
            this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button21->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button21->Location = System::Drawing::Point(384, 650);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(17, 25);
            this->button21->TabIndex = 37;
            this->button21->Text = L"Z";
            this->button21->UseVisualStyleBackColor = false;
            // 
            // button22
            // 
            this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button22->FlatAppearance->BorderSize = 0;
            this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button22->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button22->Location = System::Drawing::Point(384, 599);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(17, 24);
            this->button22->TabIndex = 37;
            this->button22->Text = L"W";
            this->button22->UseVisualStyleBackColor = false;
            // 
            // button23
            // 
            this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button23->FlatAppearance->BorderSize = 0;
            this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button23->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button23->Location = System::Drawing::Point(384, 670);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(17, 24);
            this->button23->TabIndex = 37;
            this->button23->Text = L"#";
            this->button23->UseVisualStyleBackColor = false;
            // 
            // button24
            // 
            this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button24->FlatAppearance->BorderSize = 0;
            this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button24->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button24->Location = System::Drawing::Point(384, 616);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(17, 25);
            this->button24->TabIndex = 37;
            this->button24->Text = L"X";
            this->button24->UseVisualStyleBackColor = false;
            // 
            // button26
            // 
            this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->button26->FlatAppearance->BorderSize = 0;
            this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button26->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button26->Location = System::Drawing::Point(384, 633);
            this->button26->Name = L"button26";
            this->button26->Size = System::Drawing::Size(17, 25);
            this->button26->TabIndex = 37;
            this->button26->Text = L"Y";
            this->button26->UseVisualStyleBackColor = false;
            // 
            // btnA
            // 
            this->btnA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->btnA->FlatAppearance->BorderSize = 0;
            this->btnA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnA->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnA->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->btnA->Location = System::Drawing::Point(376, 224);
            this->btnA->Name = L"btnA";
            this->btnA->Size = System::Drawing::Size(32, 31);
            this->btnA->TabIndex = 37;
            this->btnA->Text = L"A";
            this->btnA->UseVisualStyleBackColor = false;
            this->btnA->Click += gcnew System::EventHandler(this, &Dialpad::btnA_Click);
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Black;
            this->panel1->Location = System::Drawing::Point(28, 200);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(386, 2);
            this->panel1->TabIndex = 29;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->label1->Location = System::Drawing::Point(34, 94);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(165, 42);
            this->label1->TabIndex = 38;
            this->label1->Text = L"Contacts";
            // 
            // button25
            // 
            this->button25->FlatAppearance->BorderSize = 0;
            this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button25->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
                static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->button25->Location = System::Drawing::Point(356, 89);
            this->button25->Name = L"button25";
            this->button25->Size = System::Drawing::Size(35, 42);
            this->button25->TabIndex = 39;
            this->button25->Text = L"+";
            this->button25->UseVisualStyleBackColor = true;
            this->button25->Click += gcnew System::EventHandler(this, &Dialpad::button25_Click);
            // 
            // searchlbl
            // 
            this->searchlbl->AutoSize = true;
            this->searchlbl->Location = System::Drawing::Point(54, 685);
            this->searchlbl->Name = L"searchlbl";
            this->searchlbl->Size = System::Drawing::Size(145, 24);
            this->searchlbl->TabIndex = 40;
            this->searchlbl->Text = L"Search Result ";
            // 
            // Dialpad
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(39)));
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(428, 845);
            this->Controls->Add(this->searchlbl);
            this->Controls->Add(this->button25);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->btnA);
            this->Controls->Add(this->button18);
            this->Controls->Add(this->button26);
            this->Controls->Add(this->button14);
            this->Controls->Add(this->button10);
            this->Controls->Add(this->btnF);
            this->Controls->Add(this->button24);
            this->Controls->Add(this->button17);
            this->Controls->Add(this->button23);
            this->Controls->Add(this->button13);
            this->Controls->Add(this->button22);
            this->Controls->Add(this->button16);
            this->Controls->Add(this->button12);
            this->Controls->Add(this->button9);
            this->Controls->Add(this->button21);
            this->Controls->Add(this->button8);
            this->Controls->Add(this->button20);
            this->Controls->Add(this->button15);
            this->Controls->Add(this->button11);
            this->Controls->Add(this->btnE);
            this->Controls->Add(this->button19);
            this->Controls->Add(this->button7);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->btnD);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->btnC);
            this->Controls->Add(this->btnG);
            this->Controls->Add(this->btnB);
            this->Controls->Add(this->SearchBox);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->modebtn);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->tableLayoutPanel1);
            this->DoubleBuffered = true;
            this->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ForeColor = System::Drawing::Color::White;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"Dialpad";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Dialpad";
            this->Load += gcnew System::EventHandler(this, &Dialpad::Dialpad_Load);
            this->tableLayoutPanel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    public: 	
          KeyPad^ form = gcnew KeyPad();
          Add_Contact^ contactform = gcnew Add_Contact();
          Recents^ recentform = gcnew Recents();
          UserWrapper^ user = gcnew UserWrapper();
    private: System::Void Dialpad_Load(System::Object^ sender, System::EventArgs^ e) {

        System::Drawing::Drawing2D::GraphicsPath^ circularPath0 = gcnew System::Drawing::Drawing2D::GraphicsPath();
        vector<string> nativeContacts = user->GetFromFile();

        List<String^>^ contacts = gcnew List<String^>();
        for (const auto& contact : nativeContacts) {
            String^ managedContact = msclr::interop::marshal_as<String^>(contact);
            contacts->Add(managedContact);
        }
        Panel^ contactsPanel = gcnew Panel();
        contactsPanel->Location = System::Drawing::Point(50, 250); // Adjust the panel's position
        contactsPanel->Size = System::Drawing::Size(300, 400); // Adjust the panel's size
        contactsPanel->BorderStyle = BorderStyle::FixedSingle;
        contactsPanel->AutoScroll = true; // Enable scrolling if content overflows

        this->Controls->Add(contactsPanel); // Add the panel to the form's controls

        // Add labels for contacts to the panel
        int yOffset = 0; // Initial Y position
        for (int i = 0; i < contacts->Count; i++) {
          
            Label^ contactLabel = gcnew Label();
            contactLabel->Text = contacts[i];
            contactLabel->Location = System::Drawing::Point(10, yOffset);
            contactLabel->AutoSize = true;
            

            // Add the label to the panel
            contactsPanel->Controls->Add(contactLabel);

            yOffset += contactLabel->Height + 5; // Increment Y position for the next label
            // Event handler for the form's click event
            //contactLabel->Click += gcnew System::EventHandler(this, &DialPad::Label_Click);

        }
    }
		   //private:System::Void Dialpad::Label_Click(System::Object^ sender, System::EventArgs^ e) {
			  // Label^ clickedLabel = dynamic_cast<Label^>(sender);
			  // if (clickedLabel != nullptr) {
				 //  // Create a new label with the clicked label's text
				 //  Label^ newLabel = gcnew Label();
				 //  newLabel->Text = clickedLabel->Text;
				 //  newLabel->Location = System::Drawing::Point(10, yOffset);
				 //  newLabel->AutoSize = true;

				 //  // Add the new label below the clicked label
				 //  contactsPanel->Controls->Add(newLabel);

				 //  yOffset += newLabel->Height + 5;
			  // }
		   //}
         private:  System::Void Form1_Click(System::Object^ sender, System::EventArgs^ e) {
               Point mousePoint = this->PointToClient(Control::MousePosition); // Get the mouse coordinates

               if (label1->Bounds.Contains(mousePoint)) {
                   // The label was clicked
                   // Perform actions for label click here
                   MessageBox::Show("Label clicked!");
               }
           }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

        form->ShowDialog();

    }
    private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void Keypad_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }
    private: System::Void modebtn_Click(System::Object^ sender, System::EventArgs^ e) {
        form->performmode();
    }
    private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void SearchBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        user->SearchContact(SearchBox->Text);
        /*contactform->ShowDialog();*/
       /* contactform.*/
     /*   searchlbl->Text = user->getPhoneNumber(user->SearchContact(SearchBox->Text));*/
        

    }
    private: System::Void SearchBox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
        if (SearchBox->Text == " Search") {
            SearchBox->Clear();
        }
    }
    private: System::Void btnA_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void ContactListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
    contactform->ShowDialog();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    recentform->ShowDialog();
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void contactLabel_Click(System::Object^ sender, System::EventArgs^ e) {
    contactform->ShowDialog();
}
};
}
