#include<iostream>
using namespace std;
// // Perfect Encapsulation 
// class animal{
//     private:
//     int age ;
//     int weight ;
//     public:
//     void eat(){
//         cout<<"eating"<<endl;
//     }
//     void Sleep(){
//         cout<<"Sleeping"<<endl;
//     }
//     int  Getage(){
//         return this->age;
//     }
//     void  Setage(int age){
//         this->age=age;
//     }
// };

// // Child Class creation 
// class dog:public animal{

// };



// +++++++++++++++Mode of Inhertence++++++++++++++++
// Mode of Inhertence Public and parent class acces modifier


class animal{
    public:
    int age ;
    int weight ;
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
    void Sleep(){
        cout<<"Sleeping"<<endl;
    }
    int  Getage(){
        return this->age;
    }
    void  Setage(int age){
        this->age=age;
    }
};
class Animal{
    private:
    int age ;
};

// +++++++++++++++Mode of Inhertence++++++++++++++++
// Mode of Inhertence Public and parent class acces modifier is public 
// class dog:public animal{

// };


// +++++++++++++++Mode of Inhertence++++++++++++++++
// Mode of Inhertence Private and parent class acces modifier is public
// class dog:private animal{

// };
// Mode of Inhertence Protected and parent class acces modifier is public
class dog:public Animal{
// protected he to bahar access nhi kar sakte par ander kar sakte 
void print(){
   
    cout<<this->age;
}
};

int main (){
// Mode of Inhertence Public and parent class acces modifier is public 
// { dog Puppy;
//    cout<<Puppy.age; 

//   Jabki iske ander kuch likha hi nhi matlab parent se property inhert kar child ne 
  
  
//   // Mode of Inhertence Private and parent class acces modifier is public 
//   { dog Puppy;
//    cout<<Puppy.age; 
// //    access nhi karte
 // Mode of Inhertence Protecteds and parent class acces modifier is public 
  { dog Puppy;
//    cout<<Puppy.age; 
    Puppy.print();
//    access nhi karte
 
 return 0;
}
}
