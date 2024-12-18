#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr{10,9,8,5,6,1};
  int n = arr.size();

  //insertion sort
for(int round=1;round<arr.size();round++){
    int value=arr[round];
    int j=round-1;
    while(arr[j]>value){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=value;
}
      //stepD: Copy
    
  for(auto i:arr){
      cout<<i<<" ";
  }
  //printinhg
 





  return 0;
}