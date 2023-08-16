#include<iostream>
#include<string.h>
using namespace std;
class AddString
{
    public:
    char string1[20],string2[20];
    
    void operator +()
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
// PrepInsta


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