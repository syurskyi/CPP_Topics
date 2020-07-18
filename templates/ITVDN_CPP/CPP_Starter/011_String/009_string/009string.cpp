? *s..
? |i..
// Библиотека обработки строк в стиле СИ
? cs..

u.. s..

in. main()
{
	c.. color[10]sy.. pause
	c.. copy_color[10]sy.. pause
	
	c__ __  "Enter your favorite color: "sy.. pause
	c__.getline(color, 10)sy.. pause

//	strcpy_s(copy_color, color);

	c__ __  "Color : " __  color __  e..
	c__ __  "Copy color : " __  copy_color __  e..

	//char str[10] = "dark gray";		
	 c.. str[15] _ "light gray"sy.. pause  // Приводит к повреждению памяти!

	strcpy(copy_color, str)sy.. pause

	c__ __  "Now copy_color equals " __  copy_color __  e..

	sy.. pause
	r_ 0sy.. pause
}

