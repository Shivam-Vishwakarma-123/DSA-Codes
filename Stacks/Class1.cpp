#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>s){
   while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
   }
}

int main ()

 { // *********************Introduction of Stacks******************
//      stack<int>s;
//    s.push(10);
//    s.push(20);
//    s.push(30);
//    s.push(40);
//    cout<<"Element on the top"<<endl<<s.top()<<endl;
//    s.pop();
//     cout<<"Element on the top after pushback"<<endl<<s.top()<<endl;
//  cout<<"Size of the stack"<<endl<<s.size()<<endl;
//  cout<<"Is the stack is empty "<<s.empty()<<endl;

// ***************Printing of stack**************
 
 stack<int>s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
  print(s);

 return 0;
}