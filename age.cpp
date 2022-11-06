#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age\n";
    cin>>age;
    if( age>0 && age<12)
    {
        cout<<"childhood\n";
    }
    else if( age>=12 && age<=50)
    {
        cout<<"young\n";
    }
    else if( age>50 )
    {
        cout<<"old\n";
    }
    else
    {
        cout<<"not defined\n";
    }
    return 0;
}