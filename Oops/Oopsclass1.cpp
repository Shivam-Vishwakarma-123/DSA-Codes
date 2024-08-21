#include<iostream>
using namespace std;
class Person{
    // State or properties
    private:
    int weight;
    public:
    string name="";
   int age;
    int height;
    // Dedault constructor
    Person(){
        this->age=0;
        this->weight=0;
        this->height=0;
        cout<<"contructorCalled "<<endl;
    }
    // Parameter  constructor called 
    Person(int age ){
        this->age=age;
        cout<<"ParametrisedcontructorCalled "<<endl;
    }
     Person(int age ,int weight){
        this->age=age;
        cout<<"Parametrisedcontructor 2 Called "<<endl;
    }
    // Copy Constructor
    Person(Person &obj){
        this->name=obj.name;
this->age=obj.age;
this->weight=obj.weight;
this->height=obj.height;
cout<<"copyconstructor called<"<<endl;
    }
  // Behaviour or function 
  void eat(){
    cout<<"He was eating "<<endl;
  }
    void SleeP(){
          cout<<"He was Sleeping "<<endl;
    }
    int GetWeight(){
        return weight;
    }

//     void SetWeight(int w){
//         weight=w;
//     }
// This keyword
void SetWeight(int weight){
        this->weight=weight;
    }
    void print(){
    cout<<this->name<<" "<<this->age<<" "<<this->weight<<" "<<this->height<<" "<<endl;
}
// Destructor 
~Person(){
    cout<<"Destructor called"<<endl;
}
}; 



int main ()
{         //Object creation in static memory 
    // Person Person1(21,50);
    // Person1.age=21;
    // Person1.name="Shivam";

    // Person1.height=5;
    // cout<<Person1.age<<endl;
    // cout<<Person1.height<<endl;
    // cout<<Person1.name<<endl;
    // Person1.SleeP();
    // Person1.eat();
    // Person1.SetWeight(45);
    // cout<<"Shivam weight is "<<Person1.GetWeight();
    // Person Person2;
    // Person Person3;
    // Person Person4(Person2);

// Object Creation in Dynamic memory 
//   Person *Person1=new Person;
//   (*Person1).age=21;
//   (*Person1).name="Bhola";
//   (*Person1).height=5;
//   cout<<(*Person1).age<<endl;
//    cout<<(*Person1).name<<endl;
//     cout<<(*Person1).height<<endl;
//  +++++++++++++++way2 For Dynamic memory access+++++++++++++
//   cout<<Person1->age<<endl;
//    cout<<Person1->name<<endl;
//     cout<<Person1->height<<endl;
//    Person1->eat();
//  Person1->SleeP();
Person Person1;
    Person1.age=21;
    Person1.name="Shivam";

    Person1.height=5;
    
    Person1.SetWeight(45);
    // copy 
    Person Person2=Person1;
    Person2.height=10;
    Person2.name[0]='G';
    Person1.print();
    Person2.print();
    Person *Person3=new  Person();
    // Destructor has not been called for Person3;
    delete Person3;
// Now destructor has been called 
 return 0;
}