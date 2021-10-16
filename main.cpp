// gcc main.cpp ps.cpp st.cpp tc.cpp -o run -lstdc++

#include "st.cpp"
#include "ps.cpp"
#include "tc.cpp"
#include <iostream>

using namespace std;

int main() 
{
    //Person("Vuong", 15, "Giao Huong", "Male");
    Student::Person student;

    student.display();

    printf("\nOk-----------\n");
	return 0;
}