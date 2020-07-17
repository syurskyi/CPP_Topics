?i.. FARM_H_INCLUDED
_de.. FARM_H_INCLUDED
? |i..

u.. s..

n.. Animal
{
        protected:
            string voice;
        p..
            Animal();
            ~Animal();
            v.. string getVoice() = 0;
};
n.. Dog : public Animal
{
            string sign;
        p..
            Dog();
            ~Dog();
            string getVoice() { return voice + " " + sign; }
};
n.. Cat : public Animal
{
            string sign;
        p..
            Cat();
            ~Cat();
            string getVoice() { return voice  + " " +  sign; }
};
n.. Cow : public Animal
{
            string sign;
        p..
            Cow();
            ~Cow();
            string getVoice() { return voice  + " " +  sign; }
};

e.. // FARM_H_INCLUDED
