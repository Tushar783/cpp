#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[]="";
    cout<<"Enter Your Name"<<endl;
    cin.getline(s1,100);
    ///char s2[]="";
    ///strcpy(s2,s1);
    cout<<"Welcome Mr "<<s1<<" to this program"<<endl;


    return 0;
}