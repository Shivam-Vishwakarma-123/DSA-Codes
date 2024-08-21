#include<iostream>
using namespace std;
int main ()
{
int a[10]={0,0,0,1,1,1,1,0,0,0};
int one=0,zero=0;
for (int i=0;i<10;i++){
    if (a[i]==1){
        one++;    }
        else if (a[i]==0){
            zero++;
}


}
cout<<"The no of zero is "<<zero<<endl;
cout<<"The no of one is "<<one<<endl;
 return 0;
}