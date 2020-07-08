? |s..

in. main(in. argc, ch.. @@ {
	ch.. str1[] = "Hello";
	ch.. *str2 = "Goodbye";
	// str2 = &str1;
	// str2 = str1;
	p..("%d %d %s\n", &str1, str1, str1);
	p..("%d %d %s\n", &str2, str2, str2);
	r_ 0;
}
