#include <iostream>;
#include <cstdio>;
#include <cstdlib>;
using namespace std;

int main();

class menu
{
    string mm;
    string list;
    string help;
    string end;
    string back;
    string choice;
    int number;

public:
    menu()
    {
        mm = "Главное Меню ";
        list = "Список задач";
        help = "Помощь";
        end = "Выход";
        back = "Назад";
        choice = "Ваш выбор: ";

    }



    void clean()
    {
        system("CLS");
    } 

    int enterValue()
    {

        int num;
        cin >> num;
        return num;
    } 

    int value()
    {    
        int a = enterValue(); 

        if (a==1)
        { 
            clean();
            cout << mm + "->" + list << endl
                << "1)В разработке!" << endl
                << "2)" + back<<endl<<choice;
            enterValue();

            if (enterValue() == 2)
            { 
                cin.clear();
                cin.sync();
                show();
            }

        } 
        else if (a == 2)
        {
            clean();
            cout << mm + "->" + help << endl
                << "1)В разработке!" << endl
                << "2)" + back<<endl<<choice; 
            if (enterValue() == 2)
            {
                cin.clear();
                cin.sync();
                show();
            }
        }
        else if (a == 3)
        {

            main();
        }  

        else
        { 
             cin.clear();
             cin.sync();
            cout << "\tНеверное значение!Нажмите Enter для продожения... " << endl;

          system("pause");
          
            err();
        }

        return a;
    } 


    void show()
    { 
        clean();
        cout << mm << " : " << endl
            << "1)" + list << endl
            << "2)" + help << endl
            << "3)" + end << endl
            << choice;

        value();

    }
    void err()
    {
       
    
        cin.get();
        clean();
      
        show();
        
     
       
    }

  
};

int main()
{
    setlocale(LC_ALL, "rus");

    menu m;

    m.show();

    return 0;


}
   





  