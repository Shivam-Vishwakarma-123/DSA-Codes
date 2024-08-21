#include<iostream>
using namespace std;
class box {
 int width ;
 box(int w):width(w){};
 public:
 int getWidth(){
    return width;
 }
 void setWidth(int w){
    width=w;
 }
 friend class Boxfactory;

};
class Boxfactory{
    int count;
    public:
    // ISSS function return type Box namak object he 
    box getAbox(int _w){
        return box(_w);
    }
};

int main ()
{
Boxfactory bfact;
box b=bfact.getAbox(5);
cout<<b.getWidth();
 return 0;
}