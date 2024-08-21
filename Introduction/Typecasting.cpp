#include<iostream>
using namespace std; 
int main(){
    char a='m';   //Typecasting by compilor i.e  implicit typecasting .
    // Implicit type casting means conversion of data types without losing its original meaning. 
    // This type of typecasting is essential when you want to change data types without changing 
    // the significance of the values stored inside the variable.
    cout<<a<<endl;
    float b=5.78;
    cout<<(int)b<<endl;
    // Explicit type casting
// In implicit type conversion, the data type is converted automatically.
//  There are some scenarios in which we may have to force type conversion. 
//  Suppose we have a variable div that stores the division of two operands 
//  which are declared as an int data type.
cout<<(int)a<<endl;
char d=545464;
cout<<d<<endl;
}