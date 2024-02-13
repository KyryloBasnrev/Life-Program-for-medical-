#pragma once

#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>
#include "AdminUpdateClass.h"

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
	/// Сводка для AdminUpdateForm
	/// </summary>
	public ref class AdminUpdateForm : public System::Windows::Forms::Form
	{
	public:
		AdminUpdateForm(void)
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
		~AdminUpdateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxPIBforID;
	private: System::Windows::Forms::TextBox^ textBoxID;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonID;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ buttonMedPlc;
	private: System::Windows::Forms::Button^ buttonMedWor;


	private: System::Windows::Forms::Button^ buttonAdmin;
	private: System::Windows::Forms::Label^ labelid;
	private: System::Windows::Forms::Label^ labelpib;
	private: System::Windows::Forms::Label^ labelPlc;
	private: System::Windows::Forms::Label^ labeltime;
	private: System::Windows::Forms::TextBox^ textBoxNewID;
	private: System::Windows::Forms::TextBox^ textBoxNewData1;
	private: System::Windows::Forms::TextBox^ textBoxNewData2;
	private: System::Windows::Forms::TextBox^ textBoxNewData3;







	private: System::Windows::Forms::Button^ buttonUpdate;
	private: System::Windows::Forms::Button^ buttonBack;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxPIBforID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonID = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonMedPlc = (gcnew System::Windows::Forms::Button());
			this->buttonMedWor = (gcnew System::Windows::Forms::Button());
			this->buttonAdmin = (gcnew System::Windows::Forms::Button());
			this->labelid = (gcnew System::Windows::Forms::Label());
			this->labelpib = (gcnew System::Windows::Forms::Label());
			this->labelPlc = (gcnew System::Windows::Forms::Label());
			this->labeltime = (gcnew System::Windows::Forms::Label());
			this->textBoxNewID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNewData1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNewData2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNewData3 = (gcnew System::Windows::Forms::TextBox());
			this->buttonUpdate = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 19);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть ПІБ для отримання ID";
			// 
			// textBoxPIBforID
			// 
			this->textBoxPIBforID->Location = System::Drawing::Point(276, 11);
			this->textBoxPIBforID->Name = L"textBoxPIBforID";
			this->textBoxPIBforID->Size = System::Drawing::Size(296, 29);
			this->textBoxPIBforID->TabIndex = 1;
			// 
			// textBoxID
			// 
			this->textBoxID->Location = System::Drawing::Point(186, 67);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->ReadOnly = true;
			this->textBoxID->Size = System::Drawing::Size(175, 29);
			this->textBoxID->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(182, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ID по введеному ПІБ";
			// 
			// buttonID
			// 
			this->buttonID->Location = System::Drawing::Point(416, 67);
			this->buttonID->Name = L"buttonID";
			this->buttonID->Size = System::Drawing::Size(105, 28);
			this->buttonID->TabIndex = 4;
			this->buttonID->Text = L"Шукати ID";
			this->buttonID->UseVisualStyleBackColor = true;
			this->buttonID->Click += gcnew System::EventHandler(this, &AdminUpdateForm::buttonID_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 102);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 35);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Шукати ID лікаря";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminUpdateForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(410, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(263, 35);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Шукати ID медичного закладу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminUpdateForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(176, 102);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(228, 35);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Шукати ID адміністратора";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminUpdateForm::button3_Click);
			// 
			// buttonMedPlc
			// 
			this->buttonMedPlc->Location = System::Drawing::Point(12, 144);
			this->buttonMedPlc->Name = L"buttonMedPlc";
			this->buttonMedPlc->Size = System::Drawing::Size(231, 29);
			this->buttonMedPlc->TabIndex = 8;
			this->buttonMedPlc->Text = L"Оновити медичний заклад";
			this->buttonMedPlc->UseVisualStyleBackColor = true;
			this->buttonMedPlc->Click += gcnew System::EventHandler(this, &AdminUpdateForm::buttonMedPlc_Click);
			// 
			// buttonMedWor
			// 
			this->buttonMedWor->Location = System::Drawing::Point(468, 145);
			this->buttonMedWor->Name = L"buttonMedWor";
			this->buttonMedWor->Size = System::Drawing::Size(147, 28);
			this->buttonMedWor->TabIndex = 9;
			this->buttonMedWor->Text = L"Оновити лікаря";
			this->buttonMedWor->UseVisualStyleBackColor = true;
			this->buttonMedWor->Click += gcnew System::EventHandler(this, &AdminUpdateForm::buttonMedWor_Click);
			// 
			// buttonAdmin
			// 
			this->buttonAdmin->Location = System::Drawing::Point(249, 145);
			this->buttonAdmin->Name = L"buttonAdmin";
			this->buttonAdmin->Size = System::Drawing::Size(213, 28);
			this->buttonAdmin->TabIndex = 10;
			this->buttonAdmin->Text = L"Оновити адміністратора";
			this->buttonAdmin->UseVisualStyleBackColor = true;
			this->buttonAdmin->Click += gcnew System::EventHandler(this, &AdminUpdateForm::buttonAdmin_Click);
			// 
			// labelid
			// 
			this->labelid->AutoSize = true;
			this->labelid->Location = System::Drawing::Point(8, 199);
			this->labelid->Name = L"labelid";
			this->labelid->Size = System::Drawing::Size(29, 21);
			this->labelid->TabIndex = 11;
			this->labelid->Text = L"ID";
			// 
			// labelpib
			// 
			this->labelpib->AutoSize = true;
			this->labelpib->Location = System::Drawing::Point(8, 234);
			this->labelpib->Name = L"labelpib";
			this->labelpib->Size = System::Drawing::Size(40, 21);
			this->labelpib->TabIndex = 12;
			this->labelpib->Text = L"ПІБ";
			// 
			// labelPlc
			// 
			this->labelPlc->AutoSize = true;
			this->labelPlc->Location = System::Drawing::Point(8, 271);
			this->labelPlc->Name = L"labelPlc";
			this->labelPlc->Size = System::Drawing::Size(151, 21);
			this->labelPlc->TabIndex = 13;
			this->labelPlc->Text = L"Медичний заклад";
			// 
			// labeltime
			// 
			this->labeltime->AutoSize = true;
			this->labeltime->Location = System::Drawing::Point(8, 308);
			this->labeltime->Name = L"labeltime";
			this->labeltime->Size = System::Drawing::Size(125, 21);
			this->labeltime->TabIndex = 14;
			this->labeltime->Text = L"Часи прийому";
			// 
			// textBoxNewID
			// 
			this->textBoxNewID->Location = System::Drawing::Point(168, 191);
			this->textBoxNewID->Name = L"textBoxNewID";
			this->textBoxNewID->Size = System::Drawing::Size(505, 29);
			this->textBoxNewID->TabIndex = 15;
			// 
			// textBoxNewData1
			// 
			this->textBoxNewData1->Location = System::Drawing::Point(168, 226);
			this->textBoxNewData1->Name = L"textBoxNewData1";
			this->textBoxNewData1->Size = System::Drawing::Size(505, 29);
			this->textBoxNewData1->TabIndex = 16;
			// 
			// textBoxNewData2
			// 
			this->textBoxNewData2->Location = System::Drawing::Point(168, 263);
			this->textBoxNewData2->Name = L"textBoxNewData2";
			this->textBoxNewData2->Size = System::Drawing::Size(505, 29);
			this->textBoxNewData2->TabIndex = 17;
			// 
			// textBoxNewData3
			// 
			this->textBoxNewData3->Location = System::Drawing::Point(168, 300);
			this->textBoxNewData3->Name = L"textBoxNewData3";
			this->textBoxNewData3->Size = System::Drawing::Size(505, 29);
			this->textBoxNewData3->TabIndex = 18;
			// 
			// buttonUpdate
			// 
			this->buttonUpdate->Location = System::Drawing::Point(276, 337);
			this->buttonUpdate->Name = L"buttonUpdate";
			this->buttonUpdate->Size = System::Drawing::Size(231, 33);
			this->buttonUpdate->TabIndex = 19;
			this->buttonUpdate->Text = L"Оновити дані";
			this->buttonUpdate->UseVisualStyleBackColor = true;
			this->buttonUpdate->Click += gcnew System::EventHandler(this, &AdminUpdateForm::buttonUpdate_Click);
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(560, 338);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(115, 32);
			this->buttonBack->TabIndex = 20;
			this->buttonBack->Text = L"На головну";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &AdminUpdateForm::buttonBack_Click);
			// 
			// AdminUpdateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(687, 381);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->buttonUpdate);
			this->Controls->Add(this->textBoxNewData3);
			this->Controls->Add(this->textBoxNewData2);
			this->Controls->Add(this->textBoxNewData1);
			this->Controls->Add(this->textBoxNewID);
			this->Controls->Add(this->labeltime);
			this->Controls->Add(this->labelPlc);
			this->Controls->Add(this->labelpib);
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
			this->Name = L"AdminUpdateForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Life";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void buttonID_Click(System::Object^ sender, System::EventArgs^ e) {

		AdminUpdate admin;

		String^ FIO = textBoxPIBforID->Text;

		textBoxID->Text = "";

		if (label1->Text == "Введіть ПІБ для отримання ID" && label2->Text == "ID по введеному ПІБ") {
			textBoxID->Text = admin.GetIdByName(FIO);
		}
		else {
			if (label1->Text == "Введіть ключ для отримання ID" && label2->Text == "ID по введеному ключу") {
				textBoxID->Text = admin.GetIdByKey(FIO);
			}
			else {
				if (label1->Text == "Введіть назву для отримання ID" && label2->Text == "ID по введеній назві") {
					textBoxID->Text = admin.GetIdByNM(FIO);
				}
			}
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		label1->Text = "Введіть ПІБ для отримання ID";
		label2->Text = "ID по введеному ПІБ";

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		label1->Text = "Введіть ключ для отримання ID";
		label2->Text = "ID по введеному ключу";

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		label1->Text = "Введіть назву для отримання ID";
		label2->Text = "ID по введеній назві";

	}
	private: System::Void buttonMedPlc_Click(System::Object^ sender, System::EventArgs^ e) {

		labelpib->Text = "Тип";
		labelPlc->Text = "Назва";
		labeltime->Text = "Адреса";

	}
	private: System::Void buttonAdmin_Click(System::Object^ sender, System::EventArgs^ e) {

		labelpib->Text = "Логін";
		labelPlc->Text = "Пароль";
		labeltime->Text = "Ключ";

	}
	private: System::Void buttonMedWor_Click(System::Object^ sender, System::EventArgs^ e) {

		labelpib->Text = "ПІБ";
		labelPlc->Text = "Медичний заклад";
		labeltime->Text = "Часи прийому";

	}
	private: System::Void buttonUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

		AdminUpdate admin;

		String^ ID = textBoxNewID->Text;
		String^ FIO = textBoxNewData1->Text;
		String^ NKL = textBoxNewData2->Text;
		String^ TIME = textBoxNewData3->Text;

		if (labelpib->Text == "ПІБ" && labelPlc->Text == "Медичний заклад" && labeltime->Text == "Часи прийому") {
			admin.UpdateMedWork(ID, FIO, NKL, TIME);
		}
		else {
			if (labelpib->Text == "Тип" && labelPlc->Text == "Назва" && labeltime->Text == "Адреса") {
				admin.UpdateMedPlc(ID, FIO, NKL, TIME);
			}
			else {
				if (labelpib->Text == "Логін" && labelPlc->Text == "Пароль" && labeltime->Text == "Ключ") {
					admin.UpdateAdimn(ID, FIO, NKL, TIME);
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
