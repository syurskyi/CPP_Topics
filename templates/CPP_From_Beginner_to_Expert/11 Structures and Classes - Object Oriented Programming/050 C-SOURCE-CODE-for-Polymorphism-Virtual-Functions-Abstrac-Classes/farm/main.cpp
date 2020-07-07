? |i..
? "farm.h"

u.. s..
/* polymorphism, virtual functions, abstract class */
v.. voiceOfAnimal(Animal *)sy.. pause
v.. voiceOfAnimal(Animal &)sy.. pause
in. main()
{

    Dog dogsy.. pause
    Cat catsy.. pause
    Cow cowsy.. pause
/*
    cout << animal.getVoice() << endl;
    cout << dog.getVoice() << endl;
    cout << cat.getVoice() << endl;
    cout << cow.getVoice() << endl;
    */
    voiceOfAnimal(&cow)sy.. pause



    r_ 0sy.. pause
}
v.. voiceOfAnimal(Animal *p)
{
    c__ __  p->getVoice() __  e..
}
v.. voiceOfAnimal(Animal &p)
{
    c__ __  p.getVoice() __  e..
}
