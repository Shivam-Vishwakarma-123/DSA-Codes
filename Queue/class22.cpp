#include<iostream>
#include<deque>
using namespace std;
void solve(int arr[],int n,int k){
    deque<int>q;
    // process the first window
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            q.push_back(i);
        }
    }
    // remainig window ko process karo
    for(int i=k;i<n;i++){
        // answer dedo purano window ka
        if(q.empty()){
            cout<<0<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
        //  out of window element ko remove karna he 
        while((i-q.front()>=k)&&(!q.empty())){
            q.pop_front();
        }
        // check current element for insertion 
        if(arr[i]<0){
            q.push_back(i);
        }

    }
    if(q.empty()){
            cout<<0<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }

}
int main ()
{
    int arr[]={-8,-2,3,4,5,-6,-8,10};
    int size=8;
    solve(arr,size,3); 

 return 0;
}