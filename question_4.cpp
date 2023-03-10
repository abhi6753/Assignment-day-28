/*4. Create a student class and overload new and delete operators as a member function
of the class.*/
#include<iostream>
using namespace std;
class Student
{
    int roll,marks;
    public:
    Student()
    {
        roll =marks=0;
    }
    void operator new()
    {
        
    }
};