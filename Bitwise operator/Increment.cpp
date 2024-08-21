#include<iostream>
using namespace std;
int main ()
{
// Pre increment 
// Phele increment karo phir use kario 
int a=1;
cout<<++a<<" The value of a is "<<a<<endl;
// Out is 1 and a=1;

// Post increment 
// phele use karo phir increment karo
cout<<a++<<" The value of a is "<<a<<endl;
// Out is 2 and a=3;
// Exercise
cout<<(++a)*(++a)<<endl;

// Out is 25

cout<<(a++)*(a++)<<endl; cout<<a;
// output 30
// 7

 return 0;
}