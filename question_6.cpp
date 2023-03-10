//6. Create a complex class and overload assignment operator for that class.
#include<iostream>
using namespace std;
class Complex
{
   int real,imag;
   public:
    Complex()
    {
        real= imag=0;
    }
    void setData()
    {
        cout<<"Enter real parts: "<<endl;
        cin>>real;
        cout<<"Enter Imaginary parts: "<<endl;
        cin>>imag;
    }
    void display()
    {
        cout<<"Real = "<<real<<" Imaginary = "<<imag<<endl;
    }
    Complex operator =(Complex x)
    {
       real = x.real;
       imag = x.imag;
       return x;// we can also return *this
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData();
    c2=c1;
    c2.display();
    c3=c1=c2;
    c3.display();
    cin.get();
    return 0;
}