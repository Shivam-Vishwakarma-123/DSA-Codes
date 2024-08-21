#include<iostream>
using namespace std;
class animal{
   public:
  animal(){
        cout<<"I am inside animal contructor"<<endl;
    }
    void speak() {
cout<<"speaking"<<endl;
  }
//   virtual void speak() {
// cout<<"speaking"<<endl;
//   }

};
class dog:public animal{
    public:
    // Overriding
    dog(){
        cout<<"I am inside dog contructor"<<endl;
    }
    void speak(){
        cout<<"Barking"<<endl;
    }
};



int main ()
{
    // Dynamic object creation
// animal*a=new animal();
// a->speak();
    // child class creation 
    // dog*b= new dog();
    
    // upcastingA
    // / b->speak();
  
// //   Downcasting 
//  dog *a=(dog*)new animal;
//   a->speak

// Contructor
// animal*a=new animal();
// a->speak();
//   child class creation 
    // dog*b= new dog();
// // upcastingA
    // animal*a=new dog();
  
// Downcasting
dog *a=(dog*)new animal();
 return 0;
}