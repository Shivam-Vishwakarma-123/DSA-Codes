#include<iostream>
using namespace std;
class animal{
   public:
   void speak() {
cout<<"speaking"<<endl;
   }

};
class dog:public animal{
    public:
    // Overriding
    // void speak(){
    //     cout<<"Barking"<<endl;
    // }
};

int main ()
{
  dog d1;
  d1.speak();

 return 0;
}