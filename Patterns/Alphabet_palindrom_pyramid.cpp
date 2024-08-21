#include<iostream>
using namespace std;
int main ()
{
// Basic concept 
// Numeric pyamid 
int n;
cin>>n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<col+1;
//     }
//     cout<<endl;
// }
// My approch 
for(int row =0;row<n;row++){
    // For printing half pyramid with alphabet 
    // creating a alphabet variable 
    char c='A';
    for(int col=0;col<row+1;col++){
        
        {cout<<c;
        c++;}
        
    }
    c--;
    
    // For printing reverse character to form palindrome 
    for(int col=0;col<row;col++){
         c--;
        cout<<c;
       
    }
    cout<<endl;
}
 return 0;
}