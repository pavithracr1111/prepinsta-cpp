#include<iostream>
#include<string.h>
using namespace std;
class AddString
{
    public:
    char string1[20],string2[20];
    
    void operator+()
    {
        cout << "After concatination : " << strcat(string1,string2);
        
    }
};
int main() 
{
    AddString object;
    strcat(object.string1,"Prep");
    strcat(object.string2,"Insta");
    
    +object;
    
    return 0;
}