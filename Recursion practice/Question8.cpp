#include<iostream>
#include<vector>
#include<limits.h>
#include<bits/stdc++.h>
using namespace std;
void maxprofitfinder(vector<int>&prices,int i,int &minprice,int &maxprofit){
    // BAse case 
    if(i>=prices.size()){
        return;
    }
     if (prices[i]<minprice){
        // update
        minprice=prices[i];
    }
    if((prices[i]-minprice)>maxprofit){
        // update
       maxprofit= prices[i]-minprice;
    }
    return maxprofitfinder(prices,i+1,minprice,maxprofit);
}
int maxprofit(vector<int>&prices){
    int minprice=INT_MAX;

    int maxprofit=INT_MIN;
    maxprofitfinder(prices,0,minprice,maxprofit);
    return maxprofit;

}
int main ()
{
vector<int>arr={7,1,5,3,6,4};
cout<<maxprofit(arr);    

 return 0;
}