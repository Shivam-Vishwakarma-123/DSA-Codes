#include<iostream>
#include <climits> 
#include<vector>
using namespace std;
void getmaxi(vector<int>arr,int &maximum,int index){
 if(index>arr.size()){
    return ;
 }
 if(arr[index]>maximum){
  maximum=arr[index];

 }
 getmaxi(arr,maximum,index+1);
}
int  getmaximum(vector<int>arr,int index){
 if(index==0){
    return arr[0];
 }

int maxi=INT_MIN;
maxi=getmaximum(arr,index-1);
 return max(arr[index],getmaximum(arr,index-1));

}




int main ()
{
 vector<int>arr{1,2,5,4,3};
 int maxi=0;
 cout<<getmaximum(arr,4);

 return 0;
}