#include<iostream>
// Flipped solid diamonf 
// The following figure is breaked in 6 parts 
// First section 
// 1.Inverted half pyramid  
// 2.Full pyramid  made with spaces 
// 3.Inverted half pyramid
using namespace std;
int main ()
{int n;
cin>>n;
// Algorithm for Inverted half pyramid  
for(int row=0;row<n;row++)//For printing rows 
{
    // for printing stars in particular row
    for(int col=0;col<n-row;col++){
        cout<<"*";
    }
    // Full pyramid with spaces 
    for(int col=0;col<2*row+1;col++){
        cout<<" ";
    }
    // Inverted half pyramid 
    for(int col=0;col<n-row;col++)
{
    cout<<"*";
}
     cout<<endl;
}

// Second section
for(int row=0;row<n;row++){
// / 4.Half pyramid /
for(int col=0;col<row+1;col++){
    cout<<"*";

}
//5. Inverted full pyramid with spaces 
for(int col=0;col<2*n-(2*row+1);col++){
    cout<<" ";

}
//6. Reflected half pyramid with spaces 
for (int col=0;col<row+1;col++){
    cout<<"*";
}
cout<<endl;
} 


 return 0;

}