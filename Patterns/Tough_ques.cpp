#include<iostream>
using namespace std;
int main ()
{int n;
cin>>n;
// Algo for Tough question
for(int row=0;row<n;row++){
    int k=1;
    // For row=0||row=n-1;
for(int col=0;col<2*row+1;col++){
    if(row==0||row==(n-1)){
        
        if(col%2==0){
            cout<<k;
k++;
        }else{
            cout<<" ";
        }
    }
    else{
        if(col==0||col==2*row){
            cout<<(col/2)+1;
        }
        else{
            cout<<" ";
        }
    }
}cout<<endl;
}
 return 0;
}