? *s..
? |i..

u.. s..

// Константный указатель на константные данные,т.е. ничто не может быть изменено
void CalcArea(const double* const pPi, const double* const pRadius, double* const pArea) 
{
	// проверить указатели перед использованием!
	__ (pPi && pRadius && pArea)
		*pArea _ (*pPi) * (*pRadius) * (*pRadius);
 }

in. main()
{
	const double pi _ 3.1416;
	c__ __  "Enter radius of circle: ";

	double radius _ 0;
	c__ __ radius;

	double area _ 0;

	CalcArea(&pi, &radius, &area);

	c__ __  "Area is = " __  area __  e..

	system("pause");
	r_ 0;
}