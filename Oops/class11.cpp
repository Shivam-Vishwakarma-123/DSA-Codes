#include<iostream>
#include<string>
using namespace std;

// class in stack memory 
class Animal{
public:
int age;
string name;
Animal();
Animal(int age,string name ){
 this->age=age;
 this->name=name;
}
};

int main(){
    Animal dog;
   

    cout<<dog.name<<endl;
}