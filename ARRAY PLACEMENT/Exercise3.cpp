#include<iostream>
using namespace std;
int main ()
{
int arr[7]={1,2,3,4,5,6,7}; //Odd array 
for(int i=0;i<7;i++){
if(i<(6-i)){
    cout<<" "<<arr[i]<<" "<<arr[6-i];
}
else if(i==(6-i)){
    cout<<" "<<arr[i];
    i=i+1;
}
 }
 cout<<endl;
 int brr[8]={1,2,3,4,5,6,7,8}; //Even  array 
for(int i=0;i<8;i++){
if(i<(7-i)){
    cout<<" "<<brr[i]<<" "<<brr[7-i];
}
else if(i==(7-i)){
    cout<<" "<<brr[i];
    
}
 }

 return 0;
}