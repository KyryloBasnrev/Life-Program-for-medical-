#pragma once
#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>
#include "AdminWorForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::OleDb;
using namespace System::Drawing;
using namespace msclr::interop;

class AdminWork {

private:

	int LastIdMedWorTable() {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Відкриваємо з'єднання
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
			connection->Open();

			// Вибираємо останнє значення з колонки ID
			String^ query = "SELECT TOP 1 ID FROM MedWorTable ORDER BY ID DESC";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			Object^ result = command->ExecuteScalar();

			if (result != nullptr)
			{
				return Convert::ToInt32(result);
			}
			else
			{
				MessageBox::Show("No data found.", "Error");
			}

			// Закриваємо з'єднання
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	int LastIdMedPlcTable() {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Відкриваємо з'єднання
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
			connection->Open();

			// Вибираємо останнє значення з колонки ID
			String^ query = "SELECT TOP 1 ID FROM MedPlcTable ORDER BY ID DESC";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			Object^ result = command->ExecuteScalar();

			if (result != nullptr)
			{
				return Convert::ToInt32(result);
			}
			else
			{
				MessageBox::Show("No data found.", "Error");
			}

			// Закриваємо з'єднання
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	int LastIdAdmins() {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Відкриваємо з'єднання
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
			connection->Open();

			// Вибираємо останнє значення з колонки ID
			String^ query = "SELECT TOP 1 ID FROM Admins ORDER BY ID DESC";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			Object^ result = command->ExecuteScalar();

			if (result != nullptr)
			{
				return Convert::ToInt32(result);
			}
			else
			{
				MessageBox::Show("No data found.", "Error");
			}

			// Закриваємо з'єднання
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);

		}
	}


public:

	void SaveNewDataMedWorTable(String^ id, String^ Fio, String^ Nkl, String^ Time) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		String^ ID = Convert::ToString((LastIdMedWorTable() + 1));

		try
		{
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

			// Открытие соединения
			connection->Open();

			// Вставка данных
			String^ insertQuery = "INSERT INTO MedWorTable VALUES ('" + ID + "', '" + Fio + "', '" + Nkl + "', '" + Time + "')";
			OleDbCommand^ insertCommand = gcnew OleDbCommand(insertQuery, connection);

			int affectedRows = insertCommand->ExecuteNonQuery();
			if (affectedRows > 0)
			{
				MessageBox::Show("Дані успішно збережені", "Дані збережено!");
			}
			else
			{
				MessageBox::Show("Помилка збереження даних", "Дані не збережено!");
			}

			// Закрытие соединения
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	void SaveNewDataMedPlcTable(String^ id, String^ Type, String^ Nm, String^ Adres) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		String^ ID = Convert::ToString((LastIdMedPlcTable() + 1));

		try
		{
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

			// Открытие соединения
			connection->Open();

			// Вставка данных
			String^ insertQuery = "INSERT INTO MedPlcTable VALUES ('" + ID + "', '" + Type + "', '" + Nm + "', '" + Adres + "')";
			OleDbCommand^ insertCommand = gcnew OleDbCommand(insertQuery, connection);

			int affectedRows = insertCommand->ExecuteNonQuery();
			if (affectedRows > 0)
			{
				MessageBox::Show("Дані успішно збережені", "Дані збережено!");
			}
			else
			{
				MessageBox::Show("Помилка збереження даних", "Дані не збережено!");
			}

			// Закрытие соединения
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	void SaveNewDataAdmins(String^ id, String^ Login, String^ Password, String^ Key) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		String^ ID = Convert::ToString((LastIdAdmins() + 1));

		try
		{
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

			// Открытие соединения
			connection->Open();

			// Вставка данных
			String^ insertQuery = "INSERT INTO Admins VALUES ('" + ID + "', '" + Login + "', '" + Password + "', '" + Key + "')";
			OleDbCommand^ insertCommand = gcnew OleDbCommand(insertQuery, connection);

			int affectedRows = insertCommand->ExecuteNonQuery();
			if (affectedRows > 0)
			{
				MessageBox::Show("Дані успішно збережені", "Дані збережено!");
			}
			else
			{
				MessageBox::Show("Помилка збереження даних", "Дані не збережено!");
			}

			// Закрытие соединения
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

};
