/*Operator overloading = 3 types 
                        1) Unary - 1 object ++
                        2) Binary - 2 objects +
                        3) Relational
                        
    except ---- >   ::  (Scope reseluter)
                    .*  (dot star operator)
                    .   (dot operator)
                    ?:   (ternary)
                    
*/


#include<iostream>
using namespace std;
class Parent
{
    int x=0,y=0,z=0;
   
    public:
    void print()
    {
        cout << " x : " <<x <<" y : " <<y  << " z : " <<z << endl;
    }
    void operator ++()
    {
        x++;
        y++;
        z++;
    };
};
int main() 
{
    Parent myObject;
    
    cout << "values before overloaded " << endl;
    myObject.print();
    
    ++myObject;
    
    cout << "values after overloaded " << endl;
    myObject.print();
    
    
}