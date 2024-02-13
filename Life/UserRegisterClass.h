#pragma once
#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>
#include "UserRegisterForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::OleDb;
using namespace System::Drawing;
using namespace msclr::interop;

class UserRegister {

private:

	int LastIdUsers() {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// ³�������� �'�������
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
			connection->Open();

			// �������� ������ �������� � ������� ID
			String^ query = "SELECT TOP 1 ID FROM Users ORDER BY ID DESC";
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

			// ��������� �'�������
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

public:

	void SaveNewDataUsers(String^ id, String^ Login, String^ Password) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Life\\Life\\Database.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		String^ ID = Convert::ToString((LastIdUsers() + 1));

		try
		{
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

			// �������� ����������
			connection->Open();

			// ������� ������
			String^ insertQuery = "INSERT INTO Users VALUES ('" + ID + "', '" + Login + "', '" + Password + "')";
			OleDbCommand^ insertCommand = gcnew OleDbCommand(insertQuery, connection);

			int affectedRows = insertCommand->ExecuteNonQuery();
			if (affectedRows > 0)
			{
				MessageBox::Show("���������� ������", "����������!");
			}
			else
			{
				MessageBox::Show("���������� �� ��������", "�������!");
			}

			// �������� ����������
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

};