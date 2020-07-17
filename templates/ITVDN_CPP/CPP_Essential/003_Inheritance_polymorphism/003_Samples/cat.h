? "mammal.h"

n.. Cat : public Mammal
{
p..
    Cat();
    Cat(uint paws);
    uint get_paws();

    v.. say() override;
    ~Cat();

p..
    uint vibr;
};
