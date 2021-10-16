//#pragma once //method1
#ifndef _PERSON_CPP//method2
#define _PERSON_CPP//

    #include<iostream>
    using namespace std;

    class Person
    {
        private:
            string name;
            int age;
            string address;
            string sex;

        public:
            Person(string name, int age, string address, string sex)
            {
                this->name = name;
                this->age = age;
                this->address = address;
                this->sex=sex;
            }

            string getName()
            {
                return name;
            }

            void setName(string name)
            {
                this->name = name;
            }

            int getAge()
            {
                return age;
            }

            void setAge(int age)
            {
                this->age = age;
            }

            string getAddress()
            {
                return address;
            }

            void setAddress(string address)
            {
                this->address = address;
            }

            string getSex()
            {
                return sex;
            }
            void setSex(string sex)
            {
                this->sex=sex;
            }

            void display()
            {
                cout << "Name: " << name << endl;
                cout << "Age: " << age << endl;
                cout << "Address: " << address << endl;
                cout << "Sex: " <<sex<<endl;
            }
    };
#endif