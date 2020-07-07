? *s..
? |i..
? <string>

u.. s..

string Compare(in., in.);

in. main()
{
	in. value1 = 15, value2 = 15;
	string result;

	result = Compare(value1, value2);

	c__ __  result __  e..

	system("pause");
	r_ 0;
}

string Compare(in. val1, in. val2)
{
	string result = "";

	if (val1 < val2)
	{
		result = "Comparison Less Then";
	}
	else if (val1 > val2)
	{
		result = "Comparison Greater Then";
	}
	else
	{
		result = "Comparison Equal";
	}

	r_ result;
}