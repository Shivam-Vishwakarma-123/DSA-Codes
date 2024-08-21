#include<iostream>
using namespace std;
int main (){
// Declaring row varaible 
int n;
// Taking row input 
cout<<"Enter no of row "<<endl;
cin>>n;
// Algorithm
for(int row=0;row<n;row++) //Loop for printing rows 

{ for(int col=0;col<n-row;col++)// Inner loop for printing no of star in a particular row 
{
    cout<<" * ";
}
cout<<endl; //For next line 
}
 return 0;
}