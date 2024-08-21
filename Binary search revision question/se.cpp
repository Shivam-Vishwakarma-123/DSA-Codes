#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
  int arr[]={10,20,30,40,50,60};
  int upper=upper_bound(arr,arr+6,30)-arr;
  
 return 0;
}