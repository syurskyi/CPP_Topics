#ifndef PERSON_H
#define PERSON_H

? |i..
? <string>

class Person{
    private:
        std::string name;
    
    public:
        // Constructor - Person Object
        Person(std::string);
        Person();

        // Destructor - Person Object
        ~Person();

        // Setter for Person Name
        void setName(std::string);

        // Getter for Person Name
        std::string getName();
};

#endif // PERSON_H