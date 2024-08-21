#include<iostream>
using namespace std;
// Numeric pyramid 
int main ()
{ //Declaring row num varaible 
int n;
// Taking input from user 
cout<<"Enter row no \n";
cin>>n;
// Algorithm 
for(int row=0;row<n;row++){ //Outer loop for printing no of row 
    for(int col=0;col<row+1;col++){ //Inner loop for printing numeric in a particular loop
 cout <<" "<<col+1<<" "; //logic of printing numeric 

    } cout<<endl;

}
 return 0;
}