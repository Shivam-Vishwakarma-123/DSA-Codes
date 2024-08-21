#include<iostream>
using namespace std;



int main ()
{
// 2 d array intialisation 
// Way1
int a[3][3]={ {1,2,3},{3,4,5},{6,7,8}};
int b = (sizeof(a)/sizeof(int));
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<" "<<a[i][j];
    }
    cout<<endl;
}
// Way 2 Taking input from user 
int c[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
    cout<<endl;
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<" "<<c[i][j];
    }
    cout<<endl;
}


 return 0;
}