#include <iostream>
#include "farm.h"

using namespace std;
/* polymorphism, virtual functions, abstract class */
void voiceOfAnimal(Animal *);
void voiceOfAnimal(Animal &);
int main()
{

    Dog dog;
    Cat cat;
    Cow cow;
/*
    cout << animal.getVoice() << endl;
    cout << dog.getVoice() << endl;
    cout << cat.getVoice() << endl;
    cout << cow.getVoice() << endl;
    */
    voiceOfAnimal(&cow);



    return 0;
}
void voiceOfAnimal(Animal *p)
{
    cout << p->getVoice() << endl;
}
void voiceOfAnimal(Animal &p)
{
    cout << p.getVoice() << endl;
}
