#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;

    }
int main ()
{
int arr[7]={10,12,13,14,15,16,78};//reversing an array 
int start=0;
int end=6;


    while(start<=end){
    /* code */
    swap(arr[start],arr[end]);
    
start++;
    end--;
}
printarray(arr,7);

 return 0;
}