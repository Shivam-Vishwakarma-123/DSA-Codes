#include<iostream>
using namespace std;
// Creating a function which print a value 
void print(int a){
    cout<<a<<endl;
    cout<<&a<<endl; //To print the addaress of function variable 
    a++;
    
}
// int main ()
// {
// // Introduction to function 
// int a=5;
// print(a);
// // Output 5

//  return 0;
// }
// Call by value 
// Jab bhi hum kisi user defined function  ke variable me main function  
//  ke variable is value paas karate to uski value ki copy jati he actual vho 
// variable paas nhi hota .Isliye function ke variable ke saath ched chadh ka asar 
// main variable ki value par nhi parta 
// aur main function ka variable aur function variable dono alag alag address par store rehta 
//
int main(){
    int a =5;
    print(a);
    cout<<a<<endl;
    cout<<&a;
    //To print the addaress of main function variable 
    return 0;
    // output 
    // 5
    // 5
    // also 
    // addaress of main function variable is 0x61ff0c
    // addaress of  function variable is 0x61fef0

// This proves that ki function ke variable increment karne se original ko koi pharak nhi 
}