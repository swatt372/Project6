#pragma once
#include<string>
#include <dsound.h>
#pragma comment(lib,"winmm.lib") 
#pragma comment(lib,"dsound.lib")
#include <mmsystem.h>
#include <windows.h>
#include <algorithm>
#include<random>
#include "logic_game.h"


namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
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

	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	protected:




























	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оформлениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьИгруToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьИгруToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ restartToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ таблицаРекордовToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ тема1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ тема2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ тема3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ тема4ToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button23;
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
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
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
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оформлениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->тема1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->тема2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->тема3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->тема4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьИгруToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->загрузитьИгруToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restartToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->таблицаРекордовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(146, 161);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(57, 57);
			this->button0->TabIndex = 0;
			this->button0->Text = L"button0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(209, 161);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(57, 57);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(272, 161);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(57, 57);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(335, 161);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(57, 57);
			this->button3->TabIndex = 3;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(398, 161);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(57, 57);
			this->button4->TabIndex = 4;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(146, 224);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(57, 57);
			this->button5->TabIndex = 5;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(209, 224);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(57, 57);
			this->button6->TabIndex = 6;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(272, 224);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(57, 57);
			this->button7->TabIndex = 7;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(335, 224);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(57, 57);
			this->button8->TabIndex = 8;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(398, 224);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(57, 57);
			this->button9->TabIndex = 9;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(146, 287);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(57, 57);
			this->button10->TabIndex = 10;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(209, 287);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(57, 57);
			this->button11->TabIndex = 11;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(272, 287);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(57, 57);
			this->button12->TabIndex = 12;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(335, 287);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(57, 57);
			this->button13->TabIndex = 13;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(398, 287);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(57, 57);
			this->button14->TabIndex = 14;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(146, 350);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(57, 57);
			this->button15->TabIndex = 15;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(209, 350);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(57, 57);
			this->button16->TabIndex = 16;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(272, 350);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(57, 57);
			this->button17->TabIndex = 17;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(335, 350);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(57, 57);
			this->button18->TabIndex = 18;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(398, 350);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(57, 57);
			this->button19->TabIndex = 19;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(146, 413);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(57, 57);
			this->button20->TabIndex = 20;
			this->button20->Text = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(209, 413);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(57, 57);
			this->button21->TabIndex = 21;
			this->button21->Text = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(272, 413);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(57, 57);
			this->button22->TabIndex = 22;
			this->button22->Text = L"button22";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(398, 413);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(57, 57);
			this->button24->TabIndex = 24;
			this->button24->Text = L"button24";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(263, 47);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 23);
			this->button25->TabIndex = 25;
			this->button25->Text = L"button25";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(522, 163);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 23);
			this->button26->TabIndex = 26;
			this->button26->Text = L"button26";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(522, 205);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 23);
			this->button27->TabIndex = 27;
			this->button27->Text = L"button27";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->менюToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(630, 24);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->оформлениеToolStripMenuItem,
					this->сохранитьИгруToolStripMenuItem, this->загрузитьИгруToolStripMenuItem, this->справкаToolStripMenuItem, this->restartToolStripMenuItem,
					this->таблицаРекордовToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// оформлениеToolStripMenuItem
			// 
			this->оформлениеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->тема1ToolStripMenuItem,
					this->тема2ToolStripMenuItem, this->тема3ToolStripMenuItem, this->тема4ToolStripMenuItem
			});
			this->оформлениеToolStripMenuItem->Name = L"оформлениеToolStripMenuItem";
			this->оформлениеToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->оформлениеToolStripMenuItem->Text = L"Оформление";
			// 
			// тема1ToolStripMenuItem
			// 
			this->тема1ToolStripMenuItem->Name = L"тема1ToolStripMenuItem";
			this->тема1ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->тема1ToolStripMenuItem->Text = L"Тема 1";
			// 
			// тема2ToolStripMenuItem
			// 
			this->тема2ToolStripMenuItem->Name = L"тема2ToolStripMenuItem";
			this->тема2ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->тема2ToolStripMenuItem->Text = L"Тема 2";
			// 
			// тема3ToolStripMenuItem
			// 
			this->тема3ToolStripMenuItem->Name = L"тема3ToolStripMenuItem";
			this->тема3ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->тема3ToolStripMenuItem->Text = L"Тема 3";
			// 
			// тема4ToolStripMenuItem
			// 
			this->тема4ToolStripMenuItem->Name = L"тема4ToolStripMenuItem";
			this->тема4ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->тема4ToolStripMenuItem->Text = L"Тема 4";
			// 
			// сохранитьИгруToolStripMenuItem
			// 
			this->сохранитьИгруToolStripMenuItem->Name = L"сохранитьИгруToolStripMenuItem";
			this->сохранитьИгруToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->сохранитьИгруToolStripMenuItem->Text = L"Сохранить игру";
			// 
			// загрузитьИгруToolStripMenuItem
			// 
			this->загрузитьИгруToolStripMenuItem->Name = L"загрузитьИгруToolStripMenuItem";
			this->загрузитьИгруToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->загрузитьИгруToolStripMenuItem->Text = L"Загрузить игру";
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// restartToolStripMenuItem
			// 
			this->restartToolStripMenuItem->Name = L"restartToolStripMenuItem";
			this->restartToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->restartToolStripMenuItem->Text = L"Restart";
			// 
			// таблицаРекордовToolStripMenuItem
			// 
			this->таблицаРекордовToolStripMenuItem->Name = L"таблицаРекордовToolStripMenuItem";
			this->таблицаРекордовToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->таблицаРекордовToolStripMenuItem->Text = L"Таблица рекордов";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(257, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 36);
			this->label1->TabIndex = 29;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(335, 413);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(57, 57);
			this->button23->TabIndex = 23;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(630, 550);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void show_game() {
			this->button0->BackgroundImage = Image::FromFile("chisla\\" + arr_game[0][0] + ".png");
			this->button1->BackgroundImage = Image::FromFile("chisla\\" + arr_game[0][1] + ".png");
			this->button2->BackgroundImage = Image::FromFile("chisla\\" + arr_game[0][2] + ".png");
			this->button3->BackgroundImage = Image::FromFile("chisla\\" + arr_game[0][3] + ".png");
			this->button4->BackgroundImage = Image::FromFile("chisla\\" + arr_game[0][4] + ".png");
			this->button5->BackgroundImage = Image::FromFile("chisla\\" + arr_game[1][0] + ".png");
			this->button6->BackgroundImage = Image::FromFile("chisla\\" + arr_game[1][1] + ".png");
			this->button7->BackgroundImage = Image::FromFile("chisla\\" + arr_game[1][2] + ".png");
			this->button8->BackgroundImage = Image::FromFile("chisla\\" + arr_game[1][3] + ".png");
			this->button9->BackgroundImage = Image::FromFile("chisla\\" + arr_game[1][4] + ".png");
			this->button10->BackgroundImage = Image::FromFile("chisla\\" + arr_game[2][0] + ".png");
			this->button11->BackgroundImage = Image::FromFile("chisla\\" + arr_game[2][1] + ".png");
			this->button12->BackgroundImage = Image::FromFile("chisla\\" + arr_game[2][2] + ".png");
			this->button13->BackgroundImage = Image::FromFile("chisla\\" + arr_game[2][3] + ".png");
			this->button14->BackgroundImage = Image::FromFile("chisla\\" + arr_game[2][4] + ".png");
			this->button15->BackgroundImage = Image::FromFile("chisla\\" + arr_game[3][0] + ".png");
			this->button16->BackgroundImage = Image::FromFile("chisla\\" + arr_game[3][1] + ".png");
			this->button17->BackgroundImage = Image::FromFile("chisla\\" + arr_game[3][2] + ".png");
			this->button18->BackgroundImage = Image::FromFile("chisla\\" + arr_game[3][3] + ".png");
			this->button19->BackgroundImage = Image::FromFile("chisla\\" + arr_game[3][4] + ".png");
			this->button20->BackgroundImage = Image::FromFile("chisla\\" + arr_game[4][0] + ".png");
			this->button21->BackgroundImage = Image::FromFile("chisla\\" + arr_game[4][1] + ".png");
			this->button22->BackgroundImage = Image::FromFile("chisla\\" + arr_game[4][2] + ".png");
			this->button23->BackgroundImage = Image::FromFile("chisla\\" + arr_game[4][3] + ".png");
			this->button24->BackgroundImage = Image::FromFile("chisla\\" + arr_game[4][4] + ".png");
		}
		void song1() {
			System::Media::SoundPlayer^ f1;
			f1 = gcnew System::Media::SoundPlayer("song\\1.wav");
			f1->Play();
		}
		void song_end_turn() {
			System::Media::SoundPlayer^ f2;
			f2 = gcnew System::Media::SoundPlayer("song\\end_turn.wav");
			f2->Play();
		}
		void song_start() {
			System::Media::SoundPlayer^ f3;
			f3 = gcnew System::Media::SoundPlayer("song\\start.wav");
			f3->Play();
		}
		void true_color() {
			this->button0->UseVisualStyleBackColor = true; this->button1->UseVisualStyleBackColor = true; this->button2->UseVisualStyleBackColor = true; this->button3->UseVisualStyleBackColor = true;
			this->button4->UseVisualStyleBackColor = true; this->button5->UseVisualStyleBackColor = true; this->button6->UseVisualStyleBackColor = true; this->button7->UseVisualStyleBackColor = true;
			this->button8->UseVisualStyleBackColor = true; this->button9->UseVisualStyleBackColor = true; this->button10->UseVisualStyleBackColor = true; this->button11->UseVisualStyleBackColor = true;
			this->button12->UseVisualStyleBackColor = true; this->button13->UseVisualStyleBackColor = true; this->button14->UseVisualStyleBackColor = true; this->button15->UseVisualStyleBackColor = true;
			this->button16->UseVisualStyleBackColor = true; this->button17->UseVisualStyleBackColor = true; this->button18->UseVisualStyleBackColor = true; this->button19->UseVisualStyleBackColor = true;
			this->button20->UseVisualStyleBackColor = true; this->button21->UseVisualStyleBackColor = true; this->button22->UseVisualStyleBackColor = true; this->button23->UseVisualStyleBackColor = true;
			this->button24->UseVisualStyleBackColor = true;
		}
		void end_score(int data, int score) {
			if (data == 0) { arr_game[0][0] = score; return; }
			if (data == 1) { arr_game[0][1] = score; return; }
			if (data == 2) { arr_game[0][2] = score; return; }
			if (data == 3) { arr_game[0][3] = score; return; }
			if (data == 4) { arr_game[0][4] = score; return; }
			if (data == 5) { arr_game[1][0] = score; return; }
			if (data == 6) { arr_game[1][1] = score; return; }
			if (data == 7) { arr_game[1][2] = score; return; }
			if (data == 8) { arr_game[1][3] = score; return; }
			if (data == 9) { arr_game[1][4] = score; return; }
			if (data == 10) { arr_game[2][0] = score; return; }
			if (data == 11) { arr_game[2][1] = score; return; }
			if (data == 12) { arr_game[2][2] = score; return; }
			if (data == 13) { arr_game[2][3] = score; return; }
			if (data == 14) { arr_game[2][4] = score; return; }
			if (data == 15) { arr_game[3][0] = score; return; }
			if (data == 16) { arr_game[3][1] = score; return; }
			if (data == 17) { arr_game[3][2] = score; return; }
			if (data == 18) { arr_game[3][3] = score; return; }
			if (data == 19) { arr_game[3][4] = score; return; }
			if (data == 20) { arr_game[4][0] = score; return; }
			if (data == 21) { arr_game[4][1] = score; return; }
			if (data == 22) { arr_game[4][2] = score; return; }
			if (data == 23) { arr_game[4][3] = score; return; }
			if (data == 24) { arr_game[4][4] = score; return; }
		}
		void false_but() {
			this->button0->Enabled = false;
			this->button1->Enabled = false;
			this->button2->Enabled = false;
			this->button3->Enabled = false;
			this->button4->Enabled = false;
			this->button5->Enabled = false;
			this->button6->Enabled = false;
			this->button7->Enabled = false;
			this->button8->Enabled = false;
			this->button9->Enabled = false;
			this->button10->Enabled = false;
			this->button11->Enabled = false;
			this->button12->Enabled = false;
			this->button13->Enabled = false;
			this->button14->Enabled = false;
			this->button15->Enabled = false;
			this->button16->Enabled = false;
			this->button17->Enabled = false;
			this->button18->Enabled = false;
			this->button19->Enabled = false;
			this->button20->Enabled = false;
			this->button21->Enabled = false;
			this->button22->Enabled = false;
			this->button23->Enabled = false;
			this->button24->Enabled = false;
		}
		void true_but() {
			this->button0->Enabled = true;
			this->button1->Enabled = true;
			this->button2->Enabled = true;
			this->button3->Enabled = true;
			this->button4->Enabled = true;
			this->button5->Enabled = true;
			this->button6->Enabled = true;
			this->button7->Enabled = true;
			this->button8->Enabled = true;
			this->button9->Enabled = true;
			this->button10->Enabled = true;
			this->button11->Enabled = true;
			this->button12->Enabled = true;
			this->button13->Enabled = true;
			this->button14->Enabled = true;
			this->button15->Enabled = true;
			this->button16->Enabled = true;
			this->button17->Enabled = true;
			this->button18->Enabled = true;
			this->button19->Enabled = true;
			this->button20->Enabled = true;
			this->button21->Enabled = true;
			this->button22->Enabled = true;
			this->button23->Enabled = true;
			this->button24->Enabled = true;
		}
