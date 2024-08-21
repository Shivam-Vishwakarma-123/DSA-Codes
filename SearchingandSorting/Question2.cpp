#include<iostream>
#include<vector>
using namespace std;
// Question find the pivot element 
int findpivotelement(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int m=s+(e-s)/2;
    while(s<=e){
        if(m+1<arr.size()&&arr[m]>arr[m+1]){
            return m;
        }
        if(m-1>=0&&arr[m-1]>arr[m]){
            return m-1;
        }
        if(arr[s]<arr[m]){
            s=m+1; //Search in right 
        }
        else{
            e=m-1;
        }

        m=s+(e-s)/2;

    }
    

}


// int binarysearch(vector<int>& arr, int start, int end, int target) {
//         while (start <= end) {
//             int mid = start + (end - start) / 2;
//             if (arr[mid] == target) {
//                 return mid;
//             } else if (arr[mid] > target) {
//                 end = mid - 1;
//             } else {
//                 start = mid + 1;
//             }
//         }
//         return -1;
//     }
//     // Question search element in sorted rotated array
//     int findpivotelement2(vector<int>& arr) {
//         int s = 0;
//         int e = arr.size() - 1;
//         while (s < e) {
//             int m = s + (e - s) / 2;
//             if (m + 1 < arr.size() && arr[m] > arr[m + 1]) {
//                 return m;
//             }
//             if (m - 1 >= 0 && arr[m - 1] > arr[m]) {
//                 return m - 1;
//             }
//             if (arr[s] < arr[m]) {
//                 s = m + 1; // Search in right 
//             } else {
//                 e = m - 1;
//             }
//         }
//         return -1;
//     }
    
//     int search(vector<int>& nums, int target) {
//         int pivotindex = findpivotelement(nums);
//         if (pivotindex == -1) {
//             return binarysearch(nums, 0, nums.size() - 1, target);
//         }
//         if (target >= nums[0] && target <= nums[pivotindex]) {
//             return binarysearch(nums, 0, pivotindex, target);
//         } else if (target >= nums[pivotindex + 1] && target <= nums[nums.size() - 1]) {
//             return binarysearch(nums, pivotindex + 1, nums.size() - 1, target);
//         }
//         return -1; // Handle cases when target is not found
//     }
int main ()
{vector<int>v={1,2,3,6,5,6};
int ans =findpivotelement(v);
cout<<"The pivot element is "<<v[ans];
// search 
//  cout<<search(v,1);
 return 0;
}

