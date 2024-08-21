#include<iostream>
using namespace std;
int main ()
{
    // My way of solving Nhi hua solve 
// for(int row=0;row<3;row++){
//     for(int col=0;col<5;col++){
//         if(row==0||row==2){
//             cout<<" * ";

//         } else if((row>0&&row<2)&&(col==0||col==4)){
//             cout<<" * ";
//         }
       
//     } cout<<endl;

for(int row=0;row<3;row++){
    // Printing star in first and last row 
    if(row==0||row==2){
        for(int col=0;col<5;col++)
        {cout<< " * ";}
    }
     else {                       
        // printing first star 
        cout<<" * ";
    //     // Printing three spaces 
    //     for(int col=0;col<3;col++){
    //         cout<<"   ";
    //     }
    //     // Printing last star 
        cout<<endl;
     }
    }

 return 0;}
