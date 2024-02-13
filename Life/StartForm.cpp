#include "StartForm.h"
#include "UserRegisterForm.h"
#include "UserLoginForm.h"
#include "LifeForm.h"
#include "AdminWorForm.h"
#include "AdminUpdateForm.h"
#include "AdminLoginForm.h"
#include "AdminDeleteForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	Life1::StartForm Startform;
	Life1::UserRegisterForm UserRegisterform;
	Life1::UserLoginForm UserLoginform;
	Life1::LifeForm Lifeform;
	Life1::AdminWorForm AdminWorform;
	Life1::AdminUpdateForm AdminUpdateform;
	Life1::AdminLoginForm AdminLoginform;
	Life1::AdminDeleteForm AdminDeleteform;

	linc:

	while (true) {
		Startform.ShowDialog();
		if (Startform.ToUserLoginForm) {
			UserLoginform.ShowDialog();
			if (UserLoginform.ToLifeForm) {
				Lifeform.ShowDialog();
				if (Lifeform.BackToStartForm) {
					Startform.ToUserLoginForm = false;
					UserLoginform.ToLifeForm = false;
					Lifeform.BackToStartForm = false;
					goto linc;
					break;
				}
				break;
			}
			else {
				if (UserLoginform.ToUserRegisterForm) {
					UserRegisterform.ShowDialog();
					if (UserRegisterform.ToLifeFormFromRegister) {
						Lifeform.ShowDialog();
						if (Lifeform.BackToStartForm) {
							Startform.ToUserLoginForm = false;
							UserLoginform.ToUserRegisterForm = false;
							UserRegisterform.ToLifeFormFromRegister = false;
							Lifeform.BackToStartForm = false;
							goto linc;
							break;
						}
						break;
					}
				}
			}
		}
		else {
			if (Startform.ToAdminLoginForm) {
				AdminLoginform.ShowDialog();
				if (AdminLoginform.ToAdminWorForm) {
					AdminWorform.ShowDialog();
					if (AdminWorform.ToAdminUpdateForm) {
						AdminUpdateform.ShowDialog();
						if (AdminUpdateform.BackToStartForm) {
							Startform.ToAdminLoginForm = false;
							AdminLoginform.ToAdminWorForm = false;
							AdminWorform.ToAdminUpdateForm = false;
							AdminUpdateform.BackToStartForm = false;
							goto linc;
							break;
						}
						break;
					}
					else {
						if (AdminWorform.ToAdminDeleteForm) {
							AdminDeleteform.ShowDialog();
							if (AdminDeleteform.BackToStartForm) {
								Startform.ToAdminLoginForm = false;
								AdminLoginform.ToAdminWorForm = false;
								AdminWorform.ToAdminDeleteForm = false;
								AdminDeleteform.BackToStartForm = false;
								goto linc;
								break;
							}
							break;
						}
					}
					if (AdminWorform.BackToStartForm) {
						Startform.ToAdminLoginForm = false;
						AdminLoginform.ToAdminWorForm = false;
						AdminWorform.BackToStartForm = false;
						goto linc;
						break;
					}
				}
			}
		}
		break;
	}

}