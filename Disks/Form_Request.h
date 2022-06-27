#pragma once
#include <iostream>
#include "Game.h"

struct disk {
	int id;			// ID диска
	char name[30],	// название диска
		type[30];	// тип носителя
	int year,		// год выпуска
		count,		// количество дисков
		price;		// цена
};
char path[] = "disks.txt";

namespace Disks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form_Request
	/// </summary>
	public ref class Form_Request : public System::Windows::Forms::Form
	{
	public:
		Form_Request(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form_Request()
		{
			_fcloseall();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_Year;

	private: System::Windows::Forms::TextBox^ textBox_Type;
	private: System::Windows::Forms::TextBox^ textBox_Name;

	private: System::Windows::Forms::GroupBox^ groupBox_AmountCond;

	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::GroupBox^ groupBox_YearCond;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_Amount;


	private: System::Windows::Forms::GroupBox^ groupBox_PriceCond;

	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_Price;

	private: System::Windows::Forms::Button^ button_Request;
	private: System::Windows::Forms::CheckBox^ checkBox_Price;

	private: System::Windows::Forms::CheckBox^ checkBox_Amount;

	private: System::Windows::Forms::CheckBox^ checkBox_Year;

	private: System::Windows::Forms::CheckBox^ checkBox_Type;

	private: System::Windows::Forms::CheckBox^ checkBox_Name;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_Type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_Year;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_Amount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_Price;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage_Correct;

	private: System::Windows::Forms::TabPage^ tabPage_Add;
	private: System::Windows::Forms::TabPage^ tabPage_Remove;
	private: System::Windows::Forms::TabPage^ tabPage_Request;

































	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_Request::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_Price = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_Amount = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_Year = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_Type = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_Name = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox_PriceCond = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox_AmountCond = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox_YearCond = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->numericUpDown_Price = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_Amount = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_Year = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox_Type = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->button_Request = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage_Correct = (gcnew System::Windows::Forms::TabPage());
			this->tabPage_Add = (gcnew System::Windows::Forms::TabPage());
			this->tabPage_Remove = (gcnew System::Windows::Forms::TabPage());
			this->tabPage_Request = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox_PriceCond->SuspendLayout();
			this->groupBox_AmountCond->SuspendLayout();
			this->groupBox_YearCond->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Price))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Amount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Year))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage_Request->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column_id,
					this->Column_Name, this->Column_Type, this->Column_Year, this->Column_Amount, this->Column_Price
			});
			this->dataGridView1->Location = System::Drawing::Point(292, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1165, 508);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form_Request::dataGridView1_Paint);
			// 
			// Column_id
			// 
			this->Column_id->HeaderText = L"ID";
			this->Column_id->Name = L"Column_id";
			this->Column_id->ReadOnly = true;
			this->Column_id->Width = 25;
			// 
			// Column_Name
			// 
			this->Column_Name->HeaderText = L"Название диска";
			this->Column_Name->Name = L"Column_Name";
			this->Column_Name->ReadOnly = true;
			this->Column_Name->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column_Name->Width = 300;
			// 
			// Column_Type
			// 
			this->Column_Type->HeaderText = L"Тип диска";
			this->Column_Type->Name = L"Column_Type";
			this->Column_Type->ReadOnly = true;
			this->Column_Type->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column_Type->Width = 200;
			// 
			// Column_Year
			// 
			this->Column_Year->HeaderText = L"Год издания";
			this->Column_Year->Name = L"Column_Year";
			this->Column_Year->ReadOnly = true;
			this->Column_Year->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column_Year->Width = 200;
			// 
			// Column_Amount
			// 
			this->Column_Amount->HeaderText = L"Количество";
			this->Column_Amount->Name = L"Column_Amount";
			this->Column_Amount->ReadOnly = true;
			this->Column_Amount->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column_Price
			// 
			this->Column_Price->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column_Price->HeaderText = L"Цена за штуку";
			this->Column_Price->Name = L"Column_Price";
			this->Column_Price->ReadOnly = true;
			this->Column_Price->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 490);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Режим пользователя\r\n(доступны только запросы)";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox_Price);
			this->groupBox1->Controls->Add(this->checkBox_Amount);
			this->groupBox1->Controls->Add(this->checkBox_Year);
			this->groupBox1->Controls->Add(this->checkBox_Type);
			this->groupBox1->Controls->Add(this->checkBox_Name);
			this->groupBox1->Controls->Add(this->groupBox_PriceCond);
			this->groupBox1->Controls->Add(this->groupBox_AmountCond);
			this->groupBox1->Controls->Add(this->groupBox_YearCond);
			this->groupBox1->Controls->Add(this->numericUpDown_Price);
			this->groupBox1->Controls->Add(this->numericUpDown_Amount);
			this->groupBox1->Controls->Add(this->numericUpDown_Year);
			this->groupBox1->Controls->Add(this->textBox_Type);
			this->groupBox1->Controls->Add(this->textBox_Name);
			this->groupBox1->Location = System::Drawing::Point(6, 9);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(254, 362);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры отбора";
			// 
			// checkBox_Price
			// 
			this->checkBox_Price->AutoSize = true;
			this->checkBox_Price->Location = System::Drawing::Point(6, 274);
			this->checkBox_Price->Name = L"checkBox_Price";
			this->checkBox_Price->Size = System::Drawing::Size(92, 19);
			this->checkBox_Price->TabIndex = 6;
			this->checkBox_Price->Text = L"Цена за шт:";
			this->checkBox_Price->UseVisualStyleBackColor = true;
			this->checkBox_Price->CheckedChanged += gcnew System::EventHandler(this, &Form_Request::checkBox_CheckedChanged);
			// 
			// checkBox_Amount
			// 
			this->checkBox_Amount->AutoSize = true;
			this->checkBox_Amount->Location = System::Drawing::Point(6, 188);
			this->checkBox_Amount->Name = L"checkBox_Amount";
			this->checkBox_Amount->Size = System::Drawing::Size(92, 19);
			this->checkBox_Amount->TabIndex = 6;
			this->checkBox_Amount->Text = L"Количество:";
			this->checkBox_Amount->UseVisualStyleBackColor = true;
			this->checkBox_Amount->CheckedChanged += gcnew System::EventHandler(this, &Form_Request::checkBox_CheckedChanged);
			// 
			// checkBox_Year
			// 
			this->checkBox_Year->AutoSize = true;
			this->checkBox_Year->Location = System::Drawing::Point(6, 103);
			this->checkBox_Year->Name = L"checkBox_Year";
			this->checkBox_Year->Size = System::Drawing::Size(98, 19);
			this->checkBox_Year->TabIndex = 6;
			this->checkBox_Year->Text = L"Год издания:";
			this->checkBox_Year->UseVisualStyleBackColor = true;
			this->checkBox_Year->CheckedChanged += gcnew System::EventHandler(this, &Form_Request::checkBox_CheckedChanged);
			// 
			// checkBox_Type
			// 
			this->checkBox_Type->AutoSize = true;
			this->checkBox_Type->Location = System::Drawing::Point(6, 73);
			this->checkBox_Type->Name = L"checkBox_Type";
			this->checkBox_Type->Size = System::Drawing::Size(86, 19);
			this->checkBox_Type->TabIndex = 6;
			this->checkBox_Type->Text = L"Тип диска:";
			this->checkBox_Type->UseVisualStyleBackColor = true;
			this->checkBox_Type->CheckedChanged += gcnew System::EventHandler(this, &Form_Request::checkBox_CheckedChanged);
			// 
			// checkBox_Name
			// 
			this->checkBox_Name->AutoSize = true;
			this->checkBox_Name->Location = System::Drawing::Point(6, 41);
			this->checkBox_Name->Name = L"checkBox_Name";
			this->checkBox_Name->Size = System::Drawing::Size(80, 19);
			this->checkBox_Name->TabIndex = 6;
			this->checkBox_Name->Text = L"Название:";
			this->checkBox_Name->UseVisualStyleBackColor = true;
			this->checkBox_Name->CheckedChanged += gcnew System::EventHandler(this, &Form_Request::checkBox_CheckedChanged);
			// 
			// groupBox_PriceCond
			// 
			this->groupBox_PriceCond->Controls->Add(this->radioButton7);
			this->groupBox_PriceCond->Controls->Add(this->radioButton8);
			this->groupBox_PriceCond->Controls->Add(this->radioButton9);
			this->groupBox_PriceCond->Enabled = false;
			this->groupBox_PriceCond->Location = System::Drawing::Point(133, 303);
			this->groupBox_PriceCond->Name = L"groupBox_PriceCond";
			this->groupBox_PriceCond->Size = System::Drawing::Size(115, 48);
			this->groupBox_PriceCond->TabIndex = 5;
			this->groupBox_PriceCond->TabStop = false;
			this->groupBox_PriceCond->Text = L"Условие";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(81, 23);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(31, 19);
			this->radioButton7->TabIndex = 0;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L">";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(44, 23);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(31, 19);
			this->radioButton8->TabIndex = 0;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"=";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(7, 23);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(31, 19);
			this->radioButton9->TabIndex = 0;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"<";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// groupBox_AmountCond
			// 
			this->groupBox_AmountCond->Controls->Add(this->radioButton4);
			this->groupBox_AmountCond->Controls->Add(this->radioButton5);
			this->groupBox_AmountCond->Controls->Add(this->radioButton6);
			this->groupBox_AmountCond->Enabled = false;
			this->groupBox_AmountCond->Location = System::Drawing::Point(133, 218);
			this->groupBox_AmountCond->Name = L"groupBox_AmountCond";
			this->groupBox_AmountCond->Size = System::Drawing::Size(115, 48);
			this->groupBox_AmountCond->TabIndex = 5;
			this->groupBox_AmountCond->TabStop = false;
			this->groupBox_AmountCond->Text = L"Условие";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(81, 23);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(31, 19);
			this->radioButton4->TabIndex = 0;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L">";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(44, 23);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(31, 19);
			this->radioButton5->TabIndex = 0;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"=";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(7, 23);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(31, 19);
			this->radioButton6->TabIndex = 0;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"<";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// groupBox_YearCond
			// 
			this->groupBox_YearCond->Controls->Add(this->radioButton3);
			this->groupBox_YearCond->Controls->Add(this->radioButton2);
			this->groupBox_YearCond->Controls->Add(this->radioButton1);
			this->groupBox_YearCond->Enabled = false;
			this->groupBox_YearCond->Location = System::Drawing::Point(133, 133);
			this->groupBox_YearCond->Name = L"groupBox_YearCond";
			this->groupBox_YearCond->Size = System::Drawing::Size(115, 48);
			this->groupBox_YearCond->TabIndex = 5;
			this->groupBox_YearCond->TabStop = false;
			this->groupBox_YearCond->Text = L"Условие";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(81, 23);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(31, 19);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->Text = L">";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(44, 23);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(31, 19);
			this->radioButton2->TabIndex = 0;
			this->radioButton2->Text = L"=";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 23);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(31, 19);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"<";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// numericUpDown_Price
			// 
			this->numericUpDown_Price->Enabled = false;
			this->numericUpDown_Price->Location = System::Drawing::Point(132, 273);
			this->numericUpDown_Price->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown_Price->Name = L"numericUpDown_Price";
			this->numericUpDown_Price->Size = System::Drawing::Size(116, 20);
			this->numericUpDown_Price->TabIndex = 4;
			// 
			// numericUpDown_Amount
			// 
			this->numericUpDown_Amount->Enabled = false;
			this->numericUpDown_Amount->Location = System::Drawing::Point(132, 188);
			this->numericUpDown_Amount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown_Amount->Name = L"numericUpDown_Amount";
			this->numericUpDown_Amount->Size = System::Drawing::Size(116, 20);
			this->numericUpDown_Amount->TabIndex = 4;
			// 
			// numericUpDown_Year
			// 
			this->numericUpDown_Year->Enabled = false;
			this->numericUpDown_Year->Location = System::Drawing::Point(133, 103);
			this->numericUpDown_Year->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->numericUpDown_Year->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_Year->Name = L"numericUpDown_Year";
			this->numericUpDown_Year->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->numericUpDown_Year->Size = System::Drawing::Size(115, 20);
			this->numericUpDown_Year->TabIndex = 4;
			this->numericUpDown_Year->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			// 
			// textBox_Type
			// 
			this->textBox_Type->Enabled = false;
			this->textBox_Type->Location = System::Drawing::Point(133, 72);
			this->textBox_Type->Name = L"textBox_Type";
			this->textBox_Type->Size = System::Drawing::Size(115, 20);
			this->textBox_Type->TabIndex = 3;
			// 
			// textBox_Name
			// 
			this->textBox_Name->Enabled = false;
			this->textBox_Name->Location = System::Drawing::Point(133, 39);
			this->textBox_Name->Name = L"textBox_Name";
			this->textBox_Name->Size = System::Drawing::Size(115, 20);
			this->textBox_Name->TabIndex = 3;
			// 
			// button_Request
			// 
			this->button_Request->Location = System::Drawing::Point(138, 377);
			this->button_Request->Name = L"button_Request";
			this->button_Request->Size = System::Drawing::Size(122, 28);
			this->button_Request->TabIndex = 4;
			this->button_Request->Text = L"Создать запрос";
			this->button_Request->UseVisualStyleBackColor = true;
			this->button_Request->Click += gcnew System::EventHandler(this, &Form_Request::button_Request_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 27);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Сбросить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Request::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(242, 480);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 40);
			this->button2->TabIndex = 5;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form_Request::button2_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->tabControl1->Controls->Add(this->tabPage_Request);
			this->tabControl1->Controls->Add(this->tabPage_Add);
			this->tabControl1->Controls->Add(this->tabPage_Remove);
			this->tabControl1->Controls->Add(this->tabPage_Correct);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(274, 439);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage_Correct
			// 
			this->tabPage_Correct->Location = System::Drawing::Point(4, 24);
			this->tabPage_Correct->Name = L"tabPage_Correct";
			this->tabPage_Correct->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Correct->Size = System::Drawing::Size(266, 411);
			this->tabPage_Correct->TabIndex = 0;
			this->tabPage_Correct->Text = L"Корректировка";
			this->tabPage_Correct->UseVisualStyleBackColor = true;
			// 
			// tabPage_Add
			// 
			this->tabPage_Add->Location = System::Drawing::Point(4, 24);
			this->tabPage_Add->Name = L"tabPage_Add";
			this->tabPage_Add->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Add->Size = System::Drawing::Size(266, 411);
			this->tabPage_Add->TabIndex = 1;
			this->tabPage_Add->Text = L"Добавление";
			this->tabPage_Add->UseVisualStyleBackColor = true;
			// 
			// tabPage_Remove
			// 
			this->tabPage_Remove->Location = System::Drawing::Point(4, 24);
			this->tabPage_Remove->Name = L"tabPage_Remove";
			this->tabPage_Remove->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Remove->Size = System::Drawing::Size(266, 411);
			this->tabPage_Remove->TabIndex = 2;
			this->tabPage_Remove->Text = L"Удаление";
			this->tabPage_Remove->UseVisualStyleBackColor = true;
			// 
			// tabPage_Request
			// 
			this->tabPage_Request->Controls->Add(this->groupBox1);
			this->tabPage_Request->Controls->Add(this->button_Request);
			this->tabPage_Request->Controls->Add(this->button1);
			this->tabPage_Request->Location = System::Drawing::Point(4, 24);
			this->tabPage_Request->Name = L"tabPage_Request";
			this->tabPage_Request->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Request->Size = System::Drawing::Size(266, 411);
			this->tabPage_Request->TabIndex = 3;
			this->tabPage_Request->Text = L"Запрос";
			this->tabPage_Request->UseVisualStyleBackColor = true;
			// 
			// Form_Request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1469, 532);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1000, 571);
			this->Name = L"Form_Request";
			this->Text = L"Request";
			this->Shown += gcnew System::EventHandler(this, &Form_Request::Form_Request_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox_PriceCond->ResumeLayout(false);
			this->groupBox_PriceCond->PerformLayout();
			this->groupBox_AmountCond->ResumeLayout(false);
			this->groupBox_AmountCond->PerformLayout();
			this->groupBox_YearCond->ResumeLayout(false);
			this->groupBox_YearCond->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Price))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Amount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Year))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage_Request->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	   void _cleardata() {
		   while (0 != dataGridView1->RowCount)
			   dataGridView1->Rows->RemoveAt(0);
	   }

	   void _adddatadisk(disk disk, int i) {
		   dataGridView1->Rows->Add();
		   dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(disk.id);
		   dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(disk.name);
		   dataGridView1->Rows[i]->Cells[2]->Value = gcnew String(disk.type);
		   dataGridView1->Rows[i]->Cells[3]->Value = Convert::ToString(disk.year);
		   dataGridView1->Rows[i]->Cells[4]->Value = Convert::ToString(disk.count);
		   dataGridView1->Rows[i]->Cells[5]->Value = Convert::ToString(disk.price);
	   }

	   char* _func_strstr(char* str1, char* str2) {
		   bool isdif = false;
		   for (int i = 0; str1[i] != '\0'; i++) {
			   for (int j = 0; str2[j] != '\0'; j++) {
				   if (str1[i + j] != str2[j]) { isdif = true; break; }
			   }
			   if (!isdif) {
				   return (char*)(str1 + i);
			   }
			   isdif = false;
		   }
		   return NULL;
	   }

	   int _fscandisk(FILE* fptr, disk* disk) {
		   int len;
		   char empty[10];
		   if (fgets(disk->name, 30, fptr) == NULL) return -1;
		   else {
			   len = strlen(disk->name);
			   disk->name[len - 1] = '\0';
		   }
		   if (fscanf_s(fptr, "%s", &disk->type, 30) != 1) return -1;
		   else if (fscanf_s(fptr, "%d", &disk->year) != 1) return -1;
		   else if (fscanf_s(fptr, "%d", &disk->count) != 1) return -1;
		   else if (fscanf_s(fptr, "%d", &disk->price) != 1) return -1;
		   else if (fscanf_s(fptr, "%d", &disk->id) != 1) return -1;
		   fgets(empty, 10, fptr);
		   return 0;
	   }

