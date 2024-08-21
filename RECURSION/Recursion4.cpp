#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;
// ****************Question-1******************
// You have given an array .Use an element of array to create a sum 
// equal to target sum .And of no  of element use should be minimum
// you can use any elemen t infinite no of time.

int solve(vector<int>& arr, int target) {
  //base case
  if(target == 0) {
    return 0;
  }
  if(target < 0) {
    return INT_MAX;
  }

  //let's solve 1 case
  int mini = INT_MAX;
  for(int i=0; i<arr.size(); i++) {
    cout<<"Function for "<<arr[i]<<"->"<<target<<endl;
    int ans = solve(arr, target - arr[i]);
    if(ans != INT_MAX)
    mini = min(mini, ans + 1);
  }

  return mini;

} 
// my code
void getans(vector<int>&inparr,int ans ,int targetsum,int &mini){
    // basecase
    if(targetsum<0){
       return;
    }
    if(targetsum==0){
        mini=min(mini,ans);
        return ;
    }
    for(int i=0;i<inparr.size();i++){
        getans(inparr,ans+1,targetsum-inparr[i],mini);

    }
};
// int Ques(int n,vector<int>arr){
//   // Base case 
//   if(n==0){
//     return 0;
//   }
//   if(n<0){
//     return INT_MIN;
//   }
//   int maxi= INT_MIN;
//   for(int i=0;i<3;i++){
//     int ans=Ques(n-arr[i],arr);
//      if(ans!=INT_MIN){
//       maxi=max(maxi,ans+1);
     
//      }
//      return maxi;
    
//   }

// }

int main() {
  vector<int> arr{1,2};
  int target = 5; 

  int ans = solve(arr, target);
  cout << "Answer is: " << ans << endl;
  return 0;
}
// *************Class Question-2*********************8
int solve(int n, int x, int y, int z ) {
  //base case
  if(n == 0) {
    return 0;
  }

  if(n < 0) {
    return INT_MIN;
  }

int ans1 = solve(n-x, x,y,z) + 1;
int ans2 = solve(n-y, x,y,z) + 1;
int ans3 = solve(n-z, x,y,z) + 1;

int ans = max(ans1, max(ans2, ans3));
return ans;


}


// int main() {
//   int n = 7;
//   int x = 5;
//   int y = 2;
//   int z = 2;

//   //solve function -> returns maximum number of segments
//   int ans = solve(n,x,y,z);
//   //ans -> valid && invalid

//   if(ans < 0 )
//     ans = 0; 
//   cout << "Answer is: " << ans << endl;

//   return 0;
// }

// *******************Class Question-3***********************
void solve(vector<int>& arr,int i, int sum, int &maxi) {
  //base case
  if(i >= arr.size()) {
    //maxi update;
    maxi = max(sum, maxi);
    return;
  }

  //include
  solve(arr,i+2,sum+arr[i] ,maxi );
  //exclude
  solve(arr, i+1, sum, maxi);
}

// int main() {
//   // vector<int> arr{1, 2, 3, 1, 3, 5, 8, 1, 9};
//   // int sum = 0;
//   // int maxi = INT_MIN;
//   // int i = 0;
//   // solve(arr,i, sum, maxi);

//   // cout << maxi << endl;
//   vector<int>arr{2,3,5};
//  cout<< solve(11,2,3,5);

//   return 0;
// }