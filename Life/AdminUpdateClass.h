#pragma once

#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>
#include "AdminUpdateForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::OleDb;
using namespace System::Drawing;
using namespace msclr::interop;

class AdminUpdate {

public:

	String^ GetIdByName(String^ Name) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();

			// Запрос имени у пользователя
			String^ userInput = Name;


			// Выполнение запроса с параметром Name
			String^ query = "SELECT ID FROM MedWorTable WHERE FIO = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@FIO", userInput));

			int id = -1; // Инициализируем id значением по умолчанию

			// Выполнение запроса и получение значения ID
			Object^ result = command->ExecuteScalar();
			if (result != nullptr && Int32::TryParse(result->ToString(), id))
			{
				// Вывод полученного ID в консоль
				return Convert::ToString(id);
			}
			else
			{
				return Convert::ToString(id = -1);
			}

			// Закрытие соединения
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	String^ GetIdByKey(String^ Name) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();

			// Запрос имени у пользователя
			String^ userInput = Name;


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
				return Convert::ToString(id);
			}
			else
			{
				return Convert::ToString(id = -1);
			}

			// Закрытие соединения
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	String^ GetIdByNM(String^ Name) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();

			// Запрос имени у пользователя
			String^ userInput = Name;


			// Выполнение запроса с параметром Name
			String^ query = "SELECT ID FROM MedPlcTable WHERE NM = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@NM", userInput));

			int id = -1; // Инициализируем id значением по умолчанию

			// Выполнение запроса и получение значения ID
			Object^ result = command->ExecuteScalar();
			if (result != nullptr && Int32::TryParse(result->ToString(), id))
			{
				// Вывод полученного ID в консоль
				return Convert::ToString(id);
			}
			else
			{
				return Convert::ToString(id = -1);
			}

			// Закрытие соединения
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	void UpdateMedWork(String^ ID, String^ FIO, String^ NKL, String^ Time) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

			// Открываем соединение
			connection->Open();

			// Обновление данных
			String^ updateQuery = "UPDATE MedWorTable SET FIO = '" + FIO + "', NKL = '" + NKL + "', TM = '" + Time + "' WHERE ID = ?";
			OleDbCommand^ updateCommand = gcnew OleDbCommand(updateQuery, connection);

			updateCommand->Parameters->Add(gcnew OleDbParameter("@ID", Convert::ToInt32(ID)));

			int affectedRows = updateCommand->ExecuteNonQuery();
			if (affectedRows > 0)
			{
				MessageBox::Show("Дані успішно оновлені", "Дані оновлені!");
			}
			else
			{
				MessageBox::Show("Помилка оновлення даних", "Помилка оновлення!");
			}

			// Закрываем соединение
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	void UpdateMedPlc(String^ ID, String^ TYPE, String^ NM, String^ ADRES) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

			// Открываем соединение
			connection->Open();

			// Обновление данных
			String^ updateQuery = "UPDATE MedPlcTable SET TYPE = '" + TYPE + "', NM = '" + NM + "', ADRES = '" + ADRES + "' WHERE ID = ?";
			OleDbCommand^ updateCommand = gcnew OleDbCommand(updateQuery, connection);

			updateCommand->Parameters->Add(gcnew OleDbParameter("@ID", Convert::ToInt32(ID)));

			int affectedRows = updateCommand->ExecuteNonQuery();
			if (affectedRows > 0)
			{
				MessageBox::Show("Дані успішно оновлені", "Дані оновлені!");
			}
			else
			{
				MessageBox::Show("Помилка оновлення даних", "Помилка оновлення!");
			}

			// Закрываем соединение
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	void UpdateAdimn(String^ ID, String^ Login, String^ Password, String^ Key) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

			// Открываем соединение
			connection->Open();

			// Обновление данных
			String^ updateQuery = "UPDATE Admins SET LG = '" + Login + "', PS = '" + Password + "', K = '" + Key + "' WHERE ID = ?";
			OleDbCommand^ updateCommand = gcnew OleDbCommand(updateQuery, connection);

			updateCommand->Parameters->Add(gcnew OleDbParameter("@ID", Convert::ToInt32(ID)));

			int affectedRows = updateCommand->ExecuteNonQuery();
			if (affectedRows > 0)
			{
				MessageBox::Show("Дані успішно оновлені", "Дані оновлені!");
			}
			else
			{
				MessageBox::Show("Помилка оновлення даних", "Помилка оновлення!");
			}

			// Закрываем соединение
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

};