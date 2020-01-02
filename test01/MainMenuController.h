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
		_mainMenuModel.mm= "Главное Меню "; 
		_mainMenuModel.list = "Список задач ";
		_mainMenuModel.help = "Помощь";
		_mainMenuModel.back= "Назад";
        _mainMenuModel.end = "Выход";
	    _mainMenuModel.choice = "Ваш выбор: ";


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
			auto result1 = _mainMenuModel.mm + "->" + _mainMenuModel.list + "\n1)В разработке!\n2)" + _mainMenuModel.back + "\n" + _mainMenuModel.choice; 
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
			auto result2 = _mainMenuModel.mm + "->" + _mainMenuModel.help + "\n1)В разработке!\n2)" + _mainMenuModel.back + "\n" + _mainMenuModel.choice;
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
						
			cout << "Вы ввели неверное значение!" << endl;


		}

	
	}


};
