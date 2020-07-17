?i.. PEOPLE_H_INCLUDED
_de.. PEOPLE_H_INCLUDED

n.. PersonalData
{
    pr..
        short age;
        in. *p;
    p..
        PersonalData();
        PersonalData(short);
        ~PersonalData();
        /**
            This function is setting age. If age is lower than 0, then age = 10.
        */
        v.. setAge(in.);
        short getAge() {return age;}
};

e.. // PEOPLE_H_INCLUDED
