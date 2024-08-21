#include<iostream>
using namespace std;
// ********************code of a factorial calulation from recursion  
int factorial(int n){
    if (n==0||n==1){
        return 1;
    }
    else{
        // return
         n*factorial(n-1);
    }
    
       
}
// *******************code of reverse counting using recursion (Tail recursion)
void printreverse(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
     return printreverse(n-1);
}
// *******************code of forward  counting using recursion (HEAD recursion)
void printforward(int n){
    if(n==0){
        return;
    }
   
     printforward(n-1);
        cout<<n<<" ";}
// ******************Fibonacci series****************
int fibonacci(int n){
    if(n==0){
        // first term 
        return 0;
    }
    else if (n==1){
        // second term 
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main ()
{
int n;
cout<<"Enter the value of n";
cin>>n;
// cout<<factorial(n);
// printreverse(n); reversing counting (tail recursion)
// printforward(n); //forwar counting (HEAD recursion)
cout<<fibonacci(n);
 return 0;
}