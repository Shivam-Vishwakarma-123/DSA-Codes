#include<iostream>
using namespace std;
void printpermutation(string &s,int i){
    if (i>=s.size()){
        cout<<s<<endl;
    }
    for(int j=i;j<s.size();j++){
      swap(s[i],s[j]);
      printpermutation(s,i+1);
      swap(s[i],s[j]);

    }
}
int main ()
{
    string a="abc";
 printpermutation(a,0);
 return 0;
}