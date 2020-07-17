?i.. _I_PRINTABLE_H_
_de.. _I_PRINTABLE_H_
? ios..

n.. I_Printable
{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
p..
    v.. v.. print(std::ostream &os) const = 0;
    v.. ~I_Printable() = default;
};


e.. // _I_PRINTABLE_H_
