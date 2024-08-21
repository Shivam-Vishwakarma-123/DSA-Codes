#include<iostream>
#include<string.h>
using namespace std;
int getlength(char ch[]){
    int i=0,length=0;
    while(ch[i]!='\0'){
        length++;
        i++;
    }
    return length;
}
int main ()
{
char ch[100];
cin>>ch;
// cout<<ch;
// int value  =(int)ch[6];
// cout<<value;
// cin.getline(ch,100); //To take input of string with space

cout<<"The length of string is "<<getlength(ch);

 return 0;
}