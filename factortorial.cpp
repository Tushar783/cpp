#include<iostream>
using namespace std;
int main()
{
    int i=1, n ,fac=1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(i<n || i==n)
    {
        fac=fac*i;
        i++;
    }
    cout<<"The factorial of "<<n<<" is "<<fac<<endl;
    return 0;
}