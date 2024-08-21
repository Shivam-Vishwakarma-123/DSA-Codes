#include<iostream>
using namespace std;
int x=5;

int main ()
 {   //yha global access hoga
    int x=10;
    ::x=25;
cout<<x<<endl;
//To access global variable 
  cout<<::x<<endl;
 return 0;
}