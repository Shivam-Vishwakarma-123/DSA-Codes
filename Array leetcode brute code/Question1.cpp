
// Madarchod solution 
#include<iostream>
#include<vector>
// Question :Every element is repeated twice find the unique element 
using namespace std;
// Creating a function which return unique no 
int uniquenumber(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main ()
{int n;
cin>>n;
vector<int>arr(n);
// Taking input from user
for(int i=0;i<arr.size();i++)
{cin>>arr[i];

}
cout<<"The unique result is "<<uniquenumber(arr);


 return 0;
}
