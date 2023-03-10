/*11. Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function.*/
#include <iostream>
using namespace std;
class Marks
{
  int marks;

public:
  Marks(int m)
  {
    marks = m;
  }
  void display()
  {
    cout << marks << endl;
  }
  Marks* operator ->()
  {
    return this;
  }
};
int main()
{
  Marks m1(10);
  m1.display();
  m1->display();
  cin.get();
  return 0;
}