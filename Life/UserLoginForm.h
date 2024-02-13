#pragma once

#include "LifeForm.h"
#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>
#include "UserClass.h"
#include "UserRegisterForm.h"

namespace Life1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для UserLoginForm
	/// </summary>
	public ref class UserLoginForm : public System::Windows::Forms::Form
	{
	public:
		UserLoginForm(void)
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
		~UserLoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelUserLoginLog;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labelUserLoginPas;
	private: System::Windows::Forms::TextBox^ textBoxUserLoginLog;
	private: System::Windows::Forms::TextBox^ textBoxUserLoginPas;
	private: System::Windows::Forms::LinkLabel^ linkLabelRegistr;





	protected:

	protected:

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
			this->labelUserLoginLog = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelUserLoginPas = (gcnew System::Windows::Forms::Label());
			this->textBoxUserLoginLog = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUserLoginPas = (gcnew System::Windows::Forms::TextBox());
			this->linkLabelRegistr = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// labelUserLoginLog
			// 
			this->labelUserLoginLog->AutoSize = true;
			this->labelUserLoginLog->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelUserLoginLog->Location = System::Drawing::Point(81, 87);
			this->labelUserLoginLog->Name = L"labelUserLoginLog";
			this->labelUserLoginLog->Size = System::Drawing::Size(60, 23);
			this->labelUserLoginLog->TabIndex = 0;
			this->labelUserLoginLog->Text = L"Логін";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(207, 221);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 61);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вхід";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserLoginForm::button1_Click);
			// 
			// labelUserLoginPas
			// 
			this->labelUserLoginPas->AutoSize = true;
			this->labelUserLoginPas->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelUserLoginPas->Location = System::Drawing::Point(81, 130);
			this->labelUserLoginPas->Name = L"labelUserLoginPas";
			this->labelUserLoginPas->Size = System::Drawing::Size(75, 23);
			this->labelUserLoginPas->TabIndex = 2;
			this->labelUserLoginPas->Text = L"Пароль";
			// 
			// textBoxUserLoginLog
			// 
			this->textBoxUserLoginLog->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxUserLoginLog->Location = System::Drawing::Point(195, 86);
			this->textBoxUserLoginLog->Name = L"textBoxUserLoginLog";
			this->textBoxUserLoginLog->Size = System::Drawing::Size(158, 29);
			this->textBoxUserLoginLog->TabIndex = 3;
			// 
			// textBoxUserLoginPas
			// 
			this->textBoxUserLoginPas->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxUserLoginPas->Location = System::Drawing::Point(195, 124);
			this->textBoxUserLoginPas->Name = L"textBoxUserLoginPas";
			this->textBoxUserLoginPas->Size = System::Drawing::Size(158, 29);
			this->textBoxUserLoginPas->TabIndex = 4;
			// 
			// linkLabelRegistr
			// 
			this->linkLabelRegistr->AutoSize = true;
			this->linkLabelRegistr->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabelRegistr->Location = System::Drawing::Point(429, 331);
			this->linkLabelRegistr->Name = L"linkLabelRegistr";
			this->linkLabelRegistr->Size = System::Drawing::Size(143, 21);
			this->linkLabelRegistr->TabIndex = 5;
			this->linkLabelRegistr->TabStop = true;
			this->linkLabelRegistr->Text = L"Зареєструватись";
			this->linkLabelRegistr->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &UserLoginForm::linkLabelRegistr_LinkClicked);
			// 
			// UserLoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSalmon;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->linkLabelRegistr);
			this->Controls->Add(this->textBoxUserLoginPas);
			this->Controls->Add(this->textBoxUserLoginLog);
			this->Controls->Add(this->labelUserLoginPas);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelUserLoginLog);
			this->Name = L"UserLoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Life";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		bool ToLifeForm = false;
		bool ToUserRegisterForm = false;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ UserLog = this->textBoxUserLoginLog->Text;
		String^ UserPas = this->textBoxUserLoginPas->Text;

		User user;

		int ID = user.GetIdByLogin(UserLog);
		String^ Login = user.GetLOGIN(ID);
		String^ Password = user.GetPASSWORD(ID);

		if (UserLog == Login && UserPas == Password) {
			this->ToLifeForm = true;
			this->Close();
		}
		else {
			MessageBox::Show("Невірний Логін або Пароль", "Error");
		}
	}
	private: System::Void linkLabelRegistr_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

		this->ToUserRegisterForm = true;
		this->Close();

	}
	};
}
