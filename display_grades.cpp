#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3;
    cout<<"Enter your maths marks"<<endl;
    cin>>m1;
    cout<<"Enter your physics marks"<<endl;
    cin>>m2;
    cout<<"Enter your chemistry marks"<<endl;
    cin>>m3;
    float avg;
    avg=(m1+m2+m3)/3.0;
    if(avg>=60)
    {
        cout<<"The overall marks are "<<avg<<endl;
        cout<<"you got A grade"<<endl;
    }
    else if(avg<60 && avg >=30)
    {
        cout<<"The overall marks are "<<avg<<endl;
        cout<<"you got B grade"<<endl;
    }
    else
    {
       cout<<"The overall marks are "<<avg<<endl;
       cout<<"you got C grade"<<endl;  
    }

}