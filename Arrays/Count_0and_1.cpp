#include<iostream>
using namespace std;
int main ()
{
int arr[10]={1,0,1,0,1,0,1,1,1,1};
// Linear search
int one=0,zero=0;
for(int i=0;i<10;i++){
    // For one 
    if(arr[i]==1){
        one++
;    }
// For zero
else if(arr[i]==0){
    zero++;
}
}
cout<<"The no of zeroes are "<<zero<<endl<<"The no of one are "<<one<<endl;

 return 0;
}