? |i..

u.. s..
/* DATA STRUCTURES */

struct personalData
{
    s.. name;
    s.. surname;
    s.. telephoneNumber;
    sh.. age;
}a,b;
v.. test(personalData *);
in. main()
{
    personalData person[5];
    a.age _50;

   // cout << a.age << endl;
    person[0].name _ "Arkadiusz";
    person[1].name _ "Wiola";
    person[0].surname _ "Wlodarczyk";
    person[0].telephoneNumber _ "606102340";
    person[0].age _ 22;
/*
    cout << person[0].name << endl;
    cout << person[0].surname << endl;
    cout << person[0].telephoneNumber << endl;
    cout << person[0].age << endl;
*/
/*
    cout << (*person).name << endl;
    cout << (*&person[0]).name << endl;
    cout << (person+1)->name << endl;
*/
    personalData *p _ person;

    c__ __  p->name __  e..

    test(p); // test(person);

    c__ __  p->name __  e..
    r_ 0;
}
v.. test(personalData *person)
{
    person->name _ "Agnes";
}
