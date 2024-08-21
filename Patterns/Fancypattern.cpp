#include<iostream>
using namespace std;
int main ()
// The following problem is divided into 2 part Upper half and lower half
// 1.Half pyramid with alternete * and numerics 
{
for(int i=0;i<4;i++){
    for(int col=0;col<(2*i)+1;col++){

    
   if((col+1)%2!=0){
    cout<<i+1;
   } 
  else
   {
    cout<<"*";
   }}
   cout<<endl;

}
// 2. Inverted Half pyramid with alternete * and numerics 
for(int i=3;i>=0;i-- ){
    for(int col=0;col<(2*i+1);col++){
        if((col+1)%2!=0){
    cout<<i+1;
   } 
  else
   {
    cout<<"*";
   }}
   cout<<endl;
    }


 return 0;
}