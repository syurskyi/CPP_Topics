?i.. FARM_H_INCLUDED
_de.. FARM_H_INCLUDED
? |i..

u.. s..

n.. Animal
{
        pr..
            string voice;
        p..
            Animal();
            ~Animal();
            v.. string getVoice() = 0;
};
n.. Dog : pu.. Animal
{
            string sign;
        p..
            Dog();
            ~Dog();
            string getVoice() { ?  voice + " " + sign; }
};
n.. Cat : pu.. Animal
{
            string sign;
        p..
            Cat();
            ~Cat();
            string getVoice() { ?  voice  + " " +  sign; }
};
n.. Cow : pu.. Animal
{
            string sign;
        p..
            Cow();
            ~Cow();
            string getVoice() { ?  voice  + " " +  sign; }
};

e.. // FARM_H_INCLUDED
