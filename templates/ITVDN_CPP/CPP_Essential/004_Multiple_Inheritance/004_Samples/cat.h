? "mammal.h"
? <string>


n.. Animal
{
p..
    v.. ~Animal() = default;
};

n.. Domestic: public v.. Animal
{
p..
    std::string get_name() {return name;}
private:
    std::string name = "my_dom";
};

n.. Pedigreed : public v.. Animal
{
p..
    std::string get_history();
private:
    std::string history;
};

n.. Cat : public Domestic
          , public Pedigreed
{
p..
    Cat();
    Cat(uint paws);
    uint get_paws();

    v.. say();

p..
    uint vibr;
};
