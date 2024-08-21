#include<iostream>
using namespace std;
// Palindrone check
 bool pailindronecheck(string str ,int start,int end){
    // base case
    if(start==end){
        return true;
    }
    // one case solve
    if(str[start]!=str[end]){
        return false;
    }

    return pailindronecheck(str,start+1,end-1);
 }
int main (){
string str("gfg");
int end=str.size()-1;
cout<<pailindronecheck(str,0,end);
 return 0;
}