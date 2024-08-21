#include<iostream>
using namespace std;
int main ()
{
int arr[5];
// Taking input
for(int i=0;i<5;i++){
    cin>>arr[i];
}
// Printing output 
 cout<<"The input of array is "<<endl;
for(int i=0;i<5;i++){
    
    cout<<arr[i]<<" ";
}
 return 0;
}