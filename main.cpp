#include <iostream>
#include <string> // модуль для работы со строками

using namespace std;

int main()
{

    system("chcp 65001");

string name = "Vladimir";
string password = "20otovat";

string userName;
string userPass;

// введите имя

cout << "Введите имя: ";
cin >> userName;

if(userName == name){
    //Если имя введено верно
    cout << "Введите пароль: ";
    cin >> userPass;

    if(userPass == password){
        cout << "Здравствуйте - " << userName << "Вы вошли в систему" << endl;
    }
    else{
        cout << "Вы ввели не правельный пароль" << endl;
    }

}else{
    cout << "Неверный логин" << endl;
}



    cin.get();
    return 0;

}


