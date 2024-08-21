#include<iostream>
#include<vector>
using namespace std;
int main ()
{int n;
cout<<"Enter no of element \n";
cin>>n;
int a[n];
// taking input in array 
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
// Algorthm for collection neg no on left hand side 
int neg=0,pos=n-1;
while(neg<=pos){
    if(a[neg]<0){
        n++;
    }
    else if(a[n]>0){
        swap(a[neg],a[pos]);
        pos--;
    }
}
// Printing array 

for (int i = 0; i < n; i++)
{
    cout<<" "<<a[i];
}



 return 0;
}