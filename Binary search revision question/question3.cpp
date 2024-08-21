#include<iostream>
#include<algorithm>
using namespace std;
// ++++++++++++++++++++++Bishu and Soldiers

int main ()
{
int arr[7]={1,2,3,4,5,6,7};
sort(arr,arr+7);
int Q=3;
int Power[Q]={3,10,2};
int prefix[7];
int ans[Q][2];
prefix[0]=arr[0];
for(int i=1;i<7;i++){
prefix[i]=arr[i]+prefix[i-1];
}

for(int i=0;i<Q;i++){
    int upper1 = upper_bound(arr, arr+7, Power[i]) - arr;
  ans[i][0]=upper1;
  ans[i][1]=prefix[upper1-1];


}
for(int i=0;i<Q;i++){
    for(int j=0;j<2;j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
 return 0;
}