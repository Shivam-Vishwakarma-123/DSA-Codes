#include<iostream>
#include<stack>
using namespace std;
// ++++++++++++++valid parenthesis++++++++++++++
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            // Opening Bracket
            if(ch=='('|| ch=='{'||ch=='['){
                st.push(ch);
            }
            // Closing Bracket
            else{
                if(!st.empty()){
                    char topch=st.top();
                    if(ch==')'&&topch=='('||ch=='}'&&topch=='{'||ch==']'&&topch=='['){
                        st.pop();
                    }
                    
                    else{
                        return false;
                    }

                    
                }
                else{
                    return false;
                }
            }





        }
        if(st.empty()){
            return true ;
        }
        else{
            return false;
        }


    }
};
void InsertELementInSortedStack(stack<int>&s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    
    if(s.top()>=target){
     s.push(target);
     return ;
    }
    int top=s.top();
    s.pop();
    // recusrive call marii
    InsertELementInSortedStack(s,target);
    s.push(top);

}
void sortstack(stack<int>&s){

    // Base Case
    if(s.empty()){
        return ;
    }

    int top=s.top();
    s.pop();
    sortstack(s);
    InsertELementInSortedStack(s,top);

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
{  stack<int>s;
    // s.push(5);
    s.push(9);
    //  s.push(3);
    // s.push(11);
    //  s.push(2);
    // s.push(7 );
 print(s);
//  InsertELementInSortedStack(s,9);
sortstack(s);
  print(s);

 return 0;
}