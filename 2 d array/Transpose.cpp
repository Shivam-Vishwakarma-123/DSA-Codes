#include<iostream>
using namespace std;
int main ()
{
int a[3][3];

// Taking input in array 
for (int  i = 0; i < 3; i++)
{
    for (int  j = 0; j < 3; j++)
    {
        cin>>a[i][j];

    }
    
}
// Algirithmn for transpose
// Creating a transpose array 
int transpose[3][3];
for (int  i = 0; i < 3; i++)
{
    for (int  j = 0; j < 3; j++)
    {
    transpose[j][i]=a[i][j];
    }}
    // Printing transpose array 
    for (int  i = 0; i < 3; i++)
{
    for (int  j = 0; j < 3; j++)
    { cout<<"The transpose array "<<endl;
        cout<<" "<<transpose[i][j];

    }
    cout<<endl;
    
}


 return 0;
}