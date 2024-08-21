#include<iostream>
using namespace std;
int main ()
{
int arr1[7];
// cout<<arr<<endl;
// cout<<&arr<<endl;
// cout<<"Array started successfully"<<endl; 
int arr[]={1,2,3,4,5};
int br[5]={1,2,3,4,5};
// int crr[2]={1,2,3,4,5}; //Error 

//Accesing element of array 
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";

}
// Taking input in array 
int a[10];
for(int i=0;i<10;i++){
    cin>>a[i];

}
for(int i=0;i<10;i++){
    cout<<a[i]<<" ";

}
 return 0;
}

