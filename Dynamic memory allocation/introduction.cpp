#include<iostream>
using namespace std;

int main ()
{
    // Dynamic memory allocation 
    // Creation of variable with different data types
    int *a = new int;
    char *c = new char;
    string *d = new string;

    // Assigning values to the dynamically allocated memory
    (*a) = 5;
    (*c) = '2';
    (*d) = "shiva";

    // Printing the values
    cout << (*a) << endl;
    cout << (*c) << endl;
    cout << (*d) << endl;

    // // Deallocating the memory
    // delete []a;
    // delete []c;
    // delete []d;

    // // Trying to print the values after deletion (This is undefined behavior)
    // cout << (*a) << endl;
    // cout << (*c) << endl;
    // cout << (*d) << endl;
    // Creation of 1 d array 
    int *crr=new int[4];
    

// Creation of 2d array 
int rows=8;
int col=3;
int **brr=new int* [rows];
for(int i=0;i<8;i++){
    brr[i]=new int[col];
}
for (int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
}
// Deallocation of one d array 
delete []crr;


// Deallocation of 2 d array 
// step -1
for(int i=0;i<rows;i++){
    delete brr[i];
}
// step 2
delete []brr;

    return 0;
}
