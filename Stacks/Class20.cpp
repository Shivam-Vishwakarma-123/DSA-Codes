#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s,int &target){
    // Base Case 
    if(s.empty()){
        s.push(target);
        return ;
    }
    int temp=s.top();
    s.pop();
    // recursive cALL
    solve(s,target);
    // Backtrack
    s.push(temp);
}
void ReverseStack(stack<int>&s){
   
    if(s.empty()){
      return ;
    }
    int top=s.top();
    s.pop();
    ReverseStack(s);
    solve(s,top);
}

void InsertAtBottom(stack<int>&s){
    int target=s.top();
    s.pop();
    solve(s,target);
}
void print(stack<int>s){
    while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   }
   cout<<endl;
   return ;
}
int main ()
{stack<int>s;
s.push(5);
s.push(15);
  s.push(27);
  s.push(32);
  s.push(11);
print(s);
  // ReverseStack(s);
  InsertAtBottom(s);
print(s);
 return 0;
}