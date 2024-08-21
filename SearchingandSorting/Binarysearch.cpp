#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid =(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target ){
            end=mid-1;
        }
        else if (arr[mid]<target){
            start=mid+1;
            mid =(start+end)/2;
        }
    
    }
    return -1;
}
int main ()
{
    int arr[]={2,4,7,10,15,19,21};
int indexoftarget=binarysearch(arr,7,20);
if(indexoftarget==-1){
    cout<<"Target not found";
}
else {
cout<<"Target found at index "<<indexoftarget<<endl;
}

 return 0;
}