#pragma endregion
/////////////////////////////////////////////////////////

private: System::Void MyForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
	create_arr_game(arr_game, size_n, size_m, chet);
	gamescore = 0;
	true_color();
	size = 0;
	size1 = 0;
	score_arr = 0;
	r = 0;
	MessageBox::Show("Привет, данная программа выпущена в early access\nВоздержитесь от бахтерта если шо та не так.\nБуду рад найдеными вами дырами в этой программе.\nПри нахождении таковой, зайдите в справку, там будет мой vk");

}

private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (but_start == true) {
		song_start();
		show_game();
		true_defend();
		start_true();
		stk = NULL;
		stk1 = NULL;
		true_but();
		but_start = false;
		but_end = true;
	}
}

private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	if (but_end == true && proverka_end() == true) {
		song_end_turn();
		gamescore += score_arr;
		this->label1->Text = System::Convert::ToString(gamescore);
		zapis_varr = pop(stk1);
		true_color();
		end_score(zapis_varr, score_arr);
		bool_return();
		sosi(stk1);
		GLAVNOE();
		score_arr = 0;
		r = 0;
		cleanOut(stk); cleanOut(stk1);
		size = 0;
		size1 = 0;
		stk = NULL;
		stk1 = NULL;
		start_true();
		true_defend();
		show_game();
		true_but();
		but_cancel = true;
		if (win() == true)
		{
			MessageBox::Show("Вы выиграли!!");
		}
		if (lose() == false && win() == false)
		{
			MessageBox::Show("Вы проиграли :(");
		}

	}
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	if (but_cancel == true && stk != NULL) {
		true_color();
		bool_return();
		score_arr = 0;
		r = 0;
		cleanOut(stk); cleanOut(stk1);
		size = 0;
		size1 = 0;
		stk = NULL;
		stk1 = NULL;
		start_true();
		true_defend();
		show_game();
		true_but();
	}
}

