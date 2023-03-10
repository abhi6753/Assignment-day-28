/*10. Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.
*/
#include<iostream>
using namespace std;
class Distance
{
    int feet,inches;
    public:
    Distance()
    {

    }
    Distance(int x,int y)
    {
        feet =x;
        inches =y;
    }
    void operator()(int a,int b,int c )
    {
        feet=a+c+5;
        inches =a+b+15;
    }
    void Display()
    {
        cout<<"Feet = "<<feet<<endl;
        cout<<"Inches = "<<inches<<endl<<endl;
    }
};
int main()
{
   Distance d1;
   Distance d2(10,15);
   Distance d3;
   d3(10,20,30);
   d1.Display();
   d2.Display();
   d3.Display();
   cin.get();
   return 0;
}