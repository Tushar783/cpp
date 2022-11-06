#include<iostream>
using namespace std;
int main()
{

 int i ,j ,k , n=10;
 for(i=0;i<n;i++)
 {
  for(j=n-i;j>0;j--)
  {
    cout<<" ";
  }

  for(k=0;k<(2*i)+1;k++)
  {
    cout<<"*";
  }
  cout<<endl;
 }
    

 return 0;
}