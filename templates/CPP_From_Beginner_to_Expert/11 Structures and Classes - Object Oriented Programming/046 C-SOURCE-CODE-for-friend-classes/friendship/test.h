#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
class B;

class A
{
        int secondtmnp;
    public:
        void setSecretValue(B &, int);
};
class B
{
        friend class A;
        int secretValue;
    public:
        int getSecretValue() { return secretValue; }
};

#endif // TEST_H_INCLUDED
