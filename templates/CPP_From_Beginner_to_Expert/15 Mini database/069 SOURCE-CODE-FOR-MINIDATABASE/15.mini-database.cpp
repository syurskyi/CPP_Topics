? |i..
? <conio.h>
? <cstdlib>
? <fstream>

u.. s..

struct Person
{
    string name;
    string surname;
    sh.. age;
    string telephone;
};
sh.. peopleInDataBase;
Person people[20];

void requireEnter();

void addPerson();
void showPeople();
void savePeopleToFile();
void loadPeopleFromFile();
void searchDatabase();
void removePersonFromDatabase();

in. main()
{
    char test;
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

        test = getch();

        switch(test)
        {
            case '1':
                addPerson();
                break;
            case '2':
                showPeople();
                break;
            case '3':
                savePeopleToFile();
                break;
            case '4':
                loadPeopleFromFile();
                break;
            case '5':
                searchDatabase();
                break;
            case '6':
                removePersonFromDatabase();
                break;
        }


        requireEnter();
        system("cls");
    }while(test != 27);


    r_ 0;
}
void requireEnter()
{
    c__ __  "Click Enter to continue... " __  e..
    while(getch() != 13);
}
void addPerson()
{
    c__ __  "Type name: ";
    c__ >> people[peopleInDataBase].name;

    c__ __  "Type surname: ";
    c__ >> people[peopleInDataBase].surname;

    c__ __  "Type age: ";
    c__ >> people[peopleInDataBase].age;

    c__ __  "Type telephone: ";
    c__ >> people[peopleInDataBase].telephone;

    peopleInDataBase++;
}
void showPeople()
{
    __(peopleInDataBase > 0)
    {
        for (in. i = 0; i < peopleInDataBase; i++)
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
void savePeopleToFile()
{
    ofstream file("database.txt");

    __ (file.is_open())
    {
        file __  peopleInDataBase __  e..

        for (in. i = 0; i < peopleInDataBase; i++)
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
void loadPeopleFromFile()
{
    ifstream file("database.txt");

    __ (file.is_open())
    {
        file >> peopleInDataBase;

        __ (peopleInDataBase > 0)
        {
            /*for (int i = 0; i < peopleInDataBase; i++)
            {
                file >> people[i].name;
                file >> people[i].surname;
                file >> people[i].age;
                file >> people[i].telephone;
            }*/
            in. i = 0;
            do
            {
                file >> people[i].name;
                file >> people[i].surname;
                file >> people[i].age;
                file >> people[i].telephone;

                i++;
            }while(!file.eof());

            c__ __  "People has been loaded properly. " __  e..
        }
        ____
            c__ __  "Databse is Empty" __  e..
    }
    ____
        c__ __  "The file database.txt doesnt exist" __  e..
}
void searchDatabase()
{
    __ (peopleInDataBase > 0)
    {
        string name;
        c__ __  "Type a name of person you want to look for: ";
        c__ >> name;

        for (in. i = 0; i < peopleInDataBase; i++)
        {
            __ (name == people[i].name)
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
void removePersonFromDatabase()
{
    __ (peopleInDataBase > 0)
    {
        sh.. index;
        c__ __  "Who do you want to remove? Type index: " __  e..
        c__ >> index;

        __ (peopleInDataBase >= index)
        {
            for (sh.. k = index; k < peopleInDataBase; k++)
            {
                people[k-1].name = people[k].name;
                people[k-1].surname = people[k].surname;
                people[k-1].age = people[k].age;
                people[k-1].telephone = people[k].telephone;
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
