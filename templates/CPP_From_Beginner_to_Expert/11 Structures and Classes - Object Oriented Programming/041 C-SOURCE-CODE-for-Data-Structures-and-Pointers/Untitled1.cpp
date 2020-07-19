? |i..

u.. s..
/* DATA STRUCTURES */

st.. personalData
{
    s.. namesy.. p..
    s.. surnamesy.. p..
    s.. telephoneNumbersy.. p..
    sh.. agesy.. p..
}a,bsy.. p..
v.. test(personalData *)sy.. p..
in. main()
{
    personalData person[5]sy.. p..
    a.age _50sy.. p..

   // cout << a.age << endl;
    person[0].name _ "Arkadiusz"sy.. p..
    person[1].name _ "Wiola"sy.. p..
    person[0].surname _ "Wlodarczyk"sy.. p..
    person[0].telephoneNumber _ "606102340"sy.. p..
    person[0].age _ 22sy.. p..
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
    personalData *p _ personsy.. p..

    c__ __  p__name __  e..

    test(p)sy.. p.. // test(person);

    c__ __  p__name __  e..
    r_ 0sy.. p..
}
v.. test(personalData *person)
{
    person__name _ "Agnes"sy.. p..
}
