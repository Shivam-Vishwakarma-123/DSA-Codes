#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
// House robber problem 




// void robberhouse(vector<int>& nums,int i,int sum,int &maxi){
//      if(i>=nums.size()){
//     maxi =max(maxi,sum);
//              return;
//         }
//     // Include 
       
//       robberhouse(nums,i+2,(sum+=nums[i]),maxi);
    
//       // EXclude 
//     robberhouse(nums,i,sum,maxi);
//       }

//     int rob(vector<int>& nums) {
//         int i=0;
//        int sum=0;
//        int maxi=INT_MIN;
//        robberhouse(nums,i,sum,maxi);

//        return maxi;}
// Vishal code 

    int findMaxAmount(vector<int>& nums,int i=0){
        if(i >= nums.size())
        return 0;
     
        int includeAmt = nums[i] + findMaxAmount(nums,i+2);
        int excludeAmt = findMaxAmount(nums,i+1);
        return max(includeAmt,excludeAmt);
    }


    int rob(vector<int>& nums) {
        int n = nums.size();
        return findMaxAmount(nums);}



int main ()
{vector<int>arr={1,2,3,4};
 cout<<rob(arr);
 return 0;
}