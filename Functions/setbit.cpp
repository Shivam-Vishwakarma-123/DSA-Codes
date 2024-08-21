#include<iostream>
using namespace std;
int main ()
{
int n=3; 
{int i=0;
while(n!=0){
    if(n&1){
i++;
//Increment 
    }
    n=n>>1;

}
std::cout<<i;}


 return 0;
}