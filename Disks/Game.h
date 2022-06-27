#pragma once

namespace Disks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	struct word{};

	/// <summary>
	/// Сводка для Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_Rule;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox_Game;

	private: System::Windows::Forms::TextBox^ textBox_Rus;

	private: System::Windows::Forms::Button^ button_Chek;

	private: System::Windows::Forms::Button^ button_Next;
	private: System::Windows::Forms::TextBox^ textBox_Eng;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox_Mode;

	private: System::Windows::Forms::RadioButton^ radioButton_RE;

	private: System::Windows::Forms::RadioButton^ radioButton_ER;
	private: System::Windows::Forms::Button^ button_Start;
	private: System::Windows::Forms::Label^ label_answer;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label_hp;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_Rule = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox_Game = (gcnew System::Windows::Forms::GroupBox());
			this->label_answer = (gcnew System::Windows::Forms::Label());
			this->textBox_Rus = (gcnew System::Windows::Forms::TextBox());
			this->button_Chek = (gcnew System::Windows::Forms::Button());
			this->button_Next = (gcnew System::Windows::Forms::Button());
			this->textBox_Eng = (gcnew System::Windows::Forms::TextBox());
			this->label_hp = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox_Mode = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton_RE = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_ER = (gcnew System::Windows::Forms::RadioButton());
			this->button_Start = (gcnew System::Windows::Forms::Button());
			this->groupBox_Game->SuspendLayout();
			this->groupBox_Mode->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Игра: Угадай перевод";
			// 
			// button_Rule
			// 
			this->button_Rule->Location = System::Drawing::Point(191, 12);
			this->button_Rule->Name = L"button_Rule";
			this->button_Rule->Size = System::Drawing::Size(81, 23);
			this->button_Rule->TabIndex = 1;
			this->button_Rule->Text = L"Правила";
			this->button_Rule->UseVisualStyleBackColor = true;
			this->button_Rule->Click += gcnew System::EventHandler(this, &Game::button_Rule_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Как переводится\?";
			// 
			// groupBox_Game
			// 
			this->groupBox_Game->Controls->Add(this->label_answer);
			this->groupBox_Game->Controls->Add(this->textBox_Rus);
			this->groupBox_Game->Controls->Add(this->button_Chek);
			this->groupBox_Game->Controls->Add(this->button_Next);
			this->groupBox_Game->Controls->Add(this->textBox_Eng);
			this->groupBox_Game->Controls->Add(this->label_hp);
			this->groupBox_Game->Controls->Add(this->label5);
			this->groupBox_Game->Controls->Add(this->label4);
			this->groupBox_Game->Controls->Add(this->label3);
			this->groupBox_Game->Controls->Add(this->label2);
			this->groupBox_Game->Enabled = false;
			this->groupBox_Game->Location = System::Drawing::Point(15, 116);
			this->groupBox_Game->Name = L"groupBox_Game";
			this->groupBox_Game->Size = System::Drawing::Size(257, 147);
			this->groupBox_Game->TabIndex = 3;
			this->groupBox_Game->TabStop = false;
			// 
			// label_answer
			// 
			this->label_answer->AutoSize = true;
			this->label_answer->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_answer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_answer->Location = System::Drawing::Point(6, 122);
			this->label_answer->Name = L"label_answer";
			this->label_answer->Size = System::Drawing::Size(43, 15);
			this->label_answer->TabIndex = 5;
			this->label_answer->Text = L"Ответ:";
			this->label_answer->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label_answer->Visible = false;
			// 
			// textBox_Rus
			// 
			this->textBox_Rus->Location = System::Drawing::Point(85, 63);
			this->textBox_Rus->Name = L"textBox_Rus";
			this->textBox_Rus->Size = System::Drawing::Size(166, 20);
			this->textBox_Rus->TabIndex = 4;
			// 
			// button_Chek
			// 
			this->button_Chek->Location = System::Drawing::Point(165, 89);
			this->button_Chek->Name = L"button_Chek";
			this->button_Chek->Size = System::Drawing::Size(86, 23);
			this->button_Chek->TabIndex = 1;
			this->button_Chek->Text = L"Проверить";
			this->button_Chek->UseVisualStyleBackColor = true;
			this->button_Chek->Click += gcnew System::EventHandler(this, &Game::button_Chek_Click);
			// 
			// button_Next
			// 
			this->button_Next->Location = System::Drawing::Point(165, 118);
			this->button_Next->Name = L"button_Next";
			this->button_Next->Size = System::Drawing::Size(86, 23);
			this->button_Next->TabIndex = 1;
			this->button_Next->Text = L"Следующий";
			this->button_Next->UseVisualStyleBackColor = true;
			this->button_Next->Click += gcnew System::EventHandler(this, &Game::button_Next_Click);
			// 
			// textBox_Eng
			// 
			this->textBox_Eng->Location = System::Drawing::Point(85, 37);
			this->textBox_Eng->Name = L"textBox_Eng";
			this->textBox_Eng->Size = System::Drawing::Size(166, 20);
			this->textBox_Eng->TabIndex = 4;
			// 
			// label_hp
			// 
			this->label_hp->AutoSize = true;
			this->label_hp->Location = System::Drawing::Point(103, 93);
			this->label_hp->Name = L"label_hp";
			this->label_hp->Size = System::Drawing::Size(13, 15);
			this->label_hp->TabIndex = 3;
			this->label_hp->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 15);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Кол-во жизней:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Русский:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Английский:";
			// 
			// groupBox_Mode
			// 
			this->groupBox_Mode->Controls->Add(this->radioButton_RE);
			this->groupBox_Mode->Controls->Add(this->radioButton_ER);
			this->groupBox_Mode->Controls->Add(this->button_Start);
			this->groupBox_Mode->Location = System::Drawing::Point(15, 41);
			this->groupBox_Mode->Name = L"groupBox_Mode";
			this->groupBox_Mode->Size = System::Drawing::Size(257, 69);
			this->groupBox_Mode->TabIndex = 4;
			this->groupBox_Mode->TabStop = false;
			this->groupBox_Mode->Text = L"Режим игры";
			// 
			// radioButton_RE
			// 
			this->radioButton_RE->AutoSize = true;
			this->radioButton_RE->Location = System::Drawing::Point(6, 44);
			this->radioButton_RE->Name = L"radioButton_RE";
			this->radioButton_RE->Size = System::Drawing::Size(151, 19);
			this->radioButton_RE->TabIndex = 0;
			this->radioButton_RE->Text = L"Русский -> Английский";
			this->radioButton_RE->UseVisualStyleBackColor = true;
			// 
			// radioButton_ER
			// 
			this->radioButton_ER->AutoSize = true;
			this->radioButton_ER->Checked = true;
			this->radioButton_ER->Location = System::Drawing::Point(6, 19);
			this->radioButton_ER->Name = L"radioButton_ER";
			this->radioButton_ER->Size = System::Drawing::Size(151, 19);
			this->radioButton_ER->TabIndex = 0;
			this->radioButton_ER->TabStop = true;
			this->radioButton_ER->Text = L"Английский -> Русский";
			this->radioButton_ER->UseVisualStyleBackColor = true;
			// 
			// button_Start
			// 
			this->button_Start->Location = System::Drawing::Point(176, 19);
			this->button_Start->Name = L"button_Start";
			this->button_Start->Size = System::Drawing::Size(75, 44);
			this->button_Start->TabIndex = 1;
			this->button_Start->Text = L"Начать игру";
			this->button_Start->UseVisualStyleBackColor = true;
			this->button_Start->Click += gcnew System::EventHandler(this, &Game::button_Start_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 275);
			this->Controls->Add(this->groupBox_Mode);
			this->Controls->Add(this->groupBox_Game);
			this->Controls->Add(this->button_Rule);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(300, 314);
			this->MinimumSize = System::Drawing::Size(300, 314);
			this->Name = L"Game";
			this->Text = L"Game";
			this->groupBox_Game->ResumeLayout(false);
			this->groupBox_Game->PerformLayout();
			this->groupBox_Mode->ResumeLayout(false);
			this->groupBox_Mode->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int _copyFile(char _path1[100], char _path2[100]) {
			char line[100];
			FILE* fptr1, * fptr2;

			if (fopen_s(&fptr1, _path1, "r")!=0) return -1;
			fopen_s(&fptr2, _path2, "w");

			while (fscanf_s(fptr1, "%s", line, 100) == 1)
				fprintf(fptr2, "%s\n", line);

			return 
		}
private: System::Void button_Rule_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Переводите на нужный язык.","Правила игры");
}
private: System::Void button_Start_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox_Mode->Enabled = false;
	groupBox_Game->Enabled = true;

	if()
}
private: System::Void button_Chek_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button_Next_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
