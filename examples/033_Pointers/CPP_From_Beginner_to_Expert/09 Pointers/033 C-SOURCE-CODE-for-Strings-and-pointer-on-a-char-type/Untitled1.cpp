#include <iostream>

using namespace std;

int main()
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

    cout << text2 << endl;

    char array[] = "here is a text";

    string test = array;

    cout << test << endl;


    const char * a = "this is a test 12512412";

    cout << a[0] << endl;

    char b[] = "this a test 124124";

    b[0] ='g';
    cout << b << endl;

    char * const dynamic_array = new char[50];
    dynamic_array[0] = 'k';
    dynamic_array[1] = '\0';
    //dynamic_array = "lalala";

    cout << dynamic_array << endl;

    delete [] dynamic_array;

    string array_of_string[5] = "this i a text that will be in all of the elements of strings";
    array_of_string[0] = "afsdf";
    cout << array_of_string[0] << endl;
    cout << array_of_string[1] << endl;
    cout << array_of_string[2] << endl;
    return 0;
}
