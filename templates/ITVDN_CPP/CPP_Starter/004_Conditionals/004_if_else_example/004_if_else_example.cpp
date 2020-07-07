? *s..
? |i..
? <string>   // модуль <string> предназначен для работы со строками

u.. s..

in. main()
{
    setlocale(LC_ALL, "rus");

	string name = "Vladimir";
	string password = "P@ss123";

	string userName;
    string userPass;

    // вводим имя пользователя
	c__ __  "Enter your name: ";
	c__ >> userName;
    
    if (userName == name)
    {
        // Если имя введенно верно, просим пользователя ввести пароль
        c__ __  "Enter password: ";
        c__ >> userPass;

        if (userPass == password)
        {
            c__ __  "Hello " __  userName __  ". You are logged in!" __  e..
        }
        else
        {
            c__ __  "Wrong password!" __  e..
        }
    }
    else
    {
        c__ __  "Wrong user name!: " __  e..
    }

	c__.g..
    r_ 0;
}

