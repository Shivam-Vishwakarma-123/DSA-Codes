
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

class Solution {
public:

  int fibonacci(int n){
    if(n==0||n==1){
        return n;
    }
    int ans=fibonacci(n-1)+fibonacci(n-2);
    return ans ;
  }
  int topdown(int n ,vector<int>&dp){
     if(n==0||n==1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
     dp[n]=topdown(n-1,dp)+topdown(n-2,dp);
    return dp[n] ;
  }
  int bottomup(int n ){
    // create dp array 
    // analyse base condition 
    // find loop condtion 
    if(n==0){
        return 0;

    }
    if(n==1){
        return 1;
    }
    // yani n>=2 hoga 
    
    vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        // top down me n jese travel kar raha uska ulta yha karega 
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
           cout<< dp[i]<<endl;

        }
        
        return dp[n];
    
  }
    int SpaceOpt(int n ){
    // create dp array 
    // analyse base condition 
    // find loop condtion 
    int prev1=1;
    int prev0=0;
    if(n==0){
        return prev0;

    }
    if(n==1){
        return prev1;
    }
    // yani n>=2 hoga 
    
   
      int curr=0;
        // top down me n jese travel kar raha uska ulta yha karega 
        for(int i=2;i<=n;i++){
          curr=prev0+prev1;
          prev0=prev1;
          prev1=curr;

        }
        
        return curr;
    
  }
    int fib(int n) {
    //   create dp array
    // vector<int>dp(n+1,-1);
        // int ans=fibonacci( n);
        // return ans;
        // int ans=topdown( n,dp);
        // return ans;
        return SpaceOpt( n );
    }
};
int main ()
{
 Solution ans;
 cout<<ans.bottomup(5);
 return 0;
}