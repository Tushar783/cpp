#include<iostream>
using namespace std;
int main()
{
 int A[10];
 cout<<"Enter the value of array"<<endl;
 int j;
 for (j=0;j++;j<10)
 {
    cin>>A[j];
 }
 int key;
 cout<<"enter the value you want to find"<<endl;
 cin>>key;
 for (int i=0;i++;i<10)
 {
  if(key==A[i])
  {
    cout<<key<<" is the number"<<endl;
  }
  else
  {
    cout<<"Element is not found"<<endl;
  }
 }


 return 0;
}