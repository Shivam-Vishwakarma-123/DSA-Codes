#include<iostream>
using namespace std;
#include<vector>
int countPrimes(int n) {
        vector<bool>prime(n,true);
      prime[0]=prime[1]=false;
      int ans=0;
      for(int i=2;i<n;i++){
          if(prime[i]==true){
              ans++;
              int j=2;
              while(i*j<n){
              prime[i*j]=false;
             j++;}
              }
          }
       return ans ;}
int main ()
{
vector<int>arr; // Vector Declaration
// cout<<arr.size()<<endl; output is zero 

// for (int i = 0; i < 5; i++)
// {
//     /* code */
//     cin>>arr[i];
// }
// vector<int>brr(10,1);//declaring size explicitly
// cout<<brr.size();
// for (int i = 0; i < brr.size(); i++)
// {
//     /* code */
//     cout<<brr[i]<<" ";
// }
int n;
vector<int>shiv; // Vector Declaration
;
cin>>n;
for(int i=0;i<5;i++){
    // cout<<"Shicvam"<<" ";
    cin>>shiv[i];
}
for(int i=0;i<shiv.size();i++){
    
    cout<<shiv[i];
}

 return 0;
}
