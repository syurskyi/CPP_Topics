#ifndef TEST_H_INCLUDED
_de.. TEST_H_INCLUDED
class B;

class A
{
        int secondtmnp;
    public:
        v.. setSecretValue(B &, int);
};
class B
{
        friend class A;
        int secretValue;
    public:
        int getSecretValue() { return secretValue; }
};

#endif // TEST_H_INCLUDED
