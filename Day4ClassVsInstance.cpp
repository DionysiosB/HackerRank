class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        age = (initialAge >= 0) ? initialAge : 0;
        if(initialAge < 0){std::cout << "Age is not valid, setting age to 0." << std::endl;}
    }

    void Person::amIOld(){
        if(age < 13){std::cout << "You are young." << std::endl;}
        else if(13 <= age && age < 18){std::cout << "You are a teenager." << std::endl;}
        else{std::cout << "You are old." << std::endl;}

    }

    void Person::yearPasses(){++age;}
