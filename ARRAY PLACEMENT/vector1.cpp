#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;
void print(vector<int>arr){
    for (int  i = 0; i < arr.size(); i++)
    {
        /* code */cout<<arr[i]<<" ";
    }
    
}

// int main ()
// {int n;
// cin>>n;

// vector<int>arr(n);
// for(int i=0;i<arr.size();i++){
//    cin>>arr[i]; 
// }

 


// for(int i=0;i<arr.size();i++)
// {cout<<arr[i]<<"  ";}
//  return 0;
// }

// vector<int>arr(n);
// for(int i=0;i<10;i++){
//    cin>>arr[i]; 
// }

 


// for(int i=0;i<arr.size();i++)
// {cout<<arr[i]<<"  ";}
// cout<<arr.capacity();
//  return 0;
// }




// //QUESTION :fIND THE UNIQUE ELEMENT
// int uniquelement(vector<int>arr){
//      int ans = 0;
//     for(int i=0;i<arr.size();i++)
   
//     {
//     ans=ans^arr[i];}
    
//     return ans ;
// }
// int main(){


// int n;
// cin>>n;
// vector<int>arr(n);
// for (int i = 0; i < arr.size(); i++)
// {cin>>arr[i];
//     /* code */
// }
// cout<<"The Unique element is "<<uniquelement(arr)<<endl;

// }
// QUESTION Union of array 
// int main(){
// int arr[]={1,2,3,4,5};
// int brr[]={6,7,8,9,10};
// vector<int>uni;

// for(int i=0;i<5;i++){
// uni.push_back(arr[i]);
// }
// for(int i=0;i<5;i++){
// uni.push_back(brr[i]);
// }
// print(uni);
// }
// QUESTION :Intersection of array 
// int main(){
//     vector<int>arr{1,2,3,4,5};
//     vector<int>brr{1,2,3};
//     vector<int>common;
// for(int i=0;i<arr.size();i++){
// int element =arr[i];
// for(int j=0;j<brr.size();j++){
// if(element == brr[j]){
// common.push_back(brr[j]);
// }
// }
// }
// print(common);
// return 0;
// }
// // 
// QUESTION .Union of set having same element 
// int main(){
//     vector<int>arr{1,2,3,4,5};
//     vector<int>brr{1,2,3,7,8,9};
//     vector<int>uni;
// for(int i=0;i<arr.size();i++){
// int element =arr[i];
// for(int j=0;j<brr.size();j++){
// if(element == brr[j]){
// // MArking process
// brr[j]=INT_MIN;
// }
// }
// }

// for(int i=0;i<arr.size();i++){
//     uni.push_back(arr[i]);
// }
// for(int i=0;i<brr.size();i++){
    
//     if(brr[i] !=INT_MIN)
//    { uni.push_back(brr[i]);

// }

// }
// print(uni);
// return 0;
// }
// Question for sum pair 

// int main(){
//     vector<int>a{1,3,5,7,2,4,6};

//     for(int i=0;i<a.size();i++){
//         for(int j=i+1;j<a.size();j++){
//             if(a[i]+a[j]==9){
//                 cout<<"Pair are "<<a[i]<<" , "<<a[j]<<endl;
//             }

//         }
//     }
//     return 0;
// }


// Question for Triplet pair 

// int main(){
//     vector<int>a{10,20,30,40};

//     for(int i=0;i<a.size();i++){
//         for(int j=i+1;j<a.size();j++){
//            for(int k=j+1;k<a.size();k++){
// if(a[i]+a[j]+a[k]==80){
//                 cout<<"Pair are "<<a[i]<<" , "<<a[j]<<" , "<<a[k]<<endl;
//             }
//            }
            

//         }
//     }
//     return 0;
// }
// Question sorting ones and zeroes 
int main(){
    vector<int>a{0,1,1,0,1,0,1,0,1};
    int start=0,i =0;
    int end=a.size()-1;
    while(i!=end)
    {
        if (a[i]==0){
            swap(a[i],a[start]);
            i++;
            start++;
        }
        else{
            swap(a[i],a[end]);
            end--;
        }
        
    }
   
    print(a);
    return 0;
}