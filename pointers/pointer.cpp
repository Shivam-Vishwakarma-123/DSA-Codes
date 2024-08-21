#include<iostream>
using namespace std;
int main ()
{
// int a=5;
// int *ptr=&a;
// cout<<a<<endl;
// // cout<<ptr<<endl;
// // // ***************Accesing the value stored at the location in pointer************* 

// // cout<<*ptr<<endl;



// //************NULLPOINTER DECLARTION********** 
// int *p=0;

// cout<<p<<endl;
// // ************modern  way**************
// int *q=nullptr;
// *************pointer copy********** 
int a=10;
int *p=&a;
int *q=p;
int *r=q;

cout<<a<<endl; //value at a
cout<<&a<<endl;  //address of a
cout<<p<<endl;   //address of a
cout<<*p<<endl;  //value at a
cout<<&p<<endl;   //address of p
cout<<q<<endl;     //address of a
cout<<*q<<endl;    //value at a
cout<<&q<<endl;    //address of q
cout<<&r<<endl;       //address of r
cout<<r<<endl;        //address of a
cout<<*r<<endl;        //value at a


cout<<*p+*q+*r<<endl;
 return 0;
}