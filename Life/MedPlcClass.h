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

class MedPlc {

private:

	int id;

public:

	MedPlc() {

		id = -1;

	}

	int GetIdByTYPE(String^ TYPE) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();

			// Запрос имени у пользователя
			String^ userInput = TYPE;


			// Выполнение запроса с параметром Name
			String^ query = "SELECT ID FROM MedPlcTable WHERE TYPE = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@TYPE", userInput));

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

	int GetIdByNm(String^ NM) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();

			// Запрос имени у пользователя
			String^ userInput = NM;


			// Выполнение запроса с параметром Name
			String^ query = "SELECT ID FROM MedPlcTable WHERE NM = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@NM", userInput));

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

	int GetIdByADRES(String^ ADRES) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();

			// Запрос имени у пользователя
			String^ userInput = ADRES;


			// Выполнение запроса с параметром Name
			String^ query = "SELECT ID FROM MedPlcTable WHERE ADRES = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@ADRES", userInput));

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

	String^ GetTYPE(int ID) {

		String^ connectionStringTYPE = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connectionTYPE = gcnew OleDbConnection(connectionStringTYPE);

		try
		{
			// Открытие соединения
			connectionTYPE->Open();
			String^ queryTYPE = "SELECT TYPE FROM MedPlcTable WHERE ID = ?";
			OleDbCommand^ commandTYPE = gcnew OleDbCommand(queryTYPE, connectionTYPE);
			commandTYPE->Parameters->Add(gcnew OleDbParameter("@ID", ID));
			OleDbDataReader^ readerTYPE = commandTYPE->ExecuteReader();
			while (readerTYPE->Read())
			{
				String^ dataTYPE = "";
				for (int i = 0; i < readerTYPE->FieldCount; i++)
				{
					dataTYPE += readerTYPE->GetValue(i)->ToString();
				}
				return dataTYPE;
			}



			readerTYPE->Close();
			connectionTYPE->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	String^ GetNM(int ID) {

		String^ connectionStringNM = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connectionNM = gcnew OleDbConnection(connectionStringNM);

		try
		{
			// Открытие соединения
			connectionNM->Open();
			String^ queryNM = "SELECT NM FROM MedPlcTable WHERE ID = ?";
			OleDbCommand^ commandNM = gcnew OleDbCommand(queryNM, connectionNM);
			commandNM->Parameters->Add(gcnew OleDbParameter("@ID", ID));
			OleDbDataReader^ readerNM = commandNM->ExecuteReader();
			while (readerNM->Read())
			{
				String^ dataNM = "";
				for (int i = 0; i < readerNM->FieldCount; i++)
				{
					dataNM += readerNM->GetValue(i)->ToString();
				}
				return dataNM;
			}



			readerNM->Close();
			connectionNM->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

	String^ GetADRES(int ID) {

		String^ connectionStringADRES = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connectionADRES = gcnew OleDbConnection(connectionStringADRES);

		try
		{
			// Открытие соединения
			connectionADRES->Open();
			String^ queryADRES = "SELECT ADRES FROM MedPlcTable WHERE ID = ?";
			OleDbCommand^ commandADRES = gcnew OleDbCommand(queryADRES, connectionADRES);
			commandADRES->Parameters->Add(gcnew OleDbParameter("@ID", ID));
			OleDbDataReader^ readerADRES = commandADRES->ExecuteReader();
			while (readerADRES->Read())
			{
				String^ dataADRES = "";
				for (int i = 0; i < readerADRES->FieldCount; i++)
				{
					dataADRES += readerADRES->GetValue(i)->ToString();
				}
				return dataADRES;
			}



			readerADRES->Close();
			connectionADRES->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

};