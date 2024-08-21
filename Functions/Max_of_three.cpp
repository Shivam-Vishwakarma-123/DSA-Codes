#include<iostream>
using namespace std;
int max(int a,int b,int c){
    if(a>b&&a>c){
        return a;
    }
    if(b>c&&b>c){
        return b;
    }
    else{
        return c;
    }
}
int main ()
{ int a,b,c;
cout<<"Enter the value of a  b c "<<endl;
cin>>a>>b>>c;
cout<<"MAx of three number is "<<max(a,b,c)<<endl;
 return 0;
}