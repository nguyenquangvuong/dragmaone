#include "ps.cpp"

using namespace std;

class Student : public Person 
{
    private:
        double gpa;

    public:
        Student(string name, int age, string address, string sex, double gpa) : Person(name, age, address, sex) 
        {
            this->gpa = gpa;
        }

        double getGpa() 
        {
            return gpa;
        }

        void setGpa(double gpa) 
        {
            this->gpa = gpa;
        }

        void display() 
        {
            Person::display(); //secondhand from ps class
            cout << "GPA: " << gpa << endl;
        }
};