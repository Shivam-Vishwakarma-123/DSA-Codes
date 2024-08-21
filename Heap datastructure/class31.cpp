#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class info{
    public:
    int data;
    // here row specify in which array we are doing processing 
    int row;
    // here col specify index;
    int col;
    info(int data,int row,int col){
        this->data=data;
        this->row=row;
        this->col=col;
    }
};
class compare{
    public:
bool operator()(info *a ,info*b){
    return a->data>b->data;
}
};
vector<int>mergeksortedarray(int arr[][4],int k ,int n){
priority_queue<info*, vector<info*>, compare> minheap;
vector<int>ans;
// har array ke first ko element ko enter karo 
for(int i=0;i<k;i++){
    info* temp=new info(arr[i][0],i,0);
    // here
    // data=arr[i][0] yani har array ka phele element 
    // row=i i describe col no 
    // 0 describe row no 
    minheap.push(temp);
}


while(minheap.size()!=0){
    
 
info*temp=minheap.top();
int topelement=temp->data;
int toprow=temp->row;
int topcol=temp->col;
   // step 1->heap me se pop kar diya 
   minheap.pop();

//    step2 ->ans me store kardo 

   ans.push_back(topelement);
//    step3 insertion of new element 
if(topcol+1<n){
    info* newelement=new info(arr[toprow][topcol+1],toprow,topcol+1);
   
     
    minheap.push(newelement);
   
}

}
return ans;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// ++++++++++++++Merge k sorted linked list+++++++++++++++++++++++++
  class compare{
 public:
 bool operator()(ListNode*a,ListNode*b){
 return a->val>b->val;
 }};

class Solution {
public:

   ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> minheap;
        int k = lists.size();
        if (k == 0) {
            return NULL;
        }

        // Process first k elements
        for (int i = 0; i < k; i++) {
            if (lists[i] != NULL) {
                minheap.push(lists[i]);
            }
        }

        ListNode *head = NULL;
        ListNode *tail = NULL;
        while (!minheap.empty()) {
            ListNode *temp = minheap.top();
            minheap.pop();

            if (head == NULL) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp;
                tail = temp;
            }

            if (tail->next != nullptr) {
                minheap.push(tail->next);
            }
        }

        return head;

    }
};
int main ()
{
    int arr[][4]={{1,3,5,7},
                 {2,4,6,8},
                 {0,9,10,11}};
  vector<int>ans=mergeksortedarray(arr,3,4);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }               

 return 0;
}