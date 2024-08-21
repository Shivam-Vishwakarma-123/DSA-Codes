#include<iostream>
#include<vector>
using namespace std;
// ++++++++++++Searching in an array where adjacent differ by at most k
int index(vector<int>arr,int target,int k){
    int i=0;
    while (i < arr.size()) 
    { 
        // If x is found at index i 
        if (arr[i] == target) 
            return i; 
  
        // Jump the difference between current 
        // array element and x divided by k 
        // We use max here to make sure that i 
        // moves at-least one step ahead. 
        i = i + max(1, abs(arr[i]-target)/k); 
    } 
}
int main ()
{
 vector<int>arr{20,40,50,60,70,70,70};
 cout<<index(arr,60,20);
 return 0;
}