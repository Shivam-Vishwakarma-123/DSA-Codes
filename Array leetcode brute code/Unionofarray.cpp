#include<iostream>
#include<limits>
#include<vector>
using namespace std;
int main ()
{

// Union of array 

int arr[]={1,3,4,5,6};
int brr[]={5,6,8,9,10};
vector<int>ans((sizeof(arr)+sizeof(brr))/sizeof(int));
// Combining the two given array 
for(int i=0;i<(sizeof(arr)+sizeof(brr))/sizeof(int);i++){
    if(i<sizeof(arr)/sizeof(int)){
        ans[i]=arr[i];
        cout<<"arr["<<i<<"] = "<<ans[i]<<endl;
        // arr[i]=INT_MIN;
    }
    else {
        ans[i]=brr[i-sizeof(arr)/sizeof(int)];
cout<<"arr["<<i<<"] = "<<ans[i]<<endl;
    }
// I am printing final array 

}

 return 0;
}