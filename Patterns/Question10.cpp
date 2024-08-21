// Hollow diamond 
// As Hollow diamond is complex pattern we have to divide into 2 part
// i.e First hollow full pyramid and second inverted hollow full pyramid 
// 1->hollow full pyramid
#include<iostream>
using namespace std;
int main ()
{//Declaring  input variable named row no 
int n;
// Taking input from user 
cout<<"Enter the row no :\n";
cin>>n;
// Algorithm for hollow full pyaramid 
for(int row=0;row<n;row++)//Outer loop for printing no of row 
{
    // for printing spaces in before character in a particular row 
    for(int col=0;col<(n-row-1);col++){
        cout<<" ";
    }
    // For printing character either space or star 
    for(int col=0;col<(2*row +1);col++){
        if(col==0||col==2*row){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        

    }cout<<endl;
}
// Algorithm for inverted hollow full pyaramid 
 for(int row=0;row<n;row++)//Outer loop for printing no of row 
 {
    // for spaces 
    for(int col=0;col<row;col++){
        cout<<" ";
    }
    // for printing character either stars or spaces 
    for(int col=0;col<2*n-(2*row+1);col++){
if(col==0||col==(2*n-(2*row+2))){
cout<<"*";

}
else {
    cout<<" ";
}
    }
 cout<<endl;}



 return 0;
}