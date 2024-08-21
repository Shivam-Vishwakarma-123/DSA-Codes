#include<iostream>
#include<vector>
#include<algorithm>
   
using namespace std;
// 532. K-diff Pairs in an Array
// Approch 1 
class Solution {
public:
int binarysearch(vector<int>arr,int target,int start,int end){
   
   
    while(start<=end){
         int mid =(start+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target ){
            end=mid-1;
        }
        else if (arr[mid]<target){
            start=mid+1;
           
        }
        
    
    }
    return -1;
}};
class Solution1 {
public:

    int findPairs(vector<int>& nums, int k) {
        if(k<0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int countpair=0;
        int i=0;
        int j=1;
        while(i<nums.size()&&j<nums.size()){
            if(nums[j]-nums[i]==k){
                countpair++;
                i++;
                j++;
                while(j<nums.size()&&nums[j]==nums[j-1]){
                    j++;
                }

            }
            else if(nums[j]-nums[i]>k){
                // j ko increase karna padega
                i++;
                if(j-i==0){
                   j++; 
                }
            }
            else{
                j++;
            }

        }
        

    
        
        return countpair;
    }
};

int main ()
{
  
 return 0;
}