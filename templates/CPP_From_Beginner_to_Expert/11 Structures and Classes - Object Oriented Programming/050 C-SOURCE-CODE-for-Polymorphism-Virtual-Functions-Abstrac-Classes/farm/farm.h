?i.. FARM_H_INCLUDED
_de.. FARM_H_INCLUDED
? |i..

u.. s..

n.. Animal
{
        pr..
            st.. voice;
        p..
            Animal();
            ~Animal();
            v.. st.. getVoice() = 0;
};
n.. Dog : pu.. Animal
{
            st.. sign;
        p..
            Dog();
            ~Dog();
            st.. getVoice() { ?  voice + " " + sign; }
};
n.. Cat : pu.. Animal
{
            st.. sign;
        p..
            Cat();
            ~Cat();
            st.. getVoice() { ?  voice  + " " +  sign; }
};
n.. Cow : pu.. Animal
{
            st.. sign;
        p..
            Cow();
            ~Cow();
            st.. getVoice() { ?  voice  + " " +  sign; }
};

e.. // FARM_H_INCLUDED
