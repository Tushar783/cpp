#include<iostream>
using namespace std;
int main()
{
    int a[50],i,n,item;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;
    cout<<"Enter the value of an element "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element whose location you have to fine "<<endl;
    cin>>item;
    for(i=0;i<=n;i++)
    {
        if(a[i]==item)
        {
            cout<<i<<endl;
        }
        if(i==n)
        {
            cout<<"Element not found in array "<<endl;
        }
    }
    return 0;
} 