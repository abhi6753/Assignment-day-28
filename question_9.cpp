/*9. Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.
*/
#include<iostream>
using namespace std;
class Integer
{
  int x;
  public:
  Integer()
  {
    cout<<"DC called"<<endl;
  };
  Integer(int y) // parameterized constructor
  {
    cout<<"PC called "<<endl;
    x =y;
  }
  void Display()
  {
    cout<<"Display() called"<<endl;
    cout<<x<<endl;
  }
  void setData(int x)
  {
    this->x =x;
  }
  operator int()
  {
    cout<<"Int() called"<<endl;
    return x;
  }
};
int main()
{
  Integer i1;
  int y ;
  cout<<"Enter number:"<<endl;
  cin>>y;
  i1.setData(y);
  i1.Display();
  int x = (int )i1;
  cout<<"X ="<<x<<endl;
  return 0;
}