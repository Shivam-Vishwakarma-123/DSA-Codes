#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        arr[i]=arr[i]+5;
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;

    }
    void inc(int arr[],int size){
        for (int i = 0; i < size; i++)
    {
        arr[i]=arr[i]+10
;

    }
    printarray(arr,size);
    }
int main ()

{
int a[5]={1,2,3,4,5};
inc(a,5);
printarray(a,5);
cout<<endl;
printarray(a,5);
// This proves that in arr it is always pass by refrence 
 cout<<(sizeof(a)/sizeof(int))<<endl;
 return 0;

}