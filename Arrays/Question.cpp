#include<iostream>
// Take five input from users and print therir double 
using namespace std;
int main ()
{ int arr[5];
// Fr taking input 
for(int i=0;i<5;i++){
    cin>>arr[i];

}
// Printing their double 
for(int i=0;i<5;i++){
    cout<<"The double of input "<<arr[i]<<" is "<<2*arr[i]<<endl;
}

 return 0;
}