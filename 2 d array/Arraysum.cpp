#include<iostream>
using namespace std;
int main ()
{
// Printing row sum 
int arr[3][3];
//Taking input in array 
for (int  i = 0; i < 3; i++)
{
    for (int  j = 0; j < 3; j++)
    {
        cin>>arr[i][j];

    }
    
}
// Printing row sum 
for (int i = 0; i < 3; i++)
{int sum=0;
    for (int j = 0; j < 3; j++)
    {
       sum=sum+arr[i][j];
    }cout<<"The sum of row  "<<i+1<<"is "<<sum<<endl;
    
}

 return 0;
}