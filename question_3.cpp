//3. Overload subscript operator [] that will be useful when we want to check for an index\
out of bound.
#include<iostream>
using namespace std;
class Array
{
   int arr[5];
   const int size=5;
   public:
   Array()
    {

    }
    
   int& operator [](int index)
   {
        if(index>=size)
        {
            cout<<"Array Index Out of Bound Exception"<<endl;
            exit(0);
        }
        return arr[index];
   }
};
int main()
{
    Array a;
    int size;
    cout<<"Enter number of elements: ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cin>>a[11];
    cin.get();
    return 0;
}
