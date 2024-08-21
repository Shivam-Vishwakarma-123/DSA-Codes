#include<iostream>
#include<limits.h>
using namespace std;
//Using function 
void rowsum(int arr[][3],int rows ,int columns) {
    for(int i=0;i<rows;i++){
    int sum=0; //Row traversing
    for(int j=0;j<columns;j++){
sum=sum+arr[i][j];
    }
    cout<<" Sum of "<<i+1<<"th Row  is "<<sum<<endl;
}
}bool findkey(int arr[][3],int rows,int columns,int key ){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if (arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int maximum(int arr[][3],int rows ,int columns){
    int max=INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if (max<arr[i][j]){
                max=arr[i][j];
            }

        }
    }
    return max;
}
int minimum(int arr[][3],int rows ,int columns){
    int min=INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if (min>arr[i][j]){
                min=arr[i][j];
            }

        }
    }
    return min;
}

// Case of square matrix 

void Transpose(int arr[][3],int rows,int columns){
    for(int i=0;i<rows-1;i++){
        for(int j=i;j<columns;j++){
            swap(arr[j][i],arr[i][j]);
        }
    }
}
void print(int arr[][3],int rows,int columns ){
     for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
}
// int main ()
// {
// // int a[3][3]={ {1,2,3},{3,4,5},{6,7,8}};
// // for(int i=0;i<3;i++){
// //     int sum=0;
// //     for(int j=0;j<3;j++){
// // sum=sum+a[i][j];
// //     } 
// //     cout<<" Sum of "<<i+1<<"th Row  is "<<sum<<endl;
// // }
// rowsum(a,3,3);

//  return 0;
// }
// Question key 
int main(){
int a[3][3]={ {1,2,3},{4,5,6},{7,8,9}};
// cout<<findkey(a,3,3,110)<<endl;
// cout<<maximum(a,3,3)<<endl;
// cout<<minimum(a,3,3)<<endl;
Transpose(a,3,3);
print(a,3,3);
}

// Transpose of matrix 