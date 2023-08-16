#include<iostream>
using namespace std;
class Demo
{
    public:
    int i;
    float f;

    Demo(int val, float val2)  
    {
        i=val;
        f=val2;
    }
};

int main()
{
    Demo demo(1000,20.3);        // Parameterised constructor
    Demo demo2(2000,5.2);

    cout << demo.i << "&" << demo.f <<endl;
    cout << demo2.i << "&" << demo2.f <<endl;
}




/*By using Parameterised 

#include<iostream>
#include<string.h>
using namespace std;
class AddString
{
    
    char string1[20],string2[20];
    public:
    
    void operator+()
    {
        cout << "After concatination : " << strcat(string1,string2);
        
    }
    AddString(char* str1,char* str2)
    {
        strcpy(string1,str1);
        strcpy(string2,str2);
    }
};
int main() 
{
    
    char str1[]= "Prep";
    char str2[]="Insta";
    
    AddString object(str1,str2);
    
    
    +object;
    
    return 0;
}


*/