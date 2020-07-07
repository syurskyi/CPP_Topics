? *s..
? |i..

u.. s..

// Константный указатель на константные данные,т.е. ничто не может быть изменено
v.. CalcArea(const d..* const pPi, const d..* const pRadius, d..* const pArea)
{
	// проверить указатели перед использованием!
	__ (pPi && pRadius && pArea)
		*pArea _ (*pPi) * (*pRadius) * (*pRadius)
 }

in. main()
{
	const d.. pi _ 3.1416
	c__ __  "Enter radius of circle: "

	d.. radius _ 0
	c__ __ radius

	d.. area _ 0

	CalcArea(&pi, &radius, &area)

	c__ __  "Area is = " __  area __  e..

	sy.. pause
	r_ 0
}