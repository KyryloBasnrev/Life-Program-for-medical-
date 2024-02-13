#pragma once
#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>
#include "AdminLoginForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::OleDb;
using namespace System::Drawing;
using namespace msclr::interop;

class Admin {

private:

	int id;

public:

	Admin() {

		id = -1;

	}

	int GetIdByKey(String^ Key) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();

			// Запрос имени у пользователя
			String^ userInput = Key;


			// Выполнение запроса с параметром Name
			String^ query = "SELECT ID FROM Admins WHERE K = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@K", userInput));

			int id = -1; // Инициализируем id значением по умолчанию

			// Выполнение запроса и получение значения ID
			Object^ result = command->ExecuteScalar();
			if (result != nullptr && Int32::TryParse(result->ToString(), id))
			{
				// Вывод полученного ID в консоль
				return id;
			}
			else
			{
				return id = -1;
			}

			// Закрытие соединения
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	String^ GetLOGIN(int ID) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();
			String^ query = "SELECT LG FROM Admins WHERE ID = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@ID", ID));
			OleDbDataReader^ reader = command->ExecuteReader();
			while (reader->Read())
			{
				String^ data = "";
				for (int i = 0; i < reader->FieldCount; i++)
				{
					data += reader->GetValue(i)->ToString();
				}
				return data;
			}



			reader->Close();
			connection->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	String^ GetPASSWORD(int ID) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();
			String^ query = "SELECT PS FROM Admins WHERE ID = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@ID", ID));
			OleDbDataReader^ reader = command->ExecuteReader();
			while (reader->Read())
			{
				String^ data = "";
				for (int i = 0; i < reader->FieldCount; i++)
				{
					data += reader->GetValue(i)->ToString();
				}
				return data;
			}



			reader->Close();
			connection->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	String^ GetKEY(int ID) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();
			String^ query = "SELECT K FROM Admins WHERE ID = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@ID", ID));
			OleDbDataReader^ reader = command->ExecuteReader();
			while (reader->Read())
			{
				String^ data = "";
				for (int i = 0; i < reader->FieldCount; i++)
				{
					data += reader->GetValue(i)->ToString();
				}
				return data;
			}



			reader->Close();
			connection->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

};