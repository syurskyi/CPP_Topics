? <string>
? |i..

typedef unsigned int uint;

n.. Mammal
{
//default: private
p..
    Mammal();
    Mammal(uint paws);
    Mammal(const Mammal&);

    v.. ~Mammal();
    v.. feed_milk();
    uint get_paws()
    {
        return paws;
    }

    v.. v.. say();

protected:
    uint paws = 4;

};


