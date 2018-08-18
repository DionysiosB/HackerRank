class Person{
    public:
        std::string name;
        int age;
        virtual void getdata() = 0;
        virtual void putdata() = 0;
};

class Professor: public Person {
    public:
        static int count;
        int publications, cur_id;
        void getdata(){cur_id = ++count; std::cin >> name >> age >> publications;}
        void putdata(){std::cout << name << " " << age << " " << publications << " " << cur_id << std::endl;}
};

class Student: public Person {
    public:
        static int count;
        int total, cur_id;
        void getdata(){
            cur_id = ++count;
            std::cin >> name >> age;
            total = 0;
            for(int p = 0; p < 6; p++){int x; std::cin >> x; total += x;}
        }
        void putdata(){
            std::cout << name << " " << age << " " << total << " " << cur_id << std::endl;
        }
};


int Professor::count = 0;
int Student::count = 0;
