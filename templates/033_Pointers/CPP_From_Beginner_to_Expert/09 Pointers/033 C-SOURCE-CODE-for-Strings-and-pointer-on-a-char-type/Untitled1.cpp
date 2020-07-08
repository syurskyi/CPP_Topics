? |i..

u.. s..

in. main()
{
    string text = "this a test"; // t r a l a \0

/*
    for (int i = 0; i < text.length(); i++)
    {
        cout << text[i] << endl;
    }
*/
  /*  char ch = text[0];

   // cout << ch << endl;

    char characters[] = "123asdfasdfasdf4";

    cout << characters[0] << endl;
    cout << *(characters) << endl;

    cout << characters[1] << endl;
    cout << *(characters+1) << endl;

    char *p = characters;

    cout << p[0] << endl;
    cout << *(p) << endl;

    cout << p[1] << endl;
    cout << *(p+1) << endl;
*/
    const char * text2 = text.c_str();

    c.. __ text2 __ e..

    char array[] = "here is a text";

    string test = array;

    c.. __ test __ e..


    const char * a = "this is a test 12512412";

    c.. __ a[0] __ e..

    char b[] = "this a test 124124";

    b[0] ='g';
    c.. __ b __ e..

    char * const dynamic_array = new char[50];
    dynamic_array[0] = 'k';
    dynamic_array[1] = '\0';
    //dynamic_array = "lalala";

    c.. __ dynamic_array __ e..

    delete [] dynamic_array;

    string array_of_string[5] = "this i a text that will be in all of the elements of strings";
    array_of_string[0] = "afsdf";
    c.. __ array_of_string[0] __ e..
    c.. __ array_of_string[1] __ e..
    c.. __ array_of_string[2] __ e..
    r_ _
}
