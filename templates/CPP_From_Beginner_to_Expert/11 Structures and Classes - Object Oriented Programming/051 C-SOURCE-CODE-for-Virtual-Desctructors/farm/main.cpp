? |i..
? "farm.h"

u.. s..
/* virtual destructor */
void voiceOfAnimal(Animal *);
void voiceOfAnimal(Animal &);
in. main()
{
/*
    Dog dog;
    Cat cat;
    Cow cow;

    cout << animal.getVoice() << endl;
    cout << dog.getVoice() << endl;
    cout << cat.getVoice() << endl;
    cout << cow.getVoice() << endl;

    voiceOfAnimal(&cow);

*/
    Animal *dog = new Dog;

    delete dog;
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
