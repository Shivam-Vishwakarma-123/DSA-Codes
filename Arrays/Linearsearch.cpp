#include<iostream>
using namespace std;
// Function to find a particular key 
// Creating array of data type bool 
bool findkey(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]=key){
            return 1;
        }
        else {
            return 0;
        }
    }
}
int main ()
{int arr[] = {1,3,6,4,8};
int d;
cout<<"Enter the key "<<endl;
cin>> d;
// Function call
int a= findkey(arr,5,d);
if(a==1){
    cout<<"Found"<<endl;

}
else
cout<<"The given key is absent \n";

 return 0;
}