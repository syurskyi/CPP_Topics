? *s..
? |i..
? |s..

u.. s..

in. main()
{
	s.. login _ "Admin";
	s.. password _ "12345";

	s.. userLogin _ "";
	s.. userPassword _ "";

	c__ __  "Enter your login: ";
	c__ __ userLogin;

	c__ __  "Enter the password: ";
	c__ __ userPassword;

	__ (userLogin __ login && userPassword __ password) {
		c__ __  "Hello, Admin!" __  e..
	}
	____
	{
		c__ __  "Hello, User!" __  e..
	}

	system("pause");
	r_ 0;
}