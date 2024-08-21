
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;


class Solution {
public:
int solusingrecurstion(vector<int>& nums,int n){
    // base case 
    if(n<0){
     return 0;
    }
    if(n==0){
        return nums[0];}
        int include=solusingrecurstion(nums,n-2)+nums[n];
        int exclude=solusingrecurstion(nums,n-1)+0;
        int ans=max(include,exclude);
        return ans;
    
}
int solusingMem(vector<int>& nums,int n,vector<int>& dp){
    // base case 
    if(n<0){
     return 0;
    }
    if(n==0){
        return nums[0];}
        if(dp[n]!=-1){
            return dp[n];
        }
        int include=solusingMem(nums,n-2,dp)+nums[n];
        int exclude=solusingMem(nums,n-1,dp)+0;
         dp[n]=max(include,exclude);
        return dp[n];
    
}
int solveusingtabular(vector<int>& nums,int n){
    vector<int>dp(n+1,0);
    dp[0]=nums[0];
    // vha hum n se 0 ja rhe yha hum 0 se n jayenge
    for(int i=1;i<=n;i++){
        // yha bhaiya ne correctionj kiya he 
        // i=1 se start hua aur hum acces kar rhe i-2
        // int include=0;
        // next correction 
      int temp=0;
        if(i-2>=0)
            temp=dp[i-2];
       {  int include=temp+nums[i];
         int exclude=dp[i-1];
         dp[i]=max(include,exclude);
}
    }
    return dp[n];
}
int SpaceOp(vector<int>& nums,int n){
   int prev2=0;
   int prev1=nums[0];
   int curr=0; 
    // vha hum n se 0 ja rhe yha hum 0 se n jayenge
    for(int i=1;i<=n;i++){
        // yha bhaiya ne correctionj kiya he 
        // i=1 se start hua aur hum acces kar rhe i-2
        // int include=0;
        // next correction
        int temp=0;
       
    if(i-2>=0)
     temp=prev2;
          
       
         int include=temp+nums[i];
         int exclude=prev1+0;
         curr=max(include,exclude);
         prev2=prev1;
         prev1=curr;
         
    }
    return prev1;
}
    int rob(vector<int>& nums) {
        // return solusingrecurstion(nums,nums.size()-1);
        // solving using topdown
        // /step 1
        int n=nums.size()-1;
        // // vector<int>dp(n+1,-1);
        // return solusingMem(nums,n,dp);
        return SpaceOp(nums,n);
    }

};