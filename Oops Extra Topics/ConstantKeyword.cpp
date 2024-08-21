// #include<iostream>
// using namespace std;


// // int main ()
// // {
// // // a=5;
// // // Constant With Pointer 
// // // int *a=new int;
// // // *a=5;
// // // delete a;
// // // int b=10;
// // // a=&b;
// // // cout<<*a<<endl;

// // // const with pointer
// // const int*a=new int(5);
// // // *a=105;->compilation error/
// // // int b=20;
// // // a=&b; //pointer can me reassigned 
// // // cout<<*a<<endl;->20 print ho rha 


// // // constant pointer   but non contant data 
// //  int *const a=new int(2);
// //   cout<<*a<<endl;
// //  *a=50;
// //  cout<<*a<<endl

// //  return 0;
// // }
// #include <iostream>
// using namespace std;


// int main(){
// // {int *const a=new int(2);
// //   cout<<*a<<endl;
// //  *a=50;//Data can be changed 
// //  cout<<*a<<endl;
// //  int b=10;
// // //  a=&b; pointer can't be changed 
// // Constant data and constant pointer
// const int *const a=new int[5];
// *a=20;
// // int b=220; Dono me error 
// // a=&b;      constant data and constant pointer

//     return 0;
// }
#include<iostream>
using namespace std;
class abc{
    int x;
    int *y;
    int const z;
    public:
    // // Constructor
    //  abc(){
    //     x=0;
    //    y=new int(2);

    // }
    // // Constructor
    //  abc(int x,int y){
    //     this->x=x;
    //    this->y=new int(y);
       // ********Intialisation list**************
// }    
    abc(int _x,int _y,int _z=0):x(_x),y(new int(_y)),z(_z){}; 
    int getx()const{
        // x=5;Error de rha 
    return this->x;
    }
  void setx(int val){
    x=val;
  }
  int gety()const{
        // x=5;Error de rha 
    return *y;
    }
  void sety(int val){
    *y=val;
  }
   int getz()const{
        // x=5;Error de rha 
    return this->z;
    }
 
  
};void printabc(const abc &a){
cout<<a.getx()<<" "<<a.gety()<<" "<<a.getz();}
// int main ()
// {
// // abc a;
// // cout< <a.getx()<<endl;
// // cout<<a.gety()<<endl;

// abc a(0,0);
// printabc(a);

//  return 0;
// }
// ********Intialisation list**************


#include<iostream>
using namespace std;
int main ()
// {// int main ()
{
abc a(1,2,3);
// cout<<a.getx()<<endl;
// cout<<a.gety()<<endl;

// abc a(0,0);
printabc(a);

 return 0;
}