private: System::Void dataGridView1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	dataGridView1->Columns[1]->Width = (int)((dataGridView1->Width - 92) * 0.3);
	dataGridView1->Columns[2]->Width = (int)((dataGridView1->Width - 92) * 0.2);
	dataGridView1->Columns[3]->Width = (int)((dataGridView1->Width - 92) * 0.1);
	dataGridView1->Columns[4]->Width = (int)((dataGridView1->Width - 92) * 0.2);
}

private: System::Void checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::CheckBox^ cb = (CheckBox^)sender;
	bool isEnabled = cb->Checked;
	if (cb->Name == (String^)"checkBox_Name") textBox_Name->Enabled = isEnabled;
	else if (cb->Name == (String^)"checkBox_Type") textBox_Type->Enabled = isEnabled;
	else if (cb->Name == (String^)"checkBox_Year") {
		numericUpDown_Year->Enabled = isEnabled;
		groupBox_YearCond->Enabled = isEnabled;
	}
	else if (cb->Name == (String^)"checkBox_Amount") {
		numericUpDown_Amount->Enabled = isEnabled;
		groupBox_AmountCond->Enabled = isEnabled;
	}
	else if (cb->Name == (String^)"checkBox_Price") {
		numericUpDown_Price->Enabled = isEnabled;
		groupBox_PriceCond->Enabled = isEnabled;
	}
}

