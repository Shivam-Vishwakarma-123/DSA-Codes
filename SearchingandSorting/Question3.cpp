#include<iostream>
using namespace std;
int findsqrt(int n){
    int s=0;
    int e=n;
    int m=s+(e-s)/2;
    int target=n;
    int ans=-1;
    while(s<e){
        if (m*m==target){
            return m;
        }
        else if (m*m>target){
            e=m-1;
        }
        else {
            ans =m;
            s=m+1;
        }

   m=s+(e-s)/2; }

    return ans ;
}
int main ()
{int n;
    cout<<"Enter the number ";
       cin>>n;
cout<<findsqrt(n);

 return 0;
}