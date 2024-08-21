#include<iostream>
// Butterfly pattern 
using namespace std;
int main ()
{ int n;
cin>>n;
for(int row=0;row<n;row++){ //Outer loop represent no of rows 

      //For printing half pyramid 
    {for(int col=0;col<row+1;col++)
    cout<<"*";
    } 
    // For printing inverted half pyramid 
    for(int col=0;col<2*n-(2*row+1);col++){
 cout<<" ";
    }
    {for(int col=0;col<row+1;col++)
    cout<<"*";
    }

    
    cout<<endl;


    }
    // part 2 lower part 

for(int row=0;row<n;row++)//Outer loop represent no of rows 
{ 
// For printing inverted half pyarmid 
for(int col=0;col<n-row;col++){
    cout<<"*";
} 


// For printing full pyramid with spaces 
for(int col=0;col<2*row+1;col++)
{cout<<" ";
}
// For p[rinting flipped half pyramid 
for(int col=0;col<n-row;col++){
    cout<<"*";
}

cout<<endl; } return 0;
}