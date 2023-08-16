// pre-increment



#include<iostream>
using namespace std;

class Complex
{
    int real,imag;

    public:
    void print()
    {
        if(imag<0)
        
            cout << real <<" - "<< imag << " j "<< endl;
        else
        
            cout << real <<" +  "<< imag << " j "<< endl;
    }
    void getData()
    {
        cin >> real >> imag ;
    }   
     void operator ++()
    {
        real= ++real;
        imag= ++imag;

    }
    
};

int main()
{
    Complex p1;
    p1.getData();       // input 0 , 0

    cout << " Before " << endl;     //before    o, o
    p1.print();

    ++p1;           // pre-increment
    
    cout << " After " << endl;      // after 1 , 1
    p1.print();

    return 0;
}




/* post-increment


#include<iostream>
using namespace std;

class Complex
{
    int real,imag;
    public:
    void print()
    {
        if(imag<0)
        
            cout << real <<" - "<< imag << " j "<< endl;
        else
        
            cout << real <<" + "<< imag << " j "<< endl;
    }
        void getData() 
        {
            cin >> real >> imag ;
        }
             void operator ++(int)      //dumy parameter******
             {
                real++;
                imag++;

             }
    
};

int main()
{
    Complex p1;
    p1.getData();

    cout << " Before " << endl;
    p1.print();

    p1++;
    
    cout << " After " << endl;
    p1.print();

    return 0;
}

*/