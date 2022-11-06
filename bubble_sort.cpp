#include<iostream>
using namespace std;
int array[10];
int main()
{int n;
cout<<"enter the number of elements";
cin>>n;
cout<<"Enter elements";
for(int i=1;i<=n;i++)
{
    cin>>array[i];
}
for(int k=1;k<=n-1;k++)
{
    int ptr =1;
    while(ptr<=(n-k))
    {
        if (array[ptr]>array[ptr+1])
        {
            int t;
            t= array[ptr];
            array[ptr]=array[ptr+1];
            array[ptr+1]=t;
        }
        ptr=ptr+1;
    }
}
cout<<"array after sorting is \n";
for(int i=1;i<=n;i++)
{
    cout<<array[i]<<"\n";
}
 return 0;
}