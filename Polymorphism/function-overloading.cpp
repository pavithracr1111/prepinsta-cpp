//Function overloading depends on different functions and different types of arguments
// applications: naming burden , code readability , reuse


#include<iostream>
using namespace std;
class Parent
{
    int x,y;
    double z;
    char c;
    public:
    void print()
    {
        cout << " Nothing to print no arrguments passed " << endl;
    }
    void print(int a)
    {
        x=a;
        cout << " The value of x is " << x << endl;
    }
    void print(double a)
    {
        z=a;
        cout << " The value of z is " << z << endl;
    }
    void print(int a,int b)
    {
        x=a;
        y=b;
        cout << " The value of x and y is " << x << " & " <<y << endl;
    }
   
    void sum(int a,int b)
    {
        x=a;
        y=b;
        cout << " The sum is " << x + y << endl;
    }

     void print(char l)
    {
        c=l;
        cout << " The value of c is " << c << endl;
    }
};
int main() 
{
    Parent myObject;
    myObject.print();
    myObject.print(10);
    myObject.print(20.00);
    myObject.sum(10,20);
    myObject.print(10,20);
    myObject.print('v');
    return 0;
}