#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// peak element in a mountain array;
int binarysearch(vector<int> arr, int target)
{
    int start = 0;
    int size = arr.size();
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
            mid = (start + end) / 2;
        }
    }
    return -1;
}
// ++++++find Missing element in a sorted array
// Algo 1;
int findmissing(vector<int> ar)
{
    int l = 0, r = ar.size() - 1;
    while (l <= r)
    {

        int mid = (l + r) / 2;

        // If this is the first element
        // which is not index + 1, then
        // missing element is mid+1
        if (ar[mid] != mid + 1 &&
            ar[mid - 1] == mid)
            return mid + 1;

        // if this is not the first missing
        // element search in left side
        if (ar[mid] != mid + 1)
            r = mid - 1;

        // if it follows index+1 property then
        // search in right side
        else
            l = mid + 1;
    }

    // if no element is missing
    return -1;
}
// Algo 2;
int findmissingelement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        if ((arr[start + 1] - arr[start]) != 1)
        {
            cout << "DuringreturnStartValue" << start << endl;
            return arr[start] + 1;
        }
        else if (arr[end] - arr[end - 1] != 1)
        {
            cout << "DuringreturnEndValue" << endl;
            return arr[end] - 1;
        }
        else
        {
            cout << "startIndex " << start << endl;
            start++;
            cout << "endIndex " << end << endl;
            end--;
        }
    }
    return -1;
}
int pivotindex(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=(s+(e-s)/2);
    while(s<=e){
        // two cases to be handled separatively 
        // cas1
        if(mid+1<arr.size()&&arr[mid]>arr[mid+1]){
            //  standing on the pivot element 
            return mid;
        }
        if(mid-1>=0 && arr[mid-1]>arr[mid]){
            // right side of the pivot index
            return mid-1;
        }


        // ab start batayega ki left series me search kare ya right me 
        if(arr[s]>=arr[mid]){
      // we are on the right search in left 
          e=mid-1;
        }
        else{
            // we are on the left search in right
            s=mid+1;
        }
        mid=(s+(e-s)/2);
    }
    return -1;
  

}
// ++++++++++Find sqrt of a number ++++++++++
int sqrt(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    int ans=0;
       int mid=(start+(end-start)/2);
    while(start<=end){
     
        // cout<<mid<<" ";
        int num=arr[mid]*arr[mid];

        if(target<num){
            // left search
            end=mid-1;
        }
        if(target>=num){
            // right seach 
            ans=arr[mid];
            start=mid+1;
        }
    mid=(start+(end-start)/2);
    }
    return ans;
}
int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    cout<<sqrt(arr,1);
    // cout << findmissing(ar) << endl;
    return 0;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    static std::vector<int> sol;

    int start = 0;
    int end = nums.size() - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            // left search
            ans = mid;
            end = mid - 1;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    sol.push_back(ans);
    start = 0;
    end = nums.size() - 1;
    mid = (start + end) / 2;
    ans = -1;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            // Right  search
            ans = mid;
            start = mid + 1;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }

    sol.push_back(ans);
    return sol;
}
vector<int> ans(vector<int> nums, int k, int x)
{
    int index = binarysearch(nums, x);
    vector<int> sol;
    sol.push_back(nums[index]);
    int i = index - 1;
    int j = index + 1;
    while (sol.size() <= k)
    {
        if (abs(nums[i] - nums[index]) < abs(nums[j] - nums[index]))
        {
            sol.push_back(nums[i]);
            i--;
            j++;
        }
        else if (abs(nums[i] - nums[index]) > abs(nums[j] - nums[index]))
        {
            sol.push_back(nums[j]);
            i--;
            j++;
        }

        else if ((abs(nums[i] - nums[index]) > abs(nums[j] - nums[index])) && (nums[i] < nums[j]))
        {
            sol.push_back(nums[i]);
            i--;
            j++;
        }
    }
}

