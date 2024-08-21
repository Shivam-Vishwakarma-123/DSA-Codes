
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;


class Solution {
public:
   int solve(vector<int>& coins, int amount){
    if(amount==0){
        return 0;
    }
    if(amount<0){
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans=solve(coins,amount-coins[i]);
        if(ans!=INT_MAX){
            mini= min(mini,ans+1);
        }
    }
    return mini;
   }
   
   int topBottom(vector<int>& coins, int amount,vector<int>&dp){
    if(amount==0){
        return 0;
    }
    if(amount<0){
        return INT_MAX;
    }
    if(dp[amount]!=-1){
        return dp[amount];
    }
    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans=topBottom(coins,amount-coins[i],dp);
        if(ans!=INT_MAX){
            mini= min(mini,ans+1);
        }
    }
    dp[amount]=mini;
    return dp[amount];
   }

   int solvetab(vector<int>& coins, int amount){
    // step 1 create dp array
    vector<int>dp(amount+1,INT_MAX);
    // step 2 base case dekho
    dp[0]=0;
    // step 3 check range and flow of top down apporoch and code accordingly 
    // 1 se amount tak jayenge 
    for(int target=1;target<=amount ;target++){
        int mini=INT_MAX;
        // sare coins ko use karenge 
        for(int i=0;i<coins.size();i++){
            //check for valid index
            if(target-coins[i]>=0)
        {   int ans=dp[target-coins[i]];
           if(ans!=INT_MAX){
            mini= min(mini,ans+1);
          }
          }
          
   
       }
      
     dp[target]=mini;

    }
     for(int i=0;i<dp.size();i++){
        cout<<i<<"->"<<dp[i]<<endl;
       }
       cout<<endl;
     return dp[amount];


   }
    int coinChange(vector<int>& coins, int amount) {
        // int ans= solve(coins,amount);
        vector<int>dp(amount+1,-1);
        // int ans=topBottom(coins,amount,dp);
        // if(ans==INT_MAX){
        //     return -1;
        // }
        // else{
        //     return ans;
        // }
        int ans=solvetab(coins,amount);
        if(ans==INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
    }
};
int main(){
    Solution ans;
    vector<int>coins{1,2,5};
    int amount =11;
    vector<int>dp(amount+1,0);
    cout<<ans.solvetab(coins,amount);
    return 0;
}