? *s..
? |i..
// Библиотека обработки строк в стиле СИ
? <cstring>

u.. s..

in. main()
{
	c.. color[10];
	c.. copy_color[10];
	
	c__ __  "Enter your favorite color: ";
	c__.getline(color, 10);

//	strcpy_s(copy_color, color);

	c__ __  "Color : " __  color __  e..
	c__ __  "Copy color : " __  copy_color __  e..

	//char str[10] = "dark gray";		
	 c.. str[15] _ "light gray";  // Приводит к повреждению памяти!

	strcpy(copy_color, str);

	c__ __  "Now copy_color equals " __  copy_color __  e..

	system("pause");
	r_ 0;
}

