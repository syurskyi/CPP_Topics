#include "stdafx.h"
#include <iostream>
#include <string>   // модуль <string> предназначен для работы со строками

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

	string name = "Vladimir";
	string password = "P@ss123";

	string userName;
    string userPass;

    // вводим имя пользователя
	cout << "Enter your name: ";
	cin >> userName;            
    
    if (userName == name)
    {
        // Если имя введенно верно, просим пользователя ввести пароль
        cout << "Enter password: ";
        cin >> userPass;

        if (userPass == password)
        {
            cout << "Hello " << userName << ". You are logged in!" << endl;
        }
        else
        {
            cout << "Wrong password!" << endl;
        }
    }
    else
    {
        cout << "Wrong user name!: " << endl;
    }

	cin.get();
    return 0;
}

