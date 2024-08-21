// Construction of full pyramid 
#include<iostream>
using namespace std;
int main ()
{
// Declaring input variable named row no
int n;
// Taking input from user 
cout<<"Enter row no \n";
cin>>n;
// Algorithm for inverted full pyramid 
for(int row=0;row<n;row++)//Outer loop for printing rows 
{      for(int i=0;i<row;i++){cout<<" ";
        
    }
    // for printing no of stars in a particular row
    for(int col=0;col<n-row;col++){
        cout<<" *";
    }
   
    cout<<endl;
}

 return 0;
}