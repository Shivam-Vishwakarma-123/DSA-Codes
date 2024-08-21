//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    int freq[26]={0};
		    queue<char>q;
		    string ans="";
		    for(int i=0;i<A.length();i++){
		        char ch=A[i];
		      //  Increment frequency
		      freq[ch-'a']++;
		      q.push(ch);
		      while(!q.empty()){
		       if(freq[q.front()-'a']>1){
		           q.pop();
		       }
		       else{
		           ans.push_back(q.front());
		           break;
		       }
		      }
		      if(q.empty()){
		          ans.push_back('#');
		      }
		    }
		    return ans ;
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends------+
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // kitna petrol kam padega
       int deficit=0;
    //    kitna petrol extra he 
       int balance=0;
    //    route kaha se start hoga 
       int start=0;
       for(int i=0;i<gas.size();i++){
        balance+=gas[i]-cost[i];
        if(balance<0){
            // petrol ki kami 
            deficit+=balance;
            start=i+1;
            balance=0;
        }
       
       }
        if(deficit+balance>=0){
            return start;
        }
        else{
            return -1;
        }

    }
};