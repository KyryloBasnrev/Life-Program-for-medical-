#pragma once
#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>
#include "AdminClass.h"
#include "AdminWorForm.h"

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
	/// —водка дл€ AdminLoginForm
	/// </summary>
	public ref class AdminLoginForm : public System::Windows::Forms::Form
	{
	public:
		AdminLoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~AdminLoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelAdminLoginLog;
	private: System::Windows::Forms::Label^ labelAdminLoginPas;
	private: System::Windows::Forms::Label^ labelAdminLoginKey;
	private: System::Windows::Forms::TextBox^ textBoxAdminLoginLog;

	private: System::Windows::Forms::TextBox^ textBoxAdminLoginKey;

	private: System::Windows::Forms::Button^ buttonAdminLogin;
	private: System::Windows::Forms::TextBox^ textBoxAdminLoginPas;






	protected:

	protected:

	protected:



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelAdminLoginLog = (gcnew System::Windows::Forms::Label());
			this->labelAdminLoginPas = (gcnew System::Windows::Forms::Label());
			this->labelAdminLoginKey = (gcnew System::Windows::Forms::Label());
			this->textBoxAdminLoginLog = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdminLoginKey = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdminLogin = (gcnew System::Windows::Forms::Button());
			this->textBoxAdminLoginPas = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// labelAdminLoginLog
			// 
			this->labelAdminLoginLog->AutoSize = true;
			this->labelAdminLoginLog->Location = System::Drawing::Point(92, 59);
			this->labelAdminLoginLog->Name = L"labelAdminLoginLog";
			this->labelAdminLoginLog->Size = System::Drawing::Size(60, 23);
			this->labelAdminLoginLog->TabIndex = 0;
			this->labelAdminLoginLog->Text = L"Ћог≥н";
			// 
			// labelAdminLoginPas
			// 
			this->labelAdminLoginPas->AutoSize = true;
			this->labelAdminLoginPas->Location = System::Drawing::Point(92, 106);
			this->labelAdminLoginPas->Name = L"labelAdminLoginPas";
			this->labelAdminLoginPas->Size = System::Drawing::Size(75, 23);
			this->labelAdminLoginPas->TabIndex = 1;
			this->labelAdminLoginPas->Text = L"ѕароль";
			// 
			// labelAdminLoginKey
			// 
			this->labelAdminLoginKey->AutoSize = true;
			this->labelAdminLoginKey->Location = System::Drawing::Point(92, 151);
			this->labelAdminLoginKey->Name = L"labelAdminLoginKey";
			this->labelAdminLoginKey->Size = System::Drawing::Size(60, 23);
			this->labelAdminLoginKey->TabIndex = 2;
			this->labelAdminLoginKey->Text = L" люч";
			// 
			// textBoxAdminLoginLog
			// 
			this->textBoxAdminLoginLog->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxAdminLoginLog->Location = System::Drawing::Point(191, 53);
			this->textBoxAdminLoginLog->Name = L"textBoxAdminLoginLog";
			this->textBoxAdminLoginLog->Size = System::Drawing::Size(202, 29);
			this->textBoxAdminLoginLog->TabIndex = 3;
			// 
			// textBoxAdminLoginKey
			// 
			this->textBoxAdminLoginKey->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxAdminLoginKey->Location = System::Drawing::Point(191, 145);
			this->textBoxAdminLoginKey->Name = L"textBoxAdminLoginKey";
			this->textBoxAdminLoginKey->Size = System::Drawing::Size(342, 29);
			this->textBoxAdminLoginKey->TabIndex = 5;
			// 
			// buttonAdminLogin
			// 
			this->buttonAdminLogin->Location = System::Drawing::Point(210, 250);
			this->buttonAdminLogin->Name = L"buttonAdminLogin";
			this->buttonAdminLogin->Size = System::Drawing::Size(129, 61);
			this->buttonAdminLogin->TabIndex = 7;
			this->buttonAdminLogin->Text = L"¬х≥д";
			this->buttonAdminLogin->UseVisualStyleBackColor = true;
			this->buttonAdminLogin->Click += gcnew System::EventHandler(this, &AdminLoginForm::buttonAdminLogin_Click);
			// 
			// textBoxAdminLoginPas
			// 
			this->textBoxAdminLoginPas->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxAdminLoginPas->Location = System::Drawing::Point(191, 100);
			this->textBoxAdminLoginPas->Name = L"textBoxAdminLoginPas";
			this->textBoxAdminLoginPas->Size = System::Drawing::Size(202, 29);
			this->textBoxAdminLoginPas->TabIndex = 8;
			// 
			// AdminLoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->textBoxAdminLoginPas);
			this->Controls->Add(this->buttonAdminLogin);
			this->Controls->Add(this->textBoxAdminLoginKey);
			this->Controls->Add(this->textBoxAdminLoginLog);
			this->Controls->Add(this->labelAdminLoginKey);
			this->Controls->Add(this->labelAdminLoginPas);
			this->Controls->Add(this->labelAdminLoginLog);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"AdminLoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Life";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool ToAdminWorForm = false;
	private: System::Void buttonAdminLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ AdminLog = this->textBoxAdminLoginLog->Text;
		String^ AdminPas = this->textBoxAdminLoginPas->Text;
		String^ AdminKey = this->textBoxAdminLoginKey->Text;

		Admin admin;

		int ID = admin.GetIdByKey(AdminKey);
		String^ Login = admin.GetLOGIN(ID);
		String^ Password = admin.GetPASSWORD(ID);
		String^ Key = admin.GetKEY(ID);

		if (AdminLog == Login && AdminPas == Password && AdminKey == Key) {
			this->ToAdminWorForm = true;
			this->Close();
		}
	}
	public: bool BackToStartForm = false;
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackToStartForm = true;
		this->Close();
	}
	};
}
