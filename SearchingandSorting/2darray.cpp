#include<iostream>
using namespace std;
bool findelement2d(int arr[][3],int col,int rows,int target ){
    int s=0;
    int total=col*rows;
    
    int e=total-1;
    int m=s+(e-s)/2;
    while (s<=e){
        int rowindex=m/col;
        int colindex=m%col;
if (target>arr[rowindex][colindex]){
    s=m+1;
}
else if (target<arr[rowindex][colindex]){
    e=m-1;
}
else{
    return true;
}
   m=s+(e-s)/2; }
   return false;

}
int main ()
{      
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
if(findelement2d( arr,3,3,5 )){
    cout<<"Found";
}
 return 0;
}