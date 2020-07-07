? *s..
? |i..
? <string>

u.. s..

in. main()
{
	string login = "Admin";
	string password = "12345";

	string userLogin = "";
	string userPassword = "";

	c__ __  "Enter your login: ";
	c__ >> userLogin;

	c__ __  "Enter the password: ";
	c__ >> userPassword;

	__ (userLogin == login && userPassword == password) {
		c__ __  "Hello, Admin!" __  e..
	}
	else
	{
		c__ __  "Hello, User!" __  e..
	}

	system("pause");
	r_ 0;
}