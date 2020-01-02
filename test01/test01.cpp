#include <iostream>;
#include <cstdio>;
#include <cstdlib>; 
#include "MainMenuController.h";

using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");

    MainModelController object;
    object.ShowMenu(); 
    object.Choice();


    return 0;


}
   





  