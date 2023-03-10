/*2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables. */
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
    void setData(int real,int imag)
    {
       this->real = real;
        this->imag= imag;
    }
    void display()
    {
        cout<<"Real = "<<real<<endl<<"Imaginary = "<<imag<<endl;
    }
};
int main()
{
    Complex c1;
    int r,i;
    cout<<"Enter real part of Complex number: "<<endl;
    cin>>r;
    cout<<"Enter Imaginary part of Complex number: "<<endl;
    cin>>i;
    c1.setData(r,i);
    c1.display();
    cin.get();
    return 0;
}