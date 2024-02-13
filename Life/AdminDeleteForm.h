#pragma once

#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>
#include "AdminDeleteClass.h"

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
	/// Сводка для AdminDeleteForm
	/// </summary>
	public ref class AdminDeleteForm : public System::Windows::Forms::Form
	{
	public:
		AdminDeleteForm(void)
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
		~AdminDeleteForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonID;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxID;
	private: System::Windows::Forms::TextBox^ textBoxPIBforID;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonUpdate;



	private: System::Windows::Forms::TextBox^ textBoxNewID;



	private: System::Windows::Forms::Label^ labelid;
	private: System::Windows::Forms::Button^ buttonAdmin;
	private: System::Windows::Forms::Button^ buttonMedWor;
	private: System::Windows::Forms::Button^ buttonMedPlc;
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonID = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPIBforID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonUpdate = (gcnew System::Windows::Forms::Button());
			this->textBoxNewID = (gcnew System::Windows::Forms::TextBox());
			this->labelid = (gcnew System::Windows::Forms::Label());
			this->buttonAdmin = (gcnew System::Windows::Forms::Button());
			this->buttonMedWor = (gcnew System::Windows::Forms::Button());
			this->buttonMedPlc = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(178, 103);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(228, 35);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Шукати ID адміністратора";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminDeleteForm::button3_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(412, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(263, 35);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Шукати ID медичного закладу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminDeleteForm::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 103);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 35);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Шукати ID лікаря";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminDeleteForm::button1_Click_1);
			// 
			// buttonID
			// 
			this->buttonID->Location = System::Drawing::Point(418, 68);
			this->buttonID->Name = L"buttonID";
			this->buttonID->Size = System::Drawing::Size(105, 28);
			this->buttonID->TabIndex = 12;
			this->buttonID->Text = L"Шукати ID";
			this->buttonID->UseVisualStyleBackColor = true;
			this->buttonID->Click += gcnew System::EventHandler(this, &AdminDeleteForm::buttonID_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(184, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 21);
			this->label2->TabIndex = 11;
			this->label2->Text = L"ID по введеному ПІБ";
			// 
			// textBoxID
			// 
			this->textBoxID->Location = System::Drawing::Point(188, 68);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->ReadOnly = true;
			this->textBoxID->Size = System::Drawing::Size(175, 29);
			this->textBoxID->TabIndex = 10;
			// 
			// textBoxPIBforID
			// 
			this->textBoxPIBforID->Location = System::Drawing::Point(278, 12);
			this->textBoxPIBforID->Name = L"textBoxPIBforID";
			this->textBoxPIBforID->Size = System::Drawing::Size(296, 29);
			this->textBoxPIBforID->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 20);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 21);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Введіть ПІБ для отримання ID";
			// 
			// buttonUpdate
			// 
			this->buttonUpdate->Location = System::Drawing::Point(218, 244);
			this->buttonUpdate->Name = L"buttonUpdate";
			this->buttonUpdate->Size = System::Drawing::Size(231, 33);
			this->buttonUpdate->TabIndex = 31;
			this->buttonUpdate->Text = L"Видалити дані";
			this->buttonUpdate->UseVisualStyleBackColor = true;
			this->buttonUpdate->Click += gcnew System::EventHandler(this, &AdminDeleteForm::buttonUpdate_Click);
			// 
			// textBoxNewID
			// 
			this->textBoxNewID->Location = System::Drawing::Point(325, 191);
			this->textBoxNewID->Name = L"textBoxNewID";
			this->textBoxNewID->Size = System::Drawing::Size(350, 29);
			this->textBoxNewID->TabIndex = 27;
			// 
			// labelid
			// 
			this->labelid->AutoSize = true;
			this->labelid->Location = System::Drawing::Point(10, 199);
			this->labelid->Name = L"labelid";
			this->labelid->Size = System::Drawing::Size(204, 21);
			this->labelid->TabIndex = 23;
			this->labelid->Text = L"ID лікаря для видалення";
			// 
			// buttonAdmin
			// 
			this->buttonAdmin->Location = System::Drawing::Point(258, 144);
			this->buttonAdmin->Name = L"buttonAdmin";
			this->buttonAdmin->Size = System::Drawing::Size(220, 29);
			this->buttonAdmin->TabIndex = 22;
			this->buttonAdmin->Text = L"Видалити адміністратора";
			this->buttonAdmin->UseVisualStyleBackColor = true;
			this->buttonAdmin->Click += gcnew System::EventHandler(this, &AdminDeleteForm::buttonAdmin_Click);
			// 
			// buttonMedWor
			// 
			this->buttonMedWor->Location = System::Drawing::Point(484, 144);
			this->buttonMedWor->Name = L"buttonMedWor";
			this->buttonMedWor->Size = System::Drawing::Size(152, 29);
			this->buttonMedWor->TabIndex = 21;
			this->buttonMedWor->Text = L"Видалити лікаря";
			this->buttonMedWor->UseVisualStyleBackColor = true;
			this->buttonMedWor->Click += gcnew System::EventHandler(this, &AdminDeleteForm::buttonMedWor_Click);
			// 
			// buttonMedPlc
			// 
			this->buttonMedPlc->Location = System::Drawing::Point(14, 144);
			this->buttonMedPlc->Name = L"buttonMedPlc";
			this->buttonMedPlc->Size = System::Drawing::Size(238, 29);
			this->buttonMedPlc->TabIndex = 20;
			this->buttonMedPlc->Text = L"Видалити медичний заклад";
			this->buttonMedPlc->UseVisualStyleBackColor = true;
			this->buttonMedPlc->Click += gcnew System::EventHandler(this, &AdminDeleteForm::buttonMedPlc_Click);
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(566, 262);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(109, 29);
			this->buttonBack->TabIndex = 32;
			this->buttonBack->Text = L"На головну";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &AdminDeleteForm::buttonBack_Click);
			// 
			// AdminDeleteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(687, 303);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->buttonUpdate);
			this->Controls->Add(this->textBoxNewID);
			this->Controls->Add(this->labelid);
			this->Controls->Add(this->buttonAdmin);
			this->Controls->Add(this->buttonMedWor);
			this->Controls->Add(this->buttonMedPlc);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->textBoxPIBforID);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"AdminDeleteForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Life";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonID_Click(System::Object^ sender, System::EventArgs^ e) {

		AdminDelete admin;

		String^ GetId = textBoxPIBforID->Text;

		textBoxID->Text = "";

		if (label1->Text == "Введіть ПІБ для отримання ID" && label2->Text == "ID по введеному ПІБ") {
			textBoxID->Text = admin.GetIdByName(GetId);
		}
		else {
			if (label1->Text == "Введіть ключ для отримання ID" && label2->Text == "ID по введеному ключу") {
				textBoxID->Text = admin.GetIdByKey(GetId);
			}
			else {
				if (label1->Text == "Введіть назву для отримання ID" && label2->Text == "ID по введеній назві") {
					textBoxID->Text = admin.GetIdByNM(GetId);
				}
			}
		}

	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		label1->Text = "Введіть ПІБ для отримання ID";
		label2->Text = "ID по введеному ПІБ";

	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {

		label1->Text = "Введіть ключ для отримання ID";
		label2->Text = "ID по введеному ключу";

	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

		label1->Text = "Введіть назву для отримання ID";
		label2->Text = "ID по введеній назві";

	}
	private: System::Void buttonMedPlc_Click(System::Object^ sender, System::EventArgs^ e) {

		labelid->Text = "ID медичного закладу для видалення";

	}
	private: System::Void buttonAdmin_Click(System::Object^ sender, System::EventArgs^ e) {

		labelid->Text = "ID адміністратора для видалення";

	}
	private: System::Void buttonMedWor_Click(System::Object^ sender, System::EventArgs^ e) {

		labelid->Text = "ID лікаря для видалення";

	}
	private: System::Void buttonUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

		AdminDelete admin;

		String^ ID = textBoxNewID->Text;

		if (labelid->Text == "ID лікаря для видалення") {
			admin.MedWorDelete(ID);
		}
		else {
			if (labelid->Text == "ID медичного закладу для видалення") {
				admin.MedPlcDelete(ID);
			}
			else {
				if (labelid->Text == "ID адміністратора для видалення") {
					admin.AdminsDelete(ID);
				}
			}
		}

	}
	public: bool BackToStartForm = false;
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackToStartForm = true;
		this->Close();
	}
};
}
