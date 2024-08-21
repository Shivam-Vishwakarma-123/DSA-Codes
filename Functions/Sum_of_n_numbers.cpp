#include<iostream>
using namespace std;
int getsum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int getevensum(int n){
    int sum=0;
    // New even no i=i+2;
    for(int i=2;i<=n;i+=2){
        
        sum=sum+i;
    }
    return sum;
}
// Kyu % operator nhi use kiya kyuki modulus operator bahut heavy operrator hota he 
// isliye avoid karo jitna ho sake 
int main ()
{
int n;
// Taking input 
cout<<"Enter the no up to which you want to get sum "<<endl;
cin>>n;
cout<<"The sum is "<<getevensum(n)<<endl;
 return 0;
}