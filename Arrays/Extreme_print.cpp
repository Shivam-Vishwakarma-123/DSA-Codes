#include<iostream>
using namespace std;
// Creating function to print extreme point 
void  extremeprint(int arr[],int size){
    // print extreme point 
    for(int i=0;i<((size)/2)+1;i++){
        cout<<arr[i]<<" ";
        if(arr[i]<arr[(size-1)-i]){
            cout<<arr[size -1-i]<<" ";
        }
    }

}

int main ()
{
int arr[]={1,2,3,4,5,6,7};
// Calling function 
extremeprint(arr,7);
 return 0;
}