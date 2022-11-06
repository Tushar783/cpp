#include<iostream>
using namespace std;
int main()
{
    int A[5]={5,6,4,10,2};
    int *p=A;
    int *q=&A[3];
    cout<<*p<<endl;
    cout<<*q<<endl;
    cout<<p+2<<endl;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<&q-&p<<endl;
    return 0;
}