#include<iostream>
#include<limits.h>
using namespace std;
void inputarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

}
int maxi(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main ()
{
int arr[10];
int n;
cout<<"Enter no of input "<<endl;cin>>n;
inputarray(arr,n);
cout<<"The max no is "<<maxi(arr,n)<<endl;




 return 0;
}
// Same for finding min no a array 