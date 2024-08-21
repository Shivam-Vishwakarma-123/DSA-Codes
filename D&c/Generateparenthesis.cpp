#include<iostream>
#include<vector>
#include<string>

using namespace std;
void solve(vector<string>&ans,int open ,int close ,string out){
    // Base case 
    if(open == 0&&close==0){
        ans.push_back(out);
        return ;

    }
    if(open>0){
        out.push_back('(');
     solve(ans,open-1,close,out);
    //  Backtrack
       out.pop_back();

    }
    if(close>open ){
        out.push_back(')');
     solve(ans,open,close-1,out);
    //  Backtrack
       out.pop_back();

    }

}

vector<string>GenerateParaenthesis(int n){
    int open=n;
    int close=n;
    vector<string>ans;
    string out ="";
    solve(ans,open,close,out);
    return ans;

}
class Solution {
public:
     void solve(vector<string>&ans,int index,string digits,string output,vector<string>&map){
        



        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
         int digit=digits[index]-'0';
         string value=map[digit];
        for(int i=0;i<value.length();i++){
            char ch =value[i];
            // Include
            output.push_back(ch);
            //  Recursion
            solve(ans,index+1,digits,output,map);
            // Backtracking 
             output.pop_back();

        }

     }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        int index=0;
        string output="";
        vector<string> map(10); 
        map[2]="abc";
        map[3]="def";
        map[4]="ghi";
        map[5]="jkl";
        map[6]="mno";
        map[7]="pqrs";
        map[8]="tuv";
        map[9]="wxyz";
        solve(ans,index,digits,output,map);
        return ans;
    }
};
int main ()
{ 
    vector<string>ans=GenerateParaenthesis(3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

 return 0;
}