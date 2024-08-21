#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// +++++++++++++findKthLargest++++++++++++++
 int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<k;i++){
            pq.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(nums[i]>pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
    // ++++++++++++++++ findKthSmallest++++++++++++++++
     int findKthSmallest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int i=0;i<k;i++){
            pq.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(nums[i]<pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }

// +++++++++++++++++++cheak if a Cbt is  max heap or not +++++++++++++++
// pair<bool,int>HeapCheck(Node*root){
//     if(root==NULL){
//         return make_pair(true,INT_MIN);
//     }
//     if(root->right==NULL&&root->left==NULL){
//         return make_pair(true,root->data);
//     }
//     pair<bool,int>leftans=HeapCheck(root->left);
//     pair<bool,int>rightans=HeapCheck(root->right);
//     if(leftans.first==true&&
//        rightans.first==true&&
//        root->data >leftans.second
//         root->data >rightans.second){
//             return make_pair(true,root->data);
//         }
//         else{
//              return make_pair(false,root->data);
//         }
// }
int main () 
{
 vector<int>nums{3,11,6,9,4,12,2,8};
 cout<<findKthSmallest(nums,4)<<endl;
 cout<<findKthLargest(nums,1);
 return 0;
}