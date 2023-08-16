#include<iostream>
#include<string.h>
using namespace std;
class Parent
{
    public:
    char string[20];
    Parent operator +(Parent p2){
        Parent tempobj;
        strcat(string,p2.string);
        strcpy(tempobj.string,string);
        return tempobj;
    }
    void display()
    {
        cout << string << endl;
    }
};
int main()
{
    Parent p1,p2,result;
    
    char tempstr[20]="Prep";
    char tempstr2[20]="Insta";
    strcpy(p1.string,tempstr);
    strcpy(p2.string,tempstr2);
    
    result = p1+p2;
    
    result.display();
}