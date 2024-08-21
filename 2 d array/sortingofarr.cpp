#include<iostream>
using namespace std;
int main ()
{
int a[5]={0,2,0,1,2};
// Algorithm for sorting an array 
for(int i=0;i<5;i++){
   
    for(int j=i+1;j<5;j++){
if(a[i]>a[j]){
    swap(a[i],a[j]);
}
    }}
    // Printing new array 
    for (int  i = 0; i < 5; i++){

  
    {
        cout<<a[i];

    }
    

}
 return 0;
}