private: System::Void Form_Request_Shown(System::Object^ sender, System::EventArgs^ e) {
	disk disk;
	FILE* fptr;

	fopen_s(&fptr, path, "r");
	if (fptr == NULL) {
		MessageBox::Show("Файл c дисками не был найден!", "Error!");
		return;
	}

	if (_fscandisk(fptr, &disk) == -1) {
		MessageBox::Show("В файле нет дисков!", "Error!");
		return;
	}

	_cleardata();
	int i = 0;
	do {
		_adddatadisk(disk, i);
		i++;
	} while (_fscandisk(fptr, &disk) != -1);
	_fcloseall();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//Здесь уже то что будет происхоить если я нажму на button1
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
	radioButton4->Checked = false;
	radioButton5->Checked = false;
	radioButton6->Checked = false;
	radioButton7->Checked = false;
	radioButton8->Checked = false;
	radioButton9->Checked = false;

	textBox_Name->Text = "";
	textBox_Type->Text = "";
	numericUpDown_Year->Value = 1000;
	numericUpDown_Amount->Value = 0;
	numericUpDown_Price->Value = 0;

	checkBox_Name->Checked = false;
	checkBox_Type->Checked = false;
	checkBox_Year->Checked = false;
	checkBox_Amount->Checked = false;
	checkBox_Price->Checked = false;

	disk disk;
	FILE* fptr;

	_cleardata();
	fopen_s(&fptr, path, "r");
	int i = 0;
	while (_fscandisk(fptr, &disk) != -1){
		_adddatadisk(disk, i);
		i++;
	} 
	_fcloseall();
}

