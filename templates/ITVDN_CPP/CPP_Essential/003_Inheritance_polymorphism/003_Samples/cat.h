? "mammal.h"

class Cat : public Mammal
{
public:
    Cat();
    Cat(uint paws);
    uint get_paws();

    v.. say() override;
    ~Cat();

public:
    uint vibr;
};
