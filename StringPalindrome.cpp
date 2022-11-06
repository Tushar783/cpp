#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    string rev;
    cout<<"Enter a String\n";
    getline(cin,str);
    
    for(int i=0,j=0 ; str[i]!='\0' ;i++ ,rev[j]!='\0',j++ )
    {
        if (str[i]==rev[j])
        {
            cout<<"It is a Palindrome\n";
        }
        else
        {
            cout<<"It is not a Palindrome\n";
        }
    }


    return 0;
}