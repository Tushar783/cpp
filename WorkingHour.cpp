#include<iostream>
using namespace std;
int main()
{
    int hour;
    cout<<"Enter working hour\n";
    cin>>hour;
    if(hour>=9 && hour<=18)
    {
        cout<<"Working hour\n";
    }
    else
    {
        cout<<"Leisure time\n";
    }
    return 0;
}