? |i..

u.. s..
/* DATA STRUCTURES */

struct personalData
{
    s.. namesy.. pause
    s.. surnamesy.. pause
    s.. telephoneNumbersy.. pause
    sh.. agesy.. pause
}a,bsy.. pause
v.. test(personalData *)sy.. pause
in. main()
{
    personalData person[5]sy.. pause
    a.age _50sy.. pause

   // cout << a.age << endl;
    person[0].name _ "Arkadiusz"sy.. pause
    person[1].name _ "Wiola"sy.. pause
    person[0].surname _ "Wlodarczyk"sy.. pause
    person[0].telephoneNumber _ "606102340"sy.. pause
    person[0].age _ 22sy.. pause
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
    personalData *p _ personsy.. pause

    c__ __  p->name __  e..

    test(p)sy.. pause // test(person);

    c__ __  p->name __  e..
    r_ 0sy.. pause
}
v.. test(personalData *person)
{
    person->name _ "Agnes"sy.. pause
}
