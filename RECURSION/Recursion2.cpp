#include<iostream>
#include<vector>
#include<limits.h>
#include<string.h>
using namespace std;
// ************No of ways to climb nth staires**************
int climbStairs(int n) {
        // base case 
        if(n==0||n==1){
            return 1;
        }
        int ans=climbStairs(n-1)+climbStairs(n-2);
        return ans ;
    }
    // ******************Print array**************************
    void printarray(vector<int>arr,int i){
        // base case 
        if(i>=arr.size()){
             return ;

        }
// ek case humne kiya 
   cout<<arr[i]<<" ";
   printarray(arr,i+1);
    }
    // ********************MAXIMUM element in a array************
    void findmaxi(vector<int>arr,int i ,int& maxi){
        // Base case 
        if(i>=arr.size()){
            return;
        }
    //   checking current element with maxi
    if(arr[i]>maxi){
    maxi=arr[i];    
    }  
    // rest recursion will handle 
    findmaxi(arr,i+1,maxi);
    }
    // ********************MiniMUM element in a array************
    void findmini(vector<int>arr,int i ,int& mini){
        // Base case 
        if(i>=arr.size()){
            return;
        }
    //   checking current element with maxi
    if(arr[i]<mini){
    mini=arr[i]; 
    // cout<<mini<<" ";   
    }  
    // rest recursion will handle 
    findmini(arr,i+1,mini);
    }
    // **************To find element in a string********************
bool findelementinstring(string str,int i,char element){
    if(i>=str.length()){
        return false;
    }
    else if(str[i]==element){
        return true ;
    }
  return findelementinstring(str,i+1,element);
}
// **************To find element in a string with index********************
int findelementinstring_withindex(string str,int i,char element){
    if(i>=str.length()){
        return -1;
    }
    else if(str[i]==element){
        return i ;
    }
  return findelementinstring_withindex(str,i+1,element);}

  int findelementinstringstoring(string str,int i,char element,vector<int>&ans)
  {
    if(i>=str.length()){
        return -1;
    }
    else if(str[i]==element){
        ans.push_back(i);
    }
  return findelementinstringstoring(str,i+1,element,ans);
}
void printDigits(int n) {
        //base case
        cout << "Prining value of n "  << n << endl;
        if(n == 0 ) {
                return ;
        }

        //baaaki recursion sambhal lega
        printDigits( n / 10);

        //1 case main solve karunga
        int digit = n % 10;
        cout << digit << " ";
}

int main() {

        //HW
        int n = 0647;
        cout << n << endl;
        if(n == 0)
                cout << 0 << endl;
        
        printDigits(n);

        // vector<int> ans(10,20);
        // for(int i=0; i<ans.size(); i++) {
        //         cout << ans[i] << endl;
        // }
        


        return 0;}
// int main ()
// {
// // int n;
// // cin>>n;
// // vector<int>arr{5,4,3,2,1};

// // cout<<climbStairs( n);
// // printarray(arr,0);
// // int maxi=INT_MIN;
// // int mini=INT_MAX;

// // int i=0;
// // // findmaxi(arr,i,maxi);
// // // findmini(arr,i,mini);

// // // int key ='r';
// // // string str="Lovebabbar";


// // // cout<<findelementinstring("lovebabber",0,'s');
// // // cout<<findelementinstring_withindex(str,i,key);

// // // cout<<maxi;
// // // cout<<mini;
// // int key ='b';
// // string str="Lovebabbar";
// // vector<int>arr;

// // findelementinstringstoring(str,i,key,arr);

// // for(int i=0;i<arr.size();i++){
// //     cout<<arr[i]<<" ";
// // }
// int n;
// cin>>n;
//  return 0;
// }

