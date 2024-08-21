#include<iostream>
using namespace std;
// Making count variable 
void Count(int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<endl;
    }
}
int main ()

{int n;//Intialisng varaible n;
// Taking input
cout<<"Enter the no up to which you want to count "<<endl;
cin>>n;
// function call
Count(n);

 return 0;
}