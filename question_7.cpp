//7. Create an Integer class and overload logical not operator for that class.
#include<iostream>
using namespace std;
class Integer
{
   int x;
   public:
   Integer()
   {
     x=0;
   }
   Integer(int y)
   {
      x=y;
   }
   bool operator!()
   {
       if(x)
       return false;
       else
       return true;
   }
   void display()
   {
    cout<<x<<endl;
   }
};
int main()
{
    Integer i1(19),i2;
    i2 = !i1;
    i2.display();
    i1.display();
    cin.get();
    return 0;
}