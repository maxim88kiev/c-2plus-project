#include <iostream>
#include <string> // модуль для работы со строками

using namespace std;

int main()
{

    system("chcp 65001");

   int number;

   cout << "Введите число 1 или 2" << endl;

   cin >> number;

   switch (number){
       case 1:
       case 2:
       case 3:{
           cout << " 3 " << endl;
           break;
       }
       default:{
           cout << "no" << endl;
       }
   }

    cin.get();
    return 0;

}


