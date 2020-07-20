? |i..
? "farm.h"

u.. s..
/* polymorphism, virtual functions, abstract class */
v.. voiceOfAnimal(Animal *)
v.. voiceOfAnimal(Animal &)
in. main()
{

    Dog dogsy.. p..
    Cat catsy.. p..
    Cow cowsy.. p..
/*
    cout << animal.getVoice() << endl;
    cout << dog.getVoice() << endl;
    cout << cat.getVoice() << endl;
    cout << cow.getVoice() << endl;
    */
    voiceOfAnimal(&cow)



    r_ 0sy.. p..
}
v.. voiceOfAnimal(Animal *p)
{
    c__ __  p__getVoice() __  e..
}
v.. voiceOfAnimal(Animal &p)
{
    c__ __  p.getVoice() __  e..
}
