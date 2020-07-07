// BasicTypes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	#pragma region 
    
	//----------------- 16 bit -----------------
	// “ипу short соответствуют типы short int, signed short, signed short int 
	// ÷елое со знаком
	
	short		a = -32768;
	short int	b = +32767;

    std::cout << "Short Int" << std::endl;
    cout << a << endl << b << endl;
	
	// ÷елое без знака
	
	unsigned short		c = 0;
	unsigned short int	d = 65535;

    std::cout << "Unsigned Short Int" << std::endl;
    cout << c << endl << d << endl;

	//----------------- 32 bit -----------------
	// “ипу int соответствуют типы signed, signed int
	// ÷елое со знаком

	int		e = -2147483648;
	int		f = +2147483647;

    std::cout << "Int" << std::endl;
    cout << e << endl << f << endl;

	// “ипу unsigned соответствуют типы unsigned int, unsigned, unsigned int
	// ÷елое без знака

	unsigned		g = 0;
	unsigned int	h = 4294967295;

    std::cout << "Unsigned Int" << std::endl;
    cout << g << endl << h << endl;

	//----------------- 64 bit -----------------
	// “ипу long long соответствуют типы long int, signed long, signed long int 
	// ÷елое со знаком

	long		i = -9223372036854775808;
	long int	j = +9223372036854775807;
    std::cout << "Long Int" << std::endl;
    cout << i << endl << j << endl;

	// ÷елое без знака
	
	unsigned long		k = 0;
	unsigned long int	l = 18446744073709551615;
    std::cout << "Unsigned Long Int" << std::endl;
    cout << k << endl << l << endl;

	#pragma endregion
	#pragma region

	//----------------- 32 bit ----------------- 

	float m = 1.8E-38f;
	float n = 3.4E+38f;
    std::cout << "Float" << std::endl;
    cout << m << endl << n << endl;

	//----------------- 64 bit -----------------

	double o = 2.2E-308;
	double p = 1.8E+307;
    std::cout << "Double" << std::endl;
    cout << o << endl << p << endl;
	
	#pragma endregion

	#pragma region
	//----------------- 8 bit -----------------

	// Ћогическа¤ величина »стина\Ћожь

	bool s = true;   // 0000 0001
	bool t = false;  // 0000 0000

    std::cout << "Bool" << std::endl;
    cout << s << endl << t << endl;
	
	#pragma endregion
	#pragma region
	//----------------- 16 bit -----------------
	
	char u = 'A';

    std::cout << "Char" << std::endl;
    cout << u << endl;

	#pragma endregion
	#pragma region

	// —трока в формате UNICODE

	string w = "Hello world!";
    std::cout << "String" << std::endl;
    cout << w << endl;

	#pragma endregion


    return 0;
}

