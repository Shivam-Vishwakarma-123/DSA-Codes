#include<iostream>
using namespace std;

#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int solveusingrecursion(int n, int k){
             if(n==1){
           
            return  k;
            
             
        }
        if(n==2){
            
            return k*k;
        }
        int  ans= (solveusingrecursion(n-2,k)+solveusingrecursion(n-1,k))*(k-1);
        return ans;
    }
    int solveusingmemo(int n,int k,vector<int  >&dp){
        
              if(n==1){
           
            return  k;
            
             
        }
        if(n==2){
            
            return k*k;
        }
        if(dp[n]!=0){
            return dp[n];
        }
        dp[n]= (solveusingmemo(n-2,k,dp)+solveusingmemo(n-1,k,dp))*(k-1);
        return dp[n];
    }
    
      int  solveusingtab(int n, int k){
         vector<int >dp(n+1,0);
         dp[1]=k;
         dp[2]=(k+k*(k-1));
         for(int i=3;i<=n;i++){
           dp[i]= (dp[i-2]+dp[i-1])*(k-1);
      
         }
           return dp[n];  
    }
    int  solveSpaceOptimize(int n, int k){
        
         int prev2=k;
         int prev1=(k+k*(k-1));
         int curr=0;
         for(int i=3;i<=n;i++){
            curr= (prev2+prev1)*(k-1);
           prev2=prev1;
           prev1=curr;
      
         }
           return curr;  
    }
    int countWays(int n, int k){
        // code here
        vector<int>dp(n+1,0);
      
      
        return solveSpaceOptimize(n,k);
    }
};

//{ Driver Code Starts.

int main()
{
	
	Solution ans;
    cout<<ans.countWays(4,3);
}
// } Driver Code Ends
