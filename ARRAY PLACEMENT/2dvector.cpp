#include<iostream>
#include<vector>
using namespace std;

int main ()
{
vector<vector<int> >arr;
vector<int>a{1,2,3};
vector<int>b{3,4,5};
vector<int>c{5,6,7};
arr.push_back(a);

arr.push_back(b);
arr.push_back(c);
// for(int i=0;i<arr.size();i++){
//     for(int j=0;j<arr[0].size();j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
// Ways two 
vector<vector<int> >brr(3,vector<int>(3,-101));
// (Where three is the size of outer vector ,3 is no column ,-101 is intialiser)
for(int i=0;i<brr.size();i++){
    for(int j=0;j<brr[0].size();j++){
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
}


 return 0;
}