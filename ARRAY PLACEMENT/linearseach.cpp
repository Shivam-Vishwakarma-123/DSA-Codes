#include<iostream>
using namespace std;
bool findkey(int arr[],int size ,int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
    
}

int main ()
{
int a[5]={1,2,3,4,5};
cout<<"Enter the key "<<endl;
int key;
cin>>key;
if(findkey(a,5,key)){
    cout<<"Mil gaya be ";
}
else{
    cout<<"Kis duniya ka number daale ho "<<endl;
}
 return 0;
}
