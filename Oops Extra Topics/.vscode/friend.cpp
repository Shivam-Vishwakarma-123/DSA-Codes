#include<iostream>
using namespace std;

class A{
    private:
    int x=0;
    public:
    A(int _x):x(_x){};
  int getX()  const {
        return x;
    }
    void setX(int _val){
        this->x=_val;
    }
    friend class b;
    friend void print1(const A* &);
};
class b{
    public:
    void print(const A &a){
        // cout<<a.getX()<<endl;
        cout<<a.getX() <<endl;
    }

};
void print1(const A &a){
     cout<<a.getX() <<endl;
}
int main ()
{
    class A a(3);

 b c;
 c.print(a);
  return 0;
}