private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
	song1();
	if (defend0 == true)
	{
		if (cont0 == true && score_arr >= arr_game[0][0] && pop_stek * 2 >= arr_game[0][0]) {

			if (pop_stek <= arr_game[0][0]) {
				push(stk, arr_game[0][0], size);
				push(stk1, buton_0, size1);
				pop_stek = pop(stk);
				score_arr = findAverage(stk, size);
				score_arr = sum(score_arr);
				cont0_24();
				cont0 = false;
				this->button0->UseVisualStyleBackColor = false;
				false_but();
				true_but();
			}
		}
		if (start_con == true && arr_game[0][0] == pop_stek) {
			push(stk, arr_game[0][0], size);
			push(stk1, buton_0, size1);
			score_arr = findAverage(stk, size);
			score_arr = sum(score_arr);
			start_con = false;
			cont0_24();
			this->button0->UseVisualStyleBackColor = false;
			false_but();
			true_but();

		}
		if (start0 == true) {
			push(stk, arr_game[0][0], size);
			push(stk1, buton_0, size1);
			pop_stek = pop(stk);
			score_arr = arr_game[0][0];
			return_start();
			start_con = true;
			this->button0->UseVisualStyleBackColor = false;
			false_but();
			true_but();
		}
		defend0 = false;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	song1();
	if (defend1 == true) {
		if (cont1 == true && score_arr >= arr_game[0][1] && pop_stek * 2 >= arr_game[0][1]) {

			if (pop_stek <= arr_game[0][1]) {
				push(stk, arr_game[0][1], size);
				push(stk1, buton_1, size1);
				pop_stek = pop(stk);
				score_arr = findAverage(stk, size);
				score_arr = sum(score_arr);
				cont0_24();
				cont1 = false;
				false_but();
				true_but();
				this->button1->UseVisualStyleBackColor = false;
			}
		}
		if (start_con == true && arr_game[0][1] == pop_stek) {
			push(stk, arr_game[0][1], size);
			push(stk1, buton_1, size1);
			score_arr = findAverage(stk, size);
			score_arr = sum(score_arr);
			start_con = false;
			cont0_24();
			false_but();
			true_but();
			this->button1->UseVisualStyleBackColor = false;

		}
		if (start1 == true) {
			push(stk, arr_game[0][1], size);
			push(stk1, buton_1, size1);
			pop_stek = pop(stk);
			score_arr = arr_game[0][1];
			return_start();
			start_con = true;
			false_but();
			true_but();
			this->button1->UseVisualStyleBackColor = false;
		}
		defend1 = false;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	song1();
	if (defend2 == true) {
		if (cont2 == true && score_arr >= arr_game[0][2] && pop_stek * 2 >= arr_game[0][2]) {

			if (pop_stek <= arr_game[0][2]) {
				push(stk, arr_game[0][2], size);
				push(stk1, buton_2, size1);
				pop_stek = pop(stk);
				score_arr = findAverage(stk, size);
				score_arr = sum(score_arr);
				cont0_24();
				cont20 = false;
				this->button2->UseVisualStyleBackColor = false;
				false_but();
				true_but();
			}
		}
		if (start_con == true && arr_game[0][2] == pop_stek) {
			push(stk, arr_game[0][2], size);
			push(stk1, buton_2, size1);
			score_arr = findAverage(stk, size);
			score_arr = sum(score_arr);
			start_con = false;
			cont0_24();
			this->button2->UseVisualStyleBackColor = false;
			false_but();
			true_but();
		}
		if (start2 == true) {
			push(stk, arr_game[0][2], size);
			push(stk1, buton_2, size1);
			pop_stek = pop(stk);
			score_arr = arr_game[0][2];
			return_start();
			start_con = true;
			this->button2->UseVisualStyleBackColor = false;
			false_but();
			true_but();
		}
		defend2 = false;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	song1();
	if (defend3 == true) {
		if (cont3 == true && score_arr >= arr_game[0][3] && pop_stek * 2 >= arr_game[0][3]) {
			if (pop_stek <= arr_game[0][3]) {
				push(stk, arr_game[0][3], size);
				push(stk1, buton_3, size1);
				pop_stek = pop(stk);
				score_arr = findAverage(stk, size);
				score_arr = sum(score_arr);
				cont0_24();
				cont3 = false;
				this->button3->UseVisualStyleBackColor = false;
				false_but();
				true_but();
			}
		}
		if (start_con == true && arr_game[0][3] == pop_stek) {
			push(stk, arr_game[0][3], size);
			push(stk1, buton_3, size1);
			score_arr = findAverage(stk, size);
			score_arr = sum(score_arr);
			start_con = false;
			cont0_24();
			this->button3->UseVisualStyleBackColor = false;
			false_but();
			true_but();
		}
		if (start3 == true) {
			push(stk, arr_game[0][3], size);
			push(stk1, buton_3, size1);
			pop_stek = pop(stk);
			score_arr = arr_game[0][3];
			return_start();
			start_con = true;
			this->button3->UseVisualStyleBackColor = false;
			false_but();
			true_but();
		}
		defend3 = false;
	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	song1();
	if (defend4 == true) {
		if (cont4 == true && score_arr >= arr_game[0][4] && pop_stek * 2 >= arr_game[0][4]) {
			if (pop_stek <= arr_game[0][4]) {
				push(stk, arr_game[0][4], size);
				push(stk1, buton_4, size1);
				pop_stek = pop(stk);
				score_arr = findAverage(stk, size);
				score_arr = sum(score_arr);
				cont0_24();
				cont4 = false;
				this->button4->UseVisualStyleBackColor = false;
				false_but();
				true_but();
			}
		}
		if (start_con == true && arr_game[0][4] == pop_stek) {
			push(stk, arr_game[0][4], size);
			push(stk1, buton_4, size1);
			score_arr = findAverage(stk, size);
			score_arr = sum(score_arr);
			start_con = false;
			cont0_24();
			this->button4->UseVisualStyleBackColor = false;
			false_but();
			true_but();

		}
		if (start4 == true) {
			push(stk, arr_game[0][4], size);
			push(stk1, buton_4, size1);
			pop_stek = pop(stk);
			score_arr = arr_game[0][4];
			return_start();
			start_con = true;
			this->button4->UseVisualStyleBackColor = false;
			false_but();
			true_but();
		}
		defend4 = false;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	song1();
	if (defend5 == true)
	{
		if (cont5 == true && score_arr >= arr_game[1][0] && pop_stek * 2 >= arr_game[1][0]) {

			if (pop_stek <= arr_game[1][0]) {
				push(stk, arr_game[1][0], size);
				push(stk1, buton_5, size1);
				pop_stek = pop(stk);
				score_arr = findAverage(stk, size);
				score_arr = sum(score_arr);
				cont0_24();
				cont5 = false;
				this->button5->UseVisualStyleBackColor = false;
				false_but();
				true_but();
			}
		}
		if (start_con == true && arr_game[1][0] == pop_stek) {
			push(stk, arr_game[1][0], size);
			push(stk1, buton_5, size1);
			score_arr = findAverage(stk, size);
			score_arr = sum(score_arr);
			start_con = false;
			cont0_24();
			this->button5->UseVisualStyleBackColor = false;
			false_but();
			true_but();

		}
		if (start5 == true) {
			push(stk, arr_game[1][0], size);
			push(stk1, buton_5, size1);
			pop_stek = pop(stk);
			score_arr = arr_game[1][0];
			return_start();
			start_con = true;
			this->button5->UseVisualStyleBackColor = false;
			false_but();
			true_but();
		}
		defend5 = false;
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
