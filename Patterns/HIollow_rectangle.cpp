#include<iostream>
using namespace std;
int main ()
{int n;
cin>>n;
for(int row=0;row<n;row++){
    // for column 
    for(int col=0;col<n;col++){
        // For row 1 and last row 
        if (row==0||row==n-1){
     cout<<"*";
        }
        else{
            if(col==0||col==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    } cout<<endl;
}
 return 0;
}