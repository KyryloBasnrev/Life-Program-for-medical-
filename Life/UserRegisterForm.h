#pragma once
#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>
#include "UserRegisterClass.h"
#include "LifeForm.h"

namespace Life1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::OleDb;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для UserRegisterForm
	/// </summary>
	public ref class UserRegisterForm : public System::Windows::Forms::Form
	{
	public:
		UserRegisterForm(void)
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
		~UserRegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxLog;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxPas;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxPas2;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxLog = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPas = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxPas2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBoxLog
			// 
			this->textBoxLog->Location = System::Drawing::Point(220, 86);
			this->textBoxLog->Name = L"textBoxLog";
			this->textBoxLog->Size = System::Drawing::Size(295, 29);
			this->textBoxLog->TabIndex = 0;
			// 
			// textBoxPas
			// 
			this->textBoxPas->Location = System::Drawing::Point(220, 121);
			this->textBoxPas->Name = L"textBoxPas";
			this->textBoxPas->Size = System::Drawing::Size(295, 29);
			this->textBoxPas->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(202, 234);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 44);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Зарееструватись";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserRegisterForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(155, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 21);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Логін:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(141, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Пароль:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 21);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Підтвердження паролю:";
			// 
			// textBoxPas2
			// 
			this->textBoxPas2->Location = System::Drawing::Point(220, 156);
			this->textBoxPas2->Name = L"textBoxPas2";
			this->textBoxPas2->Size = System::Drawing::Size(295, 29);
			this->textBoxPas2->TabIndex = 6;
			// 
			// UserRegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->textBoxPas2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxPas);
			this->Controls->Add(this->textBoxLog);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"UserRegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Life";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool ToLifeFormFromRegister = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		UserRegister user;

		String^ log = textBoxLog->Text;
		String^ pas = textBoxPas->Text;
		String^ pas2 = textBoxPas2->Text;
		String^ id = "";

		if (pas == pas2) {
			user.SaveNewDataUsers(id, log, pas);
			this->ToLifeFormFromRegister = true;
			this->Close();
		}
		else {
			MessageBox::Show("Паролі не співпадають", "Помилка!");
		}

	}
	};
}
