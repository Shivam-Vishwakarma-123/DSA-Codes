#include<iostream>
using namespace std;
// // One method is by function 
// int max(int arr[][3],int rows,int colm){
//     int max=arr[0][0];
//     for (int  i = 0; i < rows; i++)
// {
//     for (int  j = 0; j < colm; j++)
//     {
//         if(max<arr[i][j]){
//             max=arr[i][j];
//         }

//     }
    
// }
//     return max;
// }
// int main ()
// {int arr[3][3];
// //Taking input in array 
// for (int  i = 0; i < 3; i++)
// {
//     for (int  j = 0; j < 3; j++)
//     {
//         cin>>arr[i][j];

//     }
   
// }

//  cout<<"The max no in a given array is "<<max(arr,3,3);
//  return 0;
// }



// Another method is by in the main function 
#include<iostream>
using namespace std;
int main ()
{int arr[3][3];
//Taking input in array 
for (int  i = 0; i < 3; i++)
{
    for (int  j = 0; j < 3; j++)
    {
        cin>>arr[i][j];

    }
   
}
    // Algorithmn
    
    int max=arr[0][0];
    int min=arr[0][0];
    for (int  i = 0; i < 3; i++)
{
    for (int  j = 0; j < 3; j++)
    {
        if(max<arr[i][j]){
            max=arr[i][j];
        }
        if(min>arr[i][j]){
         min=arr[i][j];
        }

    }
    
}
// result 
    cout<<"The max no is "<<max<<endl<<"The min no is "<<min;
 return 0;
}