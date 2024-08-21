#include<iostream>
using namespace std;
// +++++++++++++++++Type of Inheritence+++++++++++++++++++++
// ***************Single Inhertence **********************
class Car {
    public:
      string name="";
      int colour;
      int modelyear;
};
class Kia:public Car{

};
//  ++++++++++++++++++++++++++Multilevel++++++++++++++++++++++
class Fruit{
    public:
    string name="" ;
};
class mango:public Fruit{
    public:
    int  weight;

};
class alphanso:public mango{
    public:
    int sugarlevel;
};
// ************************Multiple*******************
// class a{
//     public:
//  int chemistry ;
// };
// class b{
//     public:
//     int biology ;

// };
// class c:public a,public b{
//     public:
//     int physics;
// }; 
// *******************Diamond problem***************
 class a{
    public:
 int chemistry ;
 a(){
 chemistry=104;
 }
};
class b{
    public:
    int chemistry ;
b(){
 chemistry=108;
 }

};
class c:public a,public b{
    public:
    int physics;
}; 


// ***************Hierarchical Inheritance*************
class car{
    public:
 string name;
void speedingup(){
    cout<<"Speeding up"<<endl;}
};
car scorpio{
    
};
car bolero{
    
};


// int main ()
// {Kia seltos;
//   cout<<seltos.name;
//   alphanso a ;
//   a.sugarlevel=15;
//  cout<<a.sugarlevel<<" "<<a.weight<<" "<<a.name;

//  return 0;
// }

// int main ()
// {
//  c student;
//  cout<<student.physics<<" "<<student.b::chemistry<<" "<<endl;
//  return 0;
// }
int main(){
    scorpio.speedingup();
    bolero.speedingup();
}