private: System::Void button_Request_Click(System::Object^ sender, System::EventArgs^ e) {
	disk disk;
	FILE* fptr;
	int pole, num;
	char str[30], par;
	bool del = false;

	_cleardata();
	fopen_s(&fptr, path, "r");

	int i = 0;
	while (_fscandisk(fptr, &disk) != -1){
		if (checkBox_Name->Checked)
			if (textBox_Name->Text != (String^)gcnew String(disk.name)) continue;
		if (checkBox_Type->Checked)
			if (textBox_Type->Text != (String^)gcnew String(disk.type)) continue;
		if (checkBox_Year->Checked) {
			if (radioButton1->Checked)// <
				if (numericUpDown_Year->Value <= disk.year) continue;
			if (radioButton2->Checked)// =
				if (numericUpDown_Year->Value != disk.year) continue;
			if (radioButton3->Checked)// >
				if (numericUpDown_Year->Value >= disk.year) continue;
		}
		if (checkBox_Amount->Checked) {
			if (radioButton6->Checked)// <
				if (numericUpDown_Amount->Value <= disk.count) continue;
			if (radioButton5->Checked)// =
				if (numericUpDown_Amount->Value != disk.count) continue;
			if (radioButton4->Checked)// >
				if (numericUpDown_Amount->Value >= disk.count) continue;
		}
		if (checkBox_Price->Checked) {
			if (radioButton9->Checked)// <
				if (numericUpDown_Price->Value <= disk.price) continue;
			if (radioButton8->Checked)// =
				if (numericUpDown_Price->Value != disk.price) continue;
			if (radioButton7->Checked)// >
				if (numericUpDown_Price->Value >= disk.price) continue;
		}

		_adddatadisk(disk, i);
		i++;
	} 
	_fcloseall();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Game^ game = gcnew Game();
	game->Show();
}
};
}