// class Solution
// {
// public:
//     vector<int> findClosestElements(vector<int> &nums, int k, int x)
//     {
//         int binarysearch(vector<int> arr, int target)
//         {
//             int start = 0;
//             int size = arr.size();
//             int end = size - 1;
//             int mid = (start + end) / 2;
//             while (start <= end)
//             {
//                 if (arr[mid] == target)
//                 {
//                     return mid;
//                 }
//                 else if (arr[mid] > target)
//                 {
//                     end = mid - 1;
//                 }
//                 else if (arr[mid] < target)
//                 {
//                     start = mid + 1;
//                     mid = (start + end) / 2;
//                 }
//             }
//             return -1;
//         }
//         int index = binarysearch(nums, x);
//         vector<int> sol;
//         sol.push_back(nums[index]);
//         int i = index - 1;
//         int j = index + 1;
//         while (sol.size() <= k)
//         {
//             if (abs(nums[i] - nums[index]) < abs(nums[j] - nums[index]))
//             {
//                 sol.push_back(nums[i]);
//                 i--;
//                 j++;
//             }
//             else if (abs(nums[i] - nums[index]) > abs(nums[j] - nums[index]))
//             {
//                 sol.push_back(nums[j]);
//                 i--;
//                 j++;
//             }

//             else if ((abs(nums[i] - nums[index]) > abs(nums[j] - nums[index])) && (nums[i] < nums[j]))
//             {
//                 sol.push_back(nums[i]);
//                 i--;
//                 j++;
//             }
//         }
//         sort(sol.begin().sol.end());
//         return sol;
//     }
// }
// // *******************// Painter partition problem*************8
// class Solution
// {
// public:
//     // function to check possible
//     bool possiblesol(int arr[], int n, int mid, int m)
//     {
//         int painterscount = 1;
//         int Boardlenght = 0;
//         for (int i = 0; i < n; i++)
//         {

//             if (Boardlenght + arr[i] <= mid)
//             {
//                 Boardlenght += arr[i];
//             }
//             else
//             {
//                 painterscount++; // Increment the student count
//                 if (painterscount > m || arr[i] > mid)
//                 {
//                     return false;
//                 }
//                 Boardlenght = arr[i];
//             }
//         }
//         return true;
//     }

//     // Function to find minimum time required
//     long long minTime(int arr[], int n, int m)
//     {
//         // code here
//         // return minimum time

//         long sum = 0;
//         long maxi = 0;
//         for (int i = 0; i < n; i++)
//         {
//             sum += arr[i]; // to get the sum
//             if (arr[i] > maxi)
//             {
//                 maxi = arr[i];
//             }
//         }

//         int start = 0;
//         long end = sum;
//         long ans = -1;
//         long mid = start + (end - start) / 2;
//         if (n < m)
//         {
//             return maxi;
//         }
//         while (start <= end)
//         {
//             if (possiblesol(arr, n, mid, m) == 1)
//             {
//                 ans = mid;
//                 end = mid - 1;
//             }
//             else
//             {
//                 start = mid + 1;
//             }
//             mid = start + (end - start) / 2;
//         }
//         return ans;
//     }
// };
// *******************Book allocation problem******************
// class Solution
// {
// public:
//     // function to check possible
//     bool possiblesol(int arr[], int n, int mid, int m)
//     {
//         int studentcount = 1;
//         int pagecount = 0;
//         for (int i = 0; i < n; i++)
//         {

//             if (pagecount + arr[i] <= mid)
//             {
//                 pagecount += arr[i];
//             }
//             else
//             {
//                 studentcount++; // Increment the student count
//                 if (studentcount > m || arr[i] > mid)
//                 {
//                     return false;
//                 }
//                 pagecount = arr[i];
//             }
//         }
//         return true;
//     }

//     // Function to find minimum number of pages.
//     int findPages(int arr[], int n, int m)
//     {
//         if (n < m)
//             return -1;

//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             sum += arr[i]; // to get the sum
//         }

//         int start = 0, end = sum;
//         int ans = -1;
//         int mid = start + (end - start) / 2;
//         while (start <= end)
//         {
//             if (possiblesol(arr, n, mid, m) == 1)
//             {
//                 ans = mid;
//                 end = mid - 1;
//             }
//             else
//             {
//                 start = mid + 1;
//             }
//             mid = start + (end - start) / 2;
//         }
//         return ans;
//     }
// };
