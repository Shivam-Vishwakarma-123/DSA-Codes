#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>arr){
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
   
}
}
// Question sort colours named 1 2 3;
int main ()
{
vector<int>arr={0,0,2,2,1,0};
int h=arr.size()-1;
int l,m=0;

while(h<m){
if(arr[m]==0){
    swap(arr[l],arr[m]);
    l++,m++;
}
if(arr[m]==1){
m++;
}
if(arr[m]==2){
    swap(arr[m],arr[h]);
    h--;
}
}
print(arr);
return 0;}

// for(int i=x+1;i<arr.size()-1;i++){
//     if(arr[i]==0){
//         swap(arr[x],arr[i]);
//         x++;
//     }
    
// }
// for(int i=x+1;i<=arr.size()-1;i++){
//     if(arr[i]==1){
//         swap(arr[x],arr[i]);
//         x++;
//     }
    
// }
// for(int i=x+1;i<=arr.size()-1;i++){
//     if(arr[i]==2){
//         swap(arr[x],arr[i]);
//         x++;
//     }
    
// }
