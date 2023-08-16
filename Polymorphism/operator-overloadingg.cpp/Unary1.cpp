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
        x++;    //1
        y++;       //1
        z++;            //1
    };
};
int main() 
{
    Parent myObject;
    
    cout << "values before overloaded " << endl;        // 0 0 0
    myObject.print();
    
    ++myObject;                 // pre-increment
    
    cout << "values after overloaded " << endl;         // 1 1 1
    myObject.print();
    
    
}

                  
  