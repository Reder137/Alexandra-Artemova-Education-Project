#include <iostream> 
#include "MainMenuModel.h"
#include "MainMenuVeiw.h"
using namespace std; 

class MainModelController
{ 
private:
	MainMenuModel _mainMenuModel; 
	MainMenuVeiw _mainMenuVeiw;
public:
	MainModelController()
	{ 
		_mainMenuModel.mm= "������� ���� "; 
		_mainMenuModel.list = "������ ����� ";
		_mainMenuModel.help = "������";
		_mainMenuModel.back= "�����";
        _mainMenuModel.end = "�����";
	    _mainMenuModel.choice = "��� �����: ";


	} 


	void ShowMenu()
	{
		auto result = _mainMenuModel.mm + "\n1)" + _mainMenuModel.list + "\n2)" + _mainMenuModel.help + "\n3)" + _mainMenuModel.end + "\n" + _mainMenuModel.choice;
		_mainMenuVeiw.ShowMenu(result);
	} 

	int EnterNum()
	{

		int num;
		cin >> num;
		return num;
	} 

	void Choice()
	{  
		int choice = EnterNum(); 

		if (choice == 1)
		{ 
			_mainMenuVeiw.CleanAll(); 
			auto result1 = _mainMenuModel.mm + "->" + _mainMenuModel.list + "\n1)� ����������!\n2)" + _mainMenuModel.back + "\n" + _mainMenuModel.choice; 
			_mainMenuVeiw.ShowMenu(result1); 

	           cin.get();
			
	         EnterNum();

			if (EnterNum() == 2)
			{ 
				_mainMenuVeiw.CleanAll();
				ShowMenu();
			}

      	}
		else if (choice == 2)
		{
			_mainMenuVeiw.CleanAll();
			auto result2 = _mainMenuModel.mm + "->" + _mainMenuModel.help + "\n1)� ����������!\n2)" + _mainMenuModel.back + "\n" + _mainMenuModel.choice;
			_mainMenuVeiw.ShowMenu(result2);

		}
		else if (choice == 3)
		{
			

		} 
		else
		{  
			_mainMenuVeiw.CleanAll();
			cin.clear();
			cin.sync(); 
						
			cout << "�� ����� �������� ��������!" << endl;


		}

	
	}


};
