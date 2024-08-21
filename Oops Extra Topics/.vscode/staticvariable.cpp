#include<iostream>
using namespace std;
class abc{
public:
static int x,y;
void print ()const{
cout<<this->x<<" "<<this->y<<endl;
}
// static void print (){
// cout<<x<<" "<<y<<endl;
// }

};
int abc::x=2;
int abc::y=3;
int main ()
 {  // without static variable
    // abc obj1={2,3};
    // abc obj2={5,6};
    // obj1.print();
    //  obj2.print();
    // with static variable
    abc obj1;
     abc obj2;
     obj1.print();
     obj2.print();


 return 0;
}