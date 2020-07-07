? |i..
? <conio.h>
? <cstdlib>
? <fstream>

u.. s..

struct Person
{
    s.. name;
    s.. surname;
    sh.. age;
    s.. telephone;
};
sh.. peopleInDataBase;
Person people[20];

v.. requireEnter();

v.. addPerson();
v.. showPeople();
v.. savePeopleToFile();
v.. loadPeopleFromFile();
v.. searchDatabase();
v.. removePersonFromDatabase();

in. main()
{
    c.. test;
    loadPeopleFromFile();

    do
    {
        c__ __  "Number of People in Database: " __  peopleInDataBase __  e..
        c__ __  "MENU: " __  e..

        c__ __  "1. Add Person" __  e..
        c__ __  "2. Show All People" __  e..
        c__ __  "3. Save People to File" __  e..
        c__ __  "4. Load People from File" __  e..
        c__ __  "5. Search for a Person" __  e..
        c__ __  "6. Remove Person from DataBase" __  e..

        c__ __  e..

        test _ getch();

        s..(test)
        {
            c.. '1':
                addPerson();
                b..
            c.. '2':
                showPeople();
                b..
            c.. '3':
                savePeopleToFile();
                b..
            c.. '4':
                loadPeopleFromFile();
                b..
            c.. '5':
                searchDatabase();
                b..
            c.. '6':
                removePersonFromDatabase();
                b..
        }


        requireEnter();
        system("cls");
    }w___(test !_ 27);


    r_ 0;
}
v.. requireEnter()
{
    c__ __  "Click Enter to continue... " __  e..
    w___(getch() !_ 13);
}
v.. addPerson()
{
    c__ __  "Type name: ";
    c__ __ people[peopleInDataBase].name;

    c__ __  "Type surname: ";
    c__ __ people[peopleInDataBase].surname;

    c__ __  "Type age: ";
    c__ __ people[peopleInDataBase].age;

    c__ __  "Type telephone: ";
    c__ __ people[peopleInDataBase].telephone;

    peopleInDataBase++;
}
v.. showPeople()
{
    __(peopleInDataBase > 0)
    {
        ___ (in. i _ 0; i < peopleInDataBase; i++)
        {
            c__ __  "Person index: " __  (i+1) __  e..
            c__ __  "Name: " __  people[i].name __  e..
            c__ __  "Surname: " __  people[i].surname __  e..
            c__ __  "Age: " __  people[i].age __  e..
            c__ __  "Telephone: " __  people[i].telephone __  endl __  e..
        }
    }
    ____
        c__ __  "There is nobody in database."  __  e..
}
v.. savePeopleToFile()
{
    ofstream file("database.txt");

    __ (file.is_open())
    {
        file __  peopleInDataBase __  e..

        ___ (in. i _ 0; i < peopleInDataBase; i++)
        {
            file __  people[i].name __  e..
            file __  people[i].surname __  e..
            file __  people[i].age __  e..
            file __  people[i].telephone __  e..
        }

        file.close();
    }
    ____
        c__ __  "I couldnt save to database" __  e..

}
v.. loadPeopleFromFile()
{
    ifstream file("database.txt");

    __ (file.is_open())
    {
        file __ peopleInDataBase;

        __ (peopleInDataBase > 0)
        {
            /*for (int i = 0; i < peopleInDataBase; i++)
            {
                file >> people[i].name;
                file >> people[i].surname;
                file >> people[i].age;
                file >> people[i].telephone;
            }*/
            in. i _ 0;
            do
            {
                file __ people[i].name;
                file __ people[i].surname;
                file __ people[i].age;
                file __ people[i].telephone;

                i++;
            }w___(!file.eof());

            c__ __  "People has been loaded properly. " __  e..
        }
        ____
            c__ __  "Databse is Empty" __  e..
    }
    ____
        c__ __  "The file database.txt doesnt exist" __  e..
}
v.. searchDatabase()
{
    __ (peopleInDataBase > 0)
    {
        s.. name;
        c__ __  "Type a name of person you want to look for: ";
        c__ __ name;

        ___ (in. i _ 0; i < peopleInDataBase; i++)
        {
            __ (name __ people[i].name)
            {
                c__ __  "Person index: " __  (i+1) __  e..
                c__ __  "Name: " __  people[i].name __  e..
                c__ __  "Surname: " __  people[i].surname __  e..
                c__ __  "Age: " __  people[i].age __  e..
                c__ __  "Telephone: " __  people[i].telephone __  endl __  e..
            }
        }
    }
    ____
        c__ __  "There is nobody in database what do you want to look for??!" __  e..


}
v.. removePersonFromDatabase()
{
    __ (peopleInDataBase > 0)
    {
        sh.. index;
        c__ __  "Who do you want to remove? Type index: " __  e..
        c__ __ index;

        __ (peopleInDataBase >_ index)
        {
            ___ (sh.. k _ index; k < peopleInDataBase; k++)
            {
                people[k-1].name _ people[k].name;
                people[k-1].surname _ people[k].surname;
                people[k-1].age _ people[k].age;
                people[k-1].telephone _ people[k].telephone;
            }

            peopleInDataBase--;
            savePeopleToFile();
        }
        ____
            c__ __  "There is nobody like that" __  e..
    }
    ____
        c__ __  "There is nothing to remove" __  e..
}
