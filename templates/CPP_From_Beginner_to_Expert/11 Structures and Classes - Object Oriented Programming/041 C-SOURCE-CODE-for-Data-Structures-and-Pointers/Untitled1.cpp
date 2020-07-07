? |i..

u.. s..
/* DATA STRUCTURES */

struct personalData
{
    string name;
    string surname;
    string telephoneNumber;
    sh.. age;
}a,b;
void test(personalData *);
in. main()
{
    personalData person[5];
    a.age =50;

   // cout << a.age << endl;
    person[0].name = "Arkadiusz";
    person[1].name = "Wiola";
    person[0].surname = "Wlodarczyk";
    person[0].telephoneNumber = "606102340";
    person[0].age = 22;
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
    personalData *p = person;

    c__ __  p->name __  e..

    test(p); // test(person);

    c__ __  p->name __  e..
    r_ 0;
}
void test(personalData *person)
{
    person->name = "Agnes";
}
