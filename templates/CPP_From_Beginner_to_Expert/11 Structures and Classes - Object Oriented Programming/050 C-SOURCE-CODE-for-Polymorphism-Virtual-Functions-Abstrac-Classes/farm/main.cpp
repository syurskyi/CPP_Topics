? |i..
? "farm.h"

u.. s..
/* polymorphism, virtual functions, abstract class */
void voiceOfAnimal(Animal *);
void voiceOfAnimal(Animal &);
in. main()
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



    r_ 0;
}
void voiceOfAnimal(Animal *p)
{
    c__ __  p->getVoice() __  e..
}
void voiceOfAnimal(Animal &p)
{
    c__ __  p.getVoice() __  e..
}
