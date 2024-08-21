// My method of solving which is giving me output 

#include<iostream>
using namespace std;
int main ()
{
// Declaring input   variable named row no 
int n;
// Taking variable input from user 
cout<<"Enter the row number \n";
cin>>n;
// Algorithm for full pyramid 
for(int row=0;row<n;row++){
    // for printing no of space in particular row 
    for(int col=0;col<(n-1-row);col++){
        cout<<"  ";

    }
    // For printing  no of star in a particular row 
    for(int col=0;col<row+1;col++){
        cout<<" *  " ;//We have to add one extra space after each star to get required pattern 
    } 

    // For next line 
   cout<<endl;
}


 return 0;
}