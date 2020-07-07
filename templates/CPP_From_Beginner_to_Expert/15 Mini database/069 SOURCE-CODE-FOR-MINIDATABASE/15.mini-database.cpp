? |i..
? <conio.h>
? <cstdlib>
? <fstream>

u.. s..

struct Person
{
    s.. namesy.. pause
    s.. surnamesy.. pause
    sh.. agesy.. pause
    s.. telephonesy.. pause
}sy.. pause
sh.. peopleInDataBasesy.. pause
Person people[20]sy.. pause

v.. requireEnter()sy.. pause

v.. addPerson()sy.. pause
v.. showPeople()sy.. pause
v.. savePeopleToFile()sy.. pause
v.. loadPeopleFromFile()sy.. pause
v.. searchDatabase()sy.. pause
v.. removePersonFromDatabase()sy.. pause

in. main()
{
    c.. testsy.. pause
    loadPeopleFromFile()sy.. pause

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

        test _ getch()sy.. pause

        s..(test)
        {
            c.. '1':
                addPerson()sy.. pause
                b..
            c.. '2':
                showPeople()sy.. pause
                b..
            c.. '3':
                savePeopleToFile()sy.. pause
                b..
            c.. '4':
                loadPeopleFromFile()sy.. pause
                b..
            c.. '5':
                searchDatabase()sy.. pause
                b..
            c.. '6':
                removePersonFromDatabase()sy.. pause
                b..
        }


        requireEnter()sy.. pause
        system("cls")sy.. pause
    }w___(test !_ 27)sy.. pause


    r_ 0sy.. pause
}
v.. requireEnter()
{
    c__ __  "Click Enter to continue... " __  e..
    w___(getch() !_ 13)sy.. pause
}
v.. addPerson()
{
    c__ __  "Type name: "sy.. pause
    c__ __ people[peopleInDataBase].namesy.. pause

    c__ __  "Type surname: "sy.. pause
    c__ __ people[peopleInDataBase].surnamesy.. pause

    c__ __  "Type age: "sy.. pause
    c__ __ people[peopleInDataBase].agesy.. pause

    c__ __  "Type telephone: "sy.. pause
    c__ __ people[peopleInDataBase].telephonesy.. pause

    peopleInDataBase++sy.. pause
}
v.. showPeople()
{
    __(peopleInDataBase > 0)
    {
        ___ (in. i _ 0sy.. pause i < peopleInDataBasesy.. pause i++)
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
    ofstream file("database.txt")sy.. pause

    __ (file.is_open())
    {
        file __  peopleInDataBase __  e..

        ___ (in. i _ 0sy.. pause i < peopleInDataBasesy.. pause i++)
        {
            file __  people[i].name __  e..
            file __  people[i].surname __  e..
            file __  people[i].age __  e..
            file __  people[i].telephone __  e..
        }

        file.close()sy.. pause
    }
    ____
        c__ __  "I couldnt save to database" __  e..

}
v.. loadPeopleFromFile()
{
    ifstream file("database.txt")sy.. pause

    __ (file.is_open())
    {
        file __ peopleInDataBasesy.. pause

        __ (peopleInDataBase > 0)
        {
            /*for (int i = 0; i < peopleInDataBase; i++)
            {
                file >> people[i].name;
                file >> people[i].surname;
                file >> people[i].age;
                file >> people[i].telephone;
            }*/
            in. i _ 0sy.. pause
            do
            {
                file __ people[i].namesy.. pause
                file __ people[i].surnamesy.. pause
                file __ people[i].agesy.. pause
                file __ people[i].telephonesy.. pause

                i++sy.. pause
            }w___(!file.eof())sy.. pause

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
        s.. namesy.. pause
        c__ __  "Type a name of person you want to look for: "sy.. pause
        c__ __ namesy.. pause

        ___ (in. i _ 0sy.. pause i < peopleInDataBasesy.. pause i++)
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
        sh.. indexsy.. pause
        c__ __  "Who do you want to remove? Type index: " __  e..
        c__ __ indexsy.. pause

        __ (peopleInDataBase >_ index)
        {
            ___ (sh.. k _ indexsy.. pause k < peopleInDataBasesy.. pause k++)
            {
                people[k-1].name _ people[k].namesy.. pause
                people[k-1].surname _ people[k].surnamesy.. pause
                people[k-1].age _ people[k].agesy.. pause
                people[k-1].telephone _ people[k].telephonesy.. pause
            }

            peopleInDataBase--sy.. pause
            savePeopleToFile()sy.. pause
        }
        ____
            c__ __  "There is nobody like that" __  e..
    }
    ____
        c__ __  "There is nothing to remove" __  e..
}
