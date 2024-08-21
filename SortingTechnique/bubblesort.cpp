#include<iostream>
#include<vector>
using namespace std;
int main ()
{    vector<int>arr{1,10,4,8,5,7};
    // Bubble  sort 
    for(int round=0;round<arr.size();round++){
        int swapcount=0;
        // for  shifting ith largest elemnet to its right 
         for(int j=0;j<arr.size()-1-round;j++){
            if(arr[j]>arr[j+1]){
                // swap 
                swap(arr[j],arr[j+1]);
                swapcount++;

                
            }
         }
         if(swapcount==0){
            break;
         }
        
    }
    // printing array
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}