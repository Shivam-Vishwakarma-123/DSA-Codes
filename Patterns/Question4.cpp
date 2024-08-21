#include<iostream>
using namespace std;
int main ()
{ int n;
cout<<"Enter height of the pyramid \n";
cin>>n;
for(int row=0;row<n;row++){
    for(int l=0;l<row+1;l++){
        cout<<" * ";
    } cout<<endl;
}
 return 0;
}