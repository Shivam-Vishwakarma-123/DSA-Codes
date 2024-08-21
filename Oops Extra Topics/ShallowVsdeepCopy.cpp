#include<iostream>
using namespace std;
class abc{
    public:
    int x;
    int *y;
    // Initiasation list 
    abc(int _x,int _y):x(_x),y(new int (_y)){};
    void print(){
        cout<<"Content of x="<<x<<endl<<"Address of y="<<y<<endl<<"Content of y="<<*y<<endl;
    }
    // // Bydefault this constructor is called 
    // abc(const abc &obj){
    //     x=obj.x;
    //      y=obj.y;
    // }
    // smart contructor DeeP copy 
     abc(const abc &obj){
        x=obj.x;
         y=new int(*obj.y);
    }
    ~abc(){
        delete y;

    }

};
int main ()
{ 
    
// abc a (1,2);

// abc b=a;
// cout<<"Printing for b "<<endl;
// *(b.y)=20;

// b.print();
// cout<<"Printing for a "<<endl;
// a.print();
// // B me change kiya to a me ho gaya 

// Double free 
abc *a= new abc (1,2);

abc b=*a;
delete a;

b.print();
 return 0;
}