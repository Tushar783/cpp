#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,r1,r2;
    cout<<"enter the coffecients of equation"<<endl;
    cin>>a>>b>>c;
    if(((b*b)-(4*a*c))>=0)
    {
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"the first root is "<<r1<<endl;
    cout<<"the second root is "<<r2<<endl;
    }
    else
    {
        cout<<"no roots"<<endl;
    }
    return 0;
    

}