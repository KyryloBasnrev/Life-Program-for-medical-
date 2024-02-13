#pragma once
#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>
#include "AdminWorkClass.h"
#include "AdminUpdateForm.h"
#include "AdminDeleteForm.h"

namespace Life1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AdminWorForm
	/// </summary>
	public ref class AdminWorForm : public System::Windows::Forms::Form
	{
	public:
		AdminWorForm(void)
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
		~AdminWorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxFio;
	private: System::Windows::Forms::TextBox^ textBoxNkl;
	private: System::Windows::Forms::TextBox^ textBoxTime;
	protected:

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonSave;
	private: System::Windows::Forms::Button^ buttonMedPlc;
	private: System::Windows::Forms::Button^ buttonMedWor;
	private: System::Windows::Forms::Button^ buttonAdmin;
	private: System::Windows::Forms::Button^ buttonUpdate;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonBack;







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
			this->textBoxFio = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNkl = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTime = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonMedPlc = (gcnew System::Windows::Forms::Button());
			this->buttonMedWor = (gcnew System::Windows::Forms::Button());
			this->buttonAdmin = (gcnew System::Windows::Forms::Button());
			this->buttonUpdate = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxFio
			// 
			this->textBoxFio->Location = System::Drawing::Point(170, 119);
			this->textBoxFio->Name = L"textBoxFio";
			this->textBoxFio->Size = System::Drawing::Size(402, 29);
			this->textBoxFio->TabIndex = 0;
			// 
			// textBoxNkl
			// 
			this->textBoxNkl->Location = System::Drawing::Point(170, 154);
			this->textBoxNkl->Name = L"textBoxNkl";
			this->textBoxNkl->Size = System::Drawing::Size(402, 29);
			this->textBoxNkl->TabIndex = 1;
			// 
			// textBoxTime
			// 
			this->textBoxTime->Location = System::Drawing::Point(170, 189);
			this->textBoxTime->Name = L"textBoxTime";
			this->textBoxTime->Size = System::Drawing::Size(402, 29);
			this->textBoxTime->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 21);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ПІБ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Медичний заклад";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 21);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Часи прийому";
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(199, 274);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(190, 49);
			this->buttonSave->TabIndex = 6;
			this->buttonSave->Text = L"Зберегти";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &AdminWorForm::buttonSave_Click);
			// 
			// buttonMedPlc
			// 
			this->buttonMedPlc->Location = System::Drawing::Point(12, 12);
			this->buttonMedPlc->Name = L"buttonMedPlc";
			this->buttonMedPlc->Size = System::Drawing::Size(270, 30);
			this->buttonMedPlc->TabIndex = 7;
			this->buttonMedPlc->Text = L"Додати медичний заклад";
			this->buttonMedPlc->UseVisualStyleBackColor = true;
			this->buttonMedPlc->Click += gcnew System::EventHandler(this, &AdminWorForm::buttonMedPlc_Click);
			// 
			// buttonMedWor
			// 
			this->buttonMedWor->Location = System::Drawing::Point(306, 12);
			this->buttonMedWor->Name = L"buttonMedWor";
			this->buttonMedWor->Size = System::Drawing::Size(266, 30);
			this->buttonMedWor->TabIndex = 8;
			this->buttonMedWor->Text = L"Додати медичного працівника";
			this->buttonMedWor->UseVisualStyleBackColor = true;
			this->buttonMedWor->Click += gcnew System::EventHandler(this, &AdminWorForm::buttonMedWor_Click);
			// 
			// buttonAdmin
			// 
			this->buttonAdmin->Location = System::Drawing::Point(12, 48);
			this->buttonAdmin->Name = L"buttonAdmin";
			this->buttonAdmin->Size = System::Drawing::Size(201, 32);
			this->buttonAdmin->TabIndex = 9;
			this->buttonAdmin->Text = L"Додати адміністратора";
			this->buttonAdmin->UseVisualStyleBackColor = true;
			this->buttonAdmin->Click += gcnew System::EventHandler(this, &AdminWorForm::buttonAdmin_Click);
			// 
			// buttonUpdate
			// 
			this->buttonUpdate->Location = System::Drawing::Point(220, 48);
			this->buttonUpdate->Name = L"buttonUpdate";
			this->buttonUpdate->Size = System::Drawing::Size(183, 31);
			this->buttonUpdate->TabIndex = 10;
			this->buttonUpdate->Text = L"Оновлення даних";
			this->buttonUpdate->UseVisualStyleBackColor = true;
			this->buttonUpdate->Click += gcnew System::EventHandler(this, &AdminWorForm::buttonUpdate_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(410, 48);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(162, 30);
			this->buttonDelete->TabIndex = 11;
			this->buttonDelete->Text = L"Видалення даних";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &AdminWorForm::buttonDelete_Click);
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(462, 320);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(110, 29);
			this->buttonBack->TabIndex = 12;
			this->buttonBack->Text = L"На головну";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &AdminWorForm::buttonBack_Click);
			// 
			// AdminWorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonUpdate);
			this->Controls->Add(this->buttonAdmin);
			this->Controls->Add(this->buttonMedWor);
			this->Controls->Add(this->buttonMedPlc);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxTime);
			this->Controls->Add(this->textBoxNkl);
			this->Controls->Add(this->textBoxFio);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"AdminWorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Life";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {

		AdminWork admin;

		String^ id = "0";
		String^ Fio = textBoxFio->Text;
		String^ Nkl = textBoxNkl->Text;
		String^ Time = textBoxTime->Text;

		String^ lb1 = Convert::ToString(label1->Text);
		String^ lb2 = Convert::ToString(label2->Text);
		String^ lb3 = Convert::ToString(label3->Text);

		if (lb1 == "Тип" && lb2 == "Назва" && lb3 == "Адреса") {

			admin.SaveNewDataMedPlcTable(id, Fio, Nkl, Time);

		}
		else {

			if (lb1 == "ПІБ" && lb2 == "Медичний заклад" && lb3 == "Часи прийому") {

				admin.SaveNewDataMedWorTable(id, Fio, Nkl, Time);

			}
			else {

				if (lb1 == "Логін" && lb2 == "Пароль" && lb3 == "Ключ") {

					admin.SaveNewDataAdmins(id, Fio, Nkl, Time);

				}

			}

		}

	}
	private: System::Void buttonMedPlc_Click(System::Object^ sender, System::EventArgs^ e) {

		textBoxFio->Text = "";
		textBoxNkl->Text = "";
		textBoxTime->Text = "";

		label1->Text = "Тип";
		label2->Text = "Назва";
		label3->Text = "Адреса";

	}
	private: System::Void buttonMedWor_Click(System::Object^ sender, System::EventArgs^ e) {

		textBoxFio->Text = "";
		textBoxNkl->Text = "";
		textBoxTime->Text = "";

		label1->Text = "ПІБ";
		label2->Text = "Медичний заклад";
		label3->Text = "Часи прийому";

	}
	private: System::Void buttonAdmin_Click(System::Object^ sender, System::EventArgs^ e) {

		textBoxFio->Text = "";
		textBoxNkl->Text = "";
		textBoxTime->Text = "";

		label1->Text = "Логін";
		label2->Text = "Пароль";
		label3->Text = "Ключ";

	}
	public:
		bool ToAdminUpdateForm = false;
		bool ToAdminDeleteForm = false;

	private: System::Void buttonUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

		this->ToAdminUpdateForm = true;
		this->Close();

	}
	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {

		this->ToAdminDeleteForm = true;
		this->Close();

	}
	public: bool BackToStartForm = false;
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackToStartForm = true;
		this->Close();
	}
};
}
