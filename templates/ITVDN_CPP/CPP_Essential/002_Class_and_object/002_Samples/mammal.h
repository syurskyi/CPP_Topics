? <string>


typedef unsigned int uint;

n.. Mammal
{
//default: private
p..
    Mammal();
    Mammal(uint paws);
    Mammal(const Mammal&);

    ~Mammal();
    v.. feed_milk();
    uint get_paws()
    {
        return paws;
    }
private:
    uint paws = 4;
    int* ptr;
};


