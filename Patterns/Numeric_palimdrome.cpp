#include<iostream>
// Numeric palindrome 
using namespace std;
int main ()
{int n;
cin>>n;
// Outer loop represent rows 
for(int row=0;row<n;row++){
    // Algorithm for numeric palimdrome 
    //  spaces 
    for(int col=0;col<n-row-1;col++){
        cout<<" ";
    }
    //   For numeric counting 
        {int start=row+1;
        for(int col=0;col<row+1;col++){
        
            cout<<start;
            start++;
        }}
   
    // for reverse counting 
    int a=2*row;
    for(int col=0;col<row;col++){
        cout<<a;
        a--;
    } cout<<endl;
}

 return 0;
}