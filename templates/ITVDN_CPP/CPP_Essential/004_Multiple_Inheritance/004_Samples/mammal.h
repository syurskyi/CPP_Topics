? <string>
? |i..

typedef unsigned int uint;

class Mammal
{
//default: private
public:
    Mammal();
    Mammal(uint paws);
    Mammal(const Mammal&);

    virtual ~Mammal();
    v.. feed_milk();
    uint get_paws()
    {
        return paws;
    }

    virtual v.. say();

protected:
    uint paws = 4;

};


