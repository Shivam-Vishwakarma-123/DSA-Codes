#include<iostream>
#include<vector>
using namespace std;
int main ()
{
// Creating two array 
vector<int>a{1,2,3,3,4,6,8};
vector<int>b{3,4,5,9};
vector<int>ans;
for (int i = 0; i < a.size(); i++){
    for (int  j = 0; j < b.size(); j++)
    {
        if(a[i]==b[j]){
            // Markingthat particular element 
            b[j]=-1;
            // Due to marking we have do have to worry if  any set have du-licate value

            ans.push_back(a[i]);
         

    }
    
    
}}
// Printing elwemnt of new array 
for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}



 
 return 0;
}