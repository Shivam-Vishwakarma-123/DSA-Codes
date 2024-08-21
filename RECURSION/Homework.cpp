#include<iostream>
using namespace std;
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
#include<vector>
using namespace std;
int getans(string s,char c,int i){
    if(i>s.size()){
       return -1 ;
    }


    getans(s,c,i+1);
    if(s[i]==c){
        return  getans(s,c,i+1);
    }

}
void reverse(string &s,int start,int end){
    // cout<<"function called;"<<endl;
   if(start>end){
    return ;
   }
   swap(s[start],s[end]);
   reverse(s,start+1,end-1);
}

//  int  getindex(string s,char c,int i){
//     int ans=-1;
//      getans(s,c,i,ans);
//      return ans;
//  }
// +++++++++++++++remove occurence of string 
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos=s.find(part);
        while(pos!=string::npos){
            s.erase(pos,part.length());
            pos=s.find(part);
        }
        return s;
    }
};
// Bhaiya solution 
// class Solution {
// public:
//  void findoccurence(string &s, string &part){
//     int found=s.find(part);
//     if(found==string::npos){
//         return ;
//     }
//     else{
//         string leftstr=s.substr(0,found);
//         string rightstr=s.substr(found+part.size(),s.size());
//         s=leftstr+rightstr;
//      findoccurence(s,part);
//     }
    
//  }
//     string removeOccurrences(string s, string part) {
//     findoccurence(s,part);
//     return s;
   
//     } 
// };
// +++++++++++++++++++++++Print all subarray +++++++++
void printsubarr(vector<int>arr,int start){
    int end=0;
    if(start>arr.size()){
        return ;
    }
    while(end<arr.size()){
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    end++;
    cout<<endl;}
    printsubarr(arr,start+1);
}
int main()
{
//     printdigit(123456);
    string s="abcdef";
  vector<int>arr{1,2,3,4,5};
  printsubarr(arr,0);
   
    

    return 0;
}
