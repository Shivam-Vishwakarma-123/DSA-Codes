#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int lastoccur(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    int ans=0;
    int m=(s+e)/2;
    while(s<=e){
        if(arr[m]==target){

            // cout<<m<<" "<<arr[m]<<endl;
             ans=m;
          s=m+1;
            

        }
        if(arr[m]<target){
            // right search
             s=m+1;
        }
        if(arr[m]>target){
            e=m-1;
        }
        m=(s+e)/2;
    }
    return ans;

}

int firstoccur(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    int ans=0;
    int m=(s+e)/2;
    while(s<=e){
        if(arr[m]==target){

            // cout<<m<<" "<<arr[m]<<endl;
             ans=m;
          e=m-1;
            

        }
        if(arr[m]<target){
            // right search
             s=m+1;
        }
        if(arr[m]>target){
            e=m-1;
        }
        m=(s+e)/2;
    }
    return ans;

}
int totalocc(vector<int>arr,int target){
    return lastoccur(arr,target)-firstoccur(arr,target)+1;
}


int main ()
{
vector<int>arr{1,3,7,7,7,7,8,8,8,8,8,8,9};

cout<<lastoccur(arr,1)<<endl;;
cout<<firstoccur(arr,1)<<endl;
cout<<totalocc(arr,8);

 return 0;
}