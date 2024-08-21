#include<iostream>
#include<vector>
using namespace std;
int mountainpeak(vector<int>v){
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
    
    while(s<e)
    {
        if(v[mid]<v[mid+1]){
        s=mid+1;

    }
    else {
        e=mid;

    }
    
mid=s+(e-s)/2;
    }
    return s;
}

int firstoccurence(vector<int>arr,int target){
    int start=0;
    int end =arr.size()-1;
    int ans =-1;
    int mid=(start+(end-start/2));
    while(start<=end){
        if(arr[mid]==target){
            ans = mid;
            // left search 
            end=mid-1;


        }
        else if(arr[mid]>target){
            end=mid-1;

        }
        else if(arr[mid]<target){
            start=mid+1;
            
        }
       mid=(start+(end-start/2)); 
    }
    return ans;
}
int lastoccurence(vector<int>arr,int target ){
    int start=0;
    int end =arr.size()-1;
    int ans =-1;
    int mid=(start+(end-start/2));
    while(start<=end){
        if(arr[mid]==target){
            ans = mid;
            // Right  search 
            start=mid+1;


        }
        else if(arr[mid]>target){
            end=mid-1;

        }
        else if(arr[mid]<target){
            start=mid+1;
            
        }
       mid=(start+(end-start/2)); 
    }
    return ans;
}

int main ()
{
vector<int>v={1,3,7,7,7,7,8,9};
vector<int>v1={1,10,5,3};
// cout<<firstoccurence(v,7)<<endl;
// cout<<lastoccurence(v,7);
cout<<mountainpeak(v1);
 return 0;
}