#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>arr,int target,int start,int end){
   
    int mid =(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target ){
            end=mid-1;
        }
        else if (arr[mid]<target){
            start=mid+1;
            mid =(start+end)/2;
        }
    
    }
    return -1;
}
int main ()
{vector<int>nums{1,2,3,4,5};
int k=1;
int i=0;
int countpair=0;
        
    
        while(i<nums.size()){
            int num=nums[i];
            int target=nums[i]+k;
            int ans=binarysearch(nums,target,i+1,nums.size()-1);
            if(ans!=-1){
               countpair++;
            }
          
            
            while(num==nums[i]){
              
                i++;

            }
           
        }
        cout<<countpair<<endl;
        
 return 0;
}