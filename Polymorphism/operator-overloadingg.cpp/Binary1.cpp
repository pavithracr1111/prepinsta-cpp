#include<iostream>
using namespace std;

class Complex
{
    int real,imag;
    public:
    
    
    void getData()
    {
        cin >> real >> imag ;
    }
    
    Complex operator +(Complex tempObject)
    {
          Complex tempResult;
          tempResult.real = real +tempObject.real;
          tempResult.imag = imag +tempObject.imag;
          return tempResult;
    } 
    
    void display()
    {
        if(imag<0)
        
            cout << real <<" - "<< imag << " j "<< endl;
        else
        
            cout << real <<" +  "<< imag << " j "<< endl;
    }
        
};

int main()
{
    Complex p1,p2,result;
    p1.getData();
    p2.getData();
    
    result = p1 + p2;
    
    result.display();
    

    return 0;
}