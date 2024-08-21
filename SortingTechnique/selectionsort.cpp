#include<iostream>
#include<vector>
using namespace std;
int main ()
{    vector<int>arr{1,22,34,1,2,12,39};
    // Selection sort 
    for(int i=0;i<arr.size()-1;i++){
        int minindex=i;
        // for comparision with each next element to get min index
         for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[minindex]){
                // update min index
                minindex=j;
            }
         }
         swap(arr[i],arr[minindex]);
    }
    // printing array
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}