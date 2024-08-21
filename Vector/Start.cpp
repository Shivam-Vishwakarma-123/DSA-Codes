#include<iostream>
// Library file for vector 
#include<vector>

using namespace std;
int main ()
 {//Initialisation of vector 
vector<int>arr;
cout<<arr.size()<<endl;
cout<<arr.capacity()<<endl;
// Output 
// 0
// 0
// Inserting element in vector 
// Creating vector explicitily giving size
vector<int>arr1(5);
// for(int i=0;i<5;i++){
//     int n;
//     cin>>n;
//     arr1.push_back(n);
// //     cout<<arr1.size()<<endl; //-> 5 //Before entering  any no 
// // cout<<arr1.capacity()<<endl; //-> 5

// }
// cout<<arr1.size()<<endl; //-> 10 //After entering 5 no 
// cout<<arr1.capacity()<<endl; //-> 10

for(int i=0;i<5;i++){
    int n;
    cin>>n;
    arr1.push_back(n);
//     cout<<arr1.size()<<endl; //-> 5 //Before entering  any no 
// cout<<arr1.capacity()<<endl; //-> 5

}
 cout<<arr1.size()<<endl; //-> 15 //On entering 
cout<<arr1.capacity()<<endl; //-> 20
 return 0;
} 