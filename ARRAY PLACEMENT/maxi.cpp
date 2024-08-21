#include<iostream>
#include<limits.h> //library for using int min and int max
using namespace std;
int main ()
{
    // Maximum elemnet in a given  of array
int arr[]={2,4,-8,2000,8,9,200};
int a=INT_MIN;

for (int  i = 0; i < 7; i++)
{
    /* code */
    if (arr[i]>a){
        a=arr[i];
    }
}
cout<<a<<endl;
// For getting minimum no in a given array 
int min =INT_MAX;
for (int  i = 0; i < 7; i++)
{
    /* code */
    if (arr[i]<min){
        min=arr[i];
    }
}
cout<<min<<endl;

 return 0;
}