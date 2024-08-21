#include<iostream>
using namespace std;
#include<vector>
// Question1:Search in nearly sorted array 
int search_in_nearly_sorted_array(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while (s<=e){
        // Perfect matching with target 
        // if(target==arr[mid]){
        //     return mid;
        // }
        // if(target==arr[mid+1] && mid+1<arr.size()){
        //     return mid+1;
        // }
        // if(target==arr[mid-1] && mid-1>0){
        //     return mid-1;
        // }

        // New condition 
        if(target==arr[mid]){
            return mid;
        }
        if(target==arr[mid+1] && mid+1<=e){
            return mid+1;
        }
        if(target==arr[mid-1] && mid-1>=s){
            return mid-1;
        }
        // Lecf or right search
        if(target<arr[mid]){
            // left search
            e=mid-2;
        }
        else{
            s=mid+2;
            // Right search
        }
    mid=s+(e-s)/2;
    }
    return -1;
}
// Question 2 Divide 2 number by binary search 
int solvedivide(int dividend,int divisior){
    int start=0;
    int end=abs(dividend);
    int mid =start+(end-start)/2;
    int ans=0;
    while(start<=end){
        if (abs(mid*divisior)==abs(dividend))
           {  ans=abs(mid);
           }
        
        if (abs(mid*divisior)<=abs(dividend)){
             ans=abs(mid);
            //  Right search
             start=mid+1;
            
        }
        else {
            end=mid-1;
            // left search
        }
        mid=start+(end-start)/2;
} return ans;
    }
    // Question find odd occurence  element 
    int solve(vector<int>arr){
        int start=0;
        int end=arr.size()-1;
        int m=start+(end-start)/2;
        while(start<=end){
       if (start==end){
    return start;
}
    
            if (m%2==0){
                if(arr[m]==arr[m+1]){
                    start=m+2;
                    // We are at left and we searching at right 
                }
                else{
                    // It may be ans or we are at right side of ans 
                    // search at left with answer
                    end=m;
                }


            }
            else{
                if(arr[m]==arr[m-1]){
             //  we are at left searching at the right of ans 
               start=m+1;
                }
                else{

                    end=m-1;
                }
            }
            m=start+(end-start)/2;;
        }
        return -1;
    }

int main ()
{vector<int>arr{10,3,40,20,50,80,70};

// int ans =search_in_nearly_sorted_array(arr,50);
// if(ans==-1){
//     cout<<"Target not found";
// }
// else{
//     cout<<"Target not found at index "<<ans;
// }
// Question 2 Divide 2 number by binary search 
// int divisor =-3;
// int dividend=-21;
// if(divisor>0 && dividend <0||divisor<0 && dividend >0){
//     int ans = solve( dividend, divisor);
//     cout<<-ans;
// }
// else 
// {cout<<solve( dividend, divisor);}
// Question find odd occurence  element 
vector<int>brr{1,1,2,2,3,3,4,4,3,600,600,4,4};
cout<<brr[solve(brr)];
 return 0;
}