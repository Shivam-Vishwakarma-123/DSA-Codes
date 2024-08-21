#include<iostream>
using namespace std;
// Creating a function for reversing an array 
void reversearray(int arr[],int size){
    for(int i=0;i<(size/2)+1;i++){
       
       if (i<=size-1-i)
       {
       int a=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=a;

       }
    }
}
void printarray(int arr[],int size){
    for (int i = 0; i < size ; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}

int main ()
{
int arr[]={1,3,4,5,6};
// reverse an array 
reversearray(arr,5);
printarray(arr,5);
 return 0;
}
