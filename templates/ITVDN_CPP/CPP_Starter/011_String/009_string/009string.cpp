? *s..
? |i..
// Библиотека обработки строк в стиле СИ
? cs..

u.. s..

in. main()
{
	c.. color[10]sy.. p..
	c.. copy_color[10]sy.. p..
	
	c__ __  "Enter your favorite color: "sy.. p..
	c__.getline(color, 10)sy.. p..

//	strcpy_s(copy_color, color);

	c__ __  "Color : " __  color __  e..
	c__ __  "Copy color : " __  copy_color __  e..

	//char str[10] = "dark gray";		
	 c.. str[15] _ "light gray"sy.. p..  // Приводит к повреждению памяти!

	strcpy(copy_color, str)sy.. p..

	c__ __  "Now copy_color equals " __  copy_color __  e..

	sy.. p..
	r_ 0sy.. p..
}

