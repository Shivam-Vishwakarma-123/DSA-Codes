#include<iostream>
#include<vector>
using namespace std;
void printsubarray(vector<int>&arr,int start,int end){
    if(end>arr.size()){
        return;
    }
    else{
        for(int i=start;i<end;i++){
     cout<<arr[i]<<" ";
        }
        cout<<endl;
        return printsubarray(arr,start,end+1);

    }


}
int main ()
{
vector<int>arr={1,2,3,4,5};
printsubarray(arr,0,1);
 return 0;
}