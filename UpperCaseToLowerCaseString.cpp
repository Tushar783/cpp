#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="WELCOME";
    cout<<str<<endl;
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]=str[i]+32;
    }
    cout<<str<<endl;
    return 0;
}
//if the condition is that not every word is upper case than you can use if statement so that the word already in lower case should not change

