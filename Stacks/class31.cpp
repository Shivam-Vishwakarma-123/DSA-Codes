#include<iostream>
#include<vector>
#include<stack>
#include<limits.h>
using namespace std;
// +++++++++++++Longest valid parenthesis  ++++++++++++++
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
              st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                
                }
                else{
                   int  length=i-st.top();
                   ans=max(ans,length);
                }
            }
        }
        return ans;
    }
};

vector<int> prevsmaller(vector<int>arr){
    stack<int>st;
    st.push(-1);
    int n=arr.size();
    vector<int>ans(n);
    for(int i=0;i<n;i++){
      while(st.top()!=-1 && arr[st.top()]>=arr[i]){
        st.pop();
      }
      ans[i]=st.top();
   
      st.push(i);
    }
    return ans;
    
}
vector<int> nextsmaller(vector<int>arr){
    stack<int>st;
    st.push(-1);
    int n=arr.size();
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
      while(st.top()!=-1 && arr[st.top()]>=arr[i]){
        st.pop();
      }
      if(st.top()==-1)
      ans[i]=6;
      else{
        ans[i]=st.top();
      }
   
      st.push(i);
    }
    return ans;
    
}
int maxareaofHistogram(vector<int>heights){
    vector<int>prev=prevsmaller(heights);
    vector<int>nextsmall=nextsmaller(heights);
    int maxarea=INT_MIN;
    for(int i=0;i<heights.size();i++){
        int area=heights[i]*(nextsmall[i]-prev[i]-1);
        maxarea=max(maxarea,area);
    }
    return maxarea;
}
int main ()
{ vector<int>arr{2,1,5,6,2,3};
vector<int>ans=nextsmaller(arr);
// for(int i=0;i<ans.size();i++){
// //     cout<<ans[i]<<" ";
// // }
cout<<maxareaofHistogram(arr);

 return 0;
}