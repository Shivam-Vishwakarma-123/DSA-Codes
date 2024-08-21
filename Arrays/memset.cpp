
// Not working 
#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
int arr[5]={1,3,5,6,7};
memset(arr,1,sizeof(arr));
for(int i=0;i<5;i++)
{
cout<<arr[i]<<" ";
 }
 return 0;}
