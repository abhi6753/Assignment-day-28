/*1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/
#include<iostream>
using namespace std;
class Complex
{
  int real,imag;
  public:
  Complex()
  {
    real=imag=0;
  }
  Complex(int a,int b)
  {
    real =a;
    imag = b;
  }
  friend ostream& operator<<(ostream &,Complex);
  friend istream& operator>>(istream &,Complex &);
};
istream&  operator>>(istream &in,Complex &c)
{
    cin>>c.real>>c.imag;
    return in;
}
ostream & operator<<(ostream &out,Complex c)
{
    cout<<c.real<<" + "<<c.imag<<"i"<<endl;
    return out;
}
int main()
{
    Complex c1,c2;
    cout<<"Enter Cmplex number:"<<endl;
    cin>>c1>>c2;
    cout<<c1<<c2;
    cin.get();
    return 0;
}