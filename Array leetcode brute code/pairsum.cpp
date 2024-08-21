#include<iostream>
#include<vector>
//  Find pair in given array which has sum equal to nine 
using namespace std;
int main ()
{vector<int>a{1,3,5,7,2,4,6};

for (int i = 0; i < a.size(); i++)
{
 for (int  j = i+1; j < a.size(); j++) {
 if(a[i]+a[j]==9){
    cout<<"("<<a[i]<<","<<a[j]<<")";
 }
 }
 cout<<endl;
}

 return 0;
}