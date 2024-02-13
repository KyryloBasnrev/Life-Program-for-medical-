#pragma once

#include "UserLoginForm.h"
#include "AdminLoginForm.h"

namespace Life1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StartForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
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
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonAdmin;
	private: System::Windows::Forms::Button^ buttonUser;
	protected:

	protected:

	private: System::Windows::Forms::Label^ labelOnStartForm;



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
			this->buttonAdmin = (gcnew System::Windows::Forms::Button());
			this->buttonUser = (gcnew System::Windows::Forms::Button());
			this->labelOnStartForm = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonAdmin
			// 
			this->buttonAdmin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAdmin->Location = System::Drawing::Point(64, 190);
			this->buttonAdmin->Name = L"buttonAdmin";
			this->buttonAdmin->Size = System::Drawing::Size(166, 82);
			this->buttonAdmin->TabIndex = 0;
			this->buttonAdmin->Text = L"Адміністратор";
			this->buttonAdmin->UseVisualStyleBackColor = true;
			this->buttonAdmin->Click += gcnew System::EventHandler(this, &StartForm::buttonAdmin_Click);
			// 
			// buttonUser
			// 
			this->buttonUser->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonUser->Location = System::Drawing::Point(321, 185);
			this->buttonUser->Name = L"buttonUser";
			this->buttonUser->Size = System::Drawing::Size(174, 87);
			this->buttonUser->TabIndex = 1;
			this->buttonUser->Text = L"Користувач";
			this->buttonUser->UseVisualStyleBackColor = true;
			this->buttonUser->Click += gcnew System::EventHandler(this, &StartForm::buttonUser_Click);
			// 
			// labelOnStartForm
			// 
			this->labelOnStartForm->AutoSize = true;
			this->labelOnStartForm->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelOnStartForm->Location = System::Drawing::Point(179, 89);
			this->labelOnStartForm->Name = L"labelOnStartForm";
			this->labelOnStartForm->Size = System::Drawing::Size(210, 23);
			this->labelOnStartForm->TabIndex = 2;
			this->labelOnStartForm->Text = L"Оберіть режим роботи";
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->labelOnStartForm);
			this->Controls->Add(this->buttonUser);
			this->Controls->Add(this->buttonAdmin);
			this->Name = L"StartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Life";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		bool ToUserLoginForm = false;
		bool ToAdminLoginForm = false;

	private: System::Void buttonUser_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ToUserLoginForm = true;
		this->Close();
	}
	private: System::Void buttonAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ToAdminLoginForm = true;
		this->Close();
	}
	};
}
