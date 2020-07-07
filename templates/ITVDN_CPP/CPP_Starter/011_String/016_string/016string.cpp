? *s..
? |i..
// Эта библиотека нужна для работы с типом string
? <string>

u.. s..

in. main()
{
	string _str = "Sed ut perspiciatis, unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam eaque ipsa, quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt, explicabo. Nemo enim ipsam voluptatem, quia voluptas sit, aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos, qui ratione voluptatem sequi nesciunt, neque porro quisquam est, qui dolorem ipsum, quia dolor sit, amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt, ut labore et dolore magnam aliquam quaerat voluptatem";

	in. symbol_count = 0;

	for (in. i = 0; i < _str.size(); i++)
	{
		__ (_str[i] == 'o') {
			symbol_count += 1;
		}
	}
	
	c__ __  "The string has " __  symbol_count __  " symbols 'O'." __  e..

	system("pause");
	r_ 0;
}

