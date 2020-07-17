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
            v.. ~Animal();
            v.. string getVoice() = 0;
};
n.. Dog : pu.. Animal
{
            string sign;
        p..
            Dog();
            ~Dog();
            string getVoice() { return voice + " " + sign; }
};
n.. Cat : pu.. Animal
{
            string sign;
        p..
            Cat();
            ~Cat();
            string getVoice() { return voice  + " " +  sign; }
};
n.. Cow : pu.. Animal
{
            string sign;
        p..
            Cow();
            ~Cow();
            string getVoice() { return voice  + " " +  sign; }
};

e.. // FARM_H_INCLUDED
