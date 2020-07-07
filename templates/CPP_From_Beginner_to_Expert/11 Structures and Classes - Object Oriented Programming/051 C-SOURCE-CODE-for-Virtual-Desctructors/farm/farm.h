#ifndef FARM_H_INCLUDED
#define FARM_H_INCLUDED
? |i..

u.. s..

class Animal
{
        protected:
            string voice;
        public:
            Animal();
            virtual ~Animal();
            virtual string getVoice() = 0;
};
class Dog : public Animal
{
            string sign;
        public:
            Dog();
            ~Dog();
            string getVoice() { return voice + " " + sign; }
};
class Cat : public Animal
{
            string sign;
        public:
            Cat();
            ~Cat();
            string getVoice() { return voice  + " " +  sign; }
};
class Cow : public Animal
{
            string sign;
        public:
            Cow();
            ~Cow();
            string getVoice() { return voice  + " " +  sign; }
};

#endif // FARM_H_INCLUDED
