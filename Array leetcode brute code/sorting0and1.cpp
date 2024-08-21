#include<iostream>
#include<vector>
using namespace std;
int main ()
{
vector<int>a{0,0,1,0,1,1};
   int start=0;
    int end=  a.size()-1;
for(int i=0;i<a.size();i++) {
 if(a[i]==0){
    int k=a[i];
    a[i]=a[start];a[start]=k;
 start++;}
 else{
    int k=a[i];
    a[i]=a[end];a[end]=k;
 end--;}


}
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
 return 0;
}