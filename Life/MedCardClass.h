#pragma once

#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>
#include "LifeForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace msclr::interop;

class MedCard {
private:

	int id;

public:

	MedCard() {
		id = -1;
	}

	int GetIdByName(String^ Name) {

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

	int GetIdByNkl(String^ Name) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();

			// Запрос имени у пользователя
			String^ userInput = Name;

			// Выполнение запроса с параметром Name
			String^ query = "SELECT ID FROM MedWorTable WHERE NKL = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@NKL", userInput));

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

	String^ GetFIO(int ID) {

		String^ connectionStringFIO = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connectionFIO = gcnew OleDbConnection(connectionStringFIO);

		try
		{
			// Открытие соединения
			connectionFIO->Open();
			String^ queryFIO = "SELECT FIO FROM MedWorTable WHERE ID = ?";
			OleDbCommand^ commandFIO = gcnew OleDbCommand(queryFIO, connectionFIO);
			commandFIO->Parameters->Add(gcnew OleDbParameter("@ID", ID));
			OleDbDataReader^ readerFIO = commandFIO->ExecuteReader();
			while (readerFIO->Read())
			{
				String^ dataFIO = "";
				for (int i = 0; i < readerFIO->FieldCount; i++)
				{
					dataFIO += readerFIO->GetValue(i)->ToString();
				}
				return dataFIO;
			}



			readerFIO->Close();
			connectionFIO->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	String^ GetNKL(int ID) {

		String^ connectionStringNKL = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connectionNKL = gcnew OleDbConnection(connectionStringNKL);

		try
		{
			// Открытие соединения
			connectionNKL->Open();
			String^ queryNKL = "SELECT NKL FROM MedWorTable WHERE ID = ?";
			OleDbCommand^ commandNKL = gcnew OleDbCommand(queryNKL, connectionNKL);
			commandNKL->Parameters->Add(gcnew OleDbParameter("@ID", ID));
			OleDbDataReader^ readerNKL = commandNKL->ExecuteReader();
			while (readerNKL->Read())
			{
				String^ dataNKL = "";
				for (int i = 0; i < readerNKL->FieldCount; i++)
				{
					dataNKL += readerNKL->GetValue(i)->ToString();
				}
				return dataNKL;
			}



			readerNKL->Close();
			connectionNKL->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	String^ GetTIME(int ID) {

		String^ connectionStringTIME = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connectionTIME = gcnew OleDbConnection(connectionStringTIME);

		try
		{
			// Открытие соединения
			connectionTIME->Open();
			String^ queryTIME = "SELECT TM FROM MedWorTable WHERE ID = ?";
			OleDbCommand^ commandTIME = gcnew OleDbCommand(queryTIME, connectionTIME);
			commandTIME->Parameters->Add(gcnew OleDbParameter("@ID", ID));
			OleDbDataReader^ readerTIME = commandTIME->ExecuteReader();
			while (readerTIME->Read())
			{
				String^ dataTIME = "";
				for (int i = 0; i < readerTIME->FieldCount; i++)
				{
					dataTIME += readerTIME->GetValue(i)->ToString();
				}
				return dataTIME;
			}



			readerTIME->Close();
			connectionTIME->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}
};