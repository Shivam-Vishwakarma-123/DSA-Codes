#include<iostream>
using namespace std;
#define PI 3.1459
#define MAXX(x,y)(x>y?x:y);
float area(int radius){
    return (PI)*(radius)*(radius);
}
void fun1(int x,int y){
// int c=x>y?x:y;
// Rather than writing this 
int c=MAXX(5,2);

}
void fun2(int x,int y){
//   int c=x>y?x:y;  
int c=MAXX(5,2);
   
}
void fun3(int x,int y){
//     int c=x>y?x:y;
int c=MAXX(5,2);
 }
int main ()
{ 

 return 0;
}