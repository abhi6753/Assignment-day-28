/*8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.
*/
#include <iostream>
using namespace std;
class Coordinate
{
    int x, y, z;

public:
    Coordinate()
    {
    }
    Coordinate(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    Coordinate operator ,(Coordinate c4)
    {
       Coordinate temp;
       temp.x = c4.z;
       temp.y= c4.y;
       temp.z = c4.x;
       return temp;
    }
    void Display()
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
};
int main()
{
    Coordinate c1(10, 20, 30), c2(1, 2, 3), c3;
    c3 =(c1, c2);
    c3.Display();
    cin.get();
    return 0;
}