? "mammal.h"
? str..


n.. Animal
{
p..
    v.. ~Animal() = de..
};

n.. Domestic: pu.. v.. Animal
{
p..
    st. string get_name() {return name;}
pr..
    st. string name = "my_dom";
};

n.. Pedigreed : pu.. v.. Animal
{
p..
    st. string get_history();
pr..
    st. string history;
};

n.. Cat : pu.. Domestic
          , pu.. Pedigreed
{
p..
    Cat();
    Cat(uint paws);
    uint get_paws();

    v.. say();

p..
    uint vibr;
};
