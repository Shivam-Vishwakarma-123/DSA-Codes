#include<iostream>
using namespace std;
class Solution {
public:
bool isprime(int n){
    for(int i=0;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
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
    };
