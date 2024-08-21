#include<iostream>
using namespace std;
void findkey(int arr[][3],int rows,int cols,int key ){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           if(arr[i][j]==key){
            cout<<"Found at "<<arr[i][j];
           }
        }
        
    }
    
}
int main ()
{
int arr[3][3];
//Taking input in array 
for (int  i = 0; i < 3; i++)
{
    for (int  j = 0; j < 3; j++)
    {
        cin>>arr[i][j];

    }
    
}
findkey(arr,3,3,3);
 return 0;
}