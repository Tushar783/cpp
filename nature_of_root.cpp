#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r1,r2,a,b,c,d;
    cout<<"enter coefficient of quadratic equation"<<endl;
    cin>>a>>b>>c;
    d=b*b-4*a*c;

    if(d==0)
    {
        cout<<"The value of discriminant is "<<d<<endl;
        cout<<"The roots are real and equal"<<endl;
        cout<<"the roots of equation are "<<-b/a<<" and "<<-b/a<<endl;
    }
    else if(d>0)
    {
        cout<<"The value of discriminant is "<<d<<endl;
        cout<<"The roots are real and distinct"<<endl; 
        cout<<"the roots of equation are "<<((-b-sqrt(d))/(2*a))<<" and "<<((-b+sqrt(d))/(2*a))<<endl;
    }
    else 
    {
        cout<<"The value of discriminant is "<<d<<endl;
        cout<<"The roots are imaginary"<<endl;
        cout<<"there are no real roots"<<endl;
    }
    return 0;

}