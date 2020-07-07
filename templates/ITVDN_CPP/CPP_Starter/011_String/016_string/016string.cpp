#include "stdafx.h"
#include <iostream>
// Эта библиотека нужна для работы с типом string
#include <string>

using namespace std;

int main()
{
	string _str = "Sed ut perspiciatis, unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam eaque ipsa, quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt, explicabo. Nemo enim ipsam voluptatem, quia voluptas sit, aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos, qui ratione voluptatem sequi nesciunt, neque porro quisquam est, qui dolorem ipsum, quia dolor sit, amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt, ut labore et dolore magnam aliquam quaerat voluptatem";

	int symbol_count = 0;

	for (int i = 0; i < _str.size(); i++)
	{
		if (_str[i] == 'o') {
			symbol_count += 1;
		}
	}
	
	cout << "The string has " << symbol_count << " symbols 'O'." << endl;

	system("pause");
	return 0;
}

