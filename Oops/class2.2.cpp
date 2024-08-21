#include<iostream>
using namespace std;
// **************Function Overloading**
class math {
    public:
    int sum(int a ,int b){
        cout<<"I am calling First signature"<<endl;
        return a+b;
    }
    int sum(int a ,int b,int c ){
        cout<<"I am calling Second signature"<<endl;
        return a+b+c;

    }
    int sum(int a ,float b){
        cout<<"I am calling Third signature"<<endl;
        return a+b;
    }
};
// ************Operator Overloading****
 class Param{
public:
int value;
void operator+(Param &obj){
     // current object given by this_>value
    int value1=this->value;
   // Input parameter given by obj.value
    int value2=obj.value;
    cout<<"Output:"<<value1+value2<<endl;
}
 };

int main ()
{ math a;
cout<<a.sum(5,2)<<endl;
 cout<<a.sum(5,1,2)<<endl;
 cout<<a.sum(5,2.2f)<<endl;
//  **************Parameter overloading ******************
Param ob1,obj2;
 ob1.value=5;
 obj2.value=10;
 ob1+obj2;

     
 return 0;
}