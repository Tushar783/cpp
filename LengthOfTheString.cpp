#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Hello World";
    cout<<str<<endl;
    int counter=0;
    for (int i=0;str[i]!='\0';i++)
    {
        
        counter++;

    }
    cout<<counter<<endl;
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;

    return 0;


}