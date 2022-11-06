#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a Sentence\n";
    getline(cin,str);
    int vovel=0, consonent=0 ,word=1;
    for(int i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' )
        {
            vovel+=1;
        }
        else if(str[i]==' ')
        {
            word+=1;
        }
        else
        {
            consonent+=1;
        }
    }
    cout<<"The number of Vovel/s are "<<vovel<<endl;
    cout<<"The number of words are "<<word<<endl;
    cout<<"The number of Consonent are "<<consonent<<endl;

    return 0;
//write a program if you have more than one space

}
