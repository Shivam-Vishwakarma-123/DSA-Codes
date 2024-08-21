#include<iostream>
using namespace std;
int lastoccourence(string &str ,int i,char c,int max){
if(i>=str.size()){
    return max;
}
else{
    if(str[i]==c){
        max=i;
        
    }
     lastoccourence(str , i+1, c, max);
}
}
int main ()
{int max=0;
string str("abcddde");
int i=0;
cout<<lastoccourence(str,i,'d',max);


 return 0;
}