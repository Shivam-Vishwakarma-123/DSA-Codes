
// Ques : Chanhe all input to one 
#include<iostream>
using namespace std;
int main ()
{
int arr[5]={1,3,4,5,6};
// For change input to all one 
for(int i=0;i<5;i++){
    arr[i]=1;
}
// For printing new inputs 
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";;
}
 return 0;
}