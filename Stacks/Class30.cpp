#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> prevsmaller(vector<int>arr){
    stack<int>st;
    st.push(-1);
    int n=arr.size();
    vector<int>ans(n);
    for(int i=0;i<n;i++){
      while(st.top()>=arr[i]){
        st.pop();
      }
      ans[i]=st.top();
     
      st.push(arr[i]);
    }
    return ans;
    
}
vector<int> nextsmaller(vector<int>arr){
    stack<int>st;
    st.push(-1);
    int n=arr.size();
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
      while(st.top()>=arr[i]){
        st.pop();
      }
      ans[i]=st.top();
   
      st.push(arr[i]);
    }
    return ans;
    
}
int main ()
{ vector<int>arr{2,1,4,3};
vector<int>ans=prevsmaller(arr);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

 return 0;
}