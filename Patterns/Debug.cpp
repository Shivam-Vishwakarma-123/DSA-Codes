#include<iostream>
using namespace std ;
// int  main() {
	// int i=0;
	// i=i+1;
	// cout<<i;
	// i=i+1;
	// cout<<++i;

    // Question 2
//     // int  main() {
// 	// short i=2300, j=4322;
// 	// cout<<"i+j="<<(i+j);

// } Queston 3
// Find perimeter of a rectangle.
// #include<stdio.h>
// int  main() {
//     float l, b;
//     float P = 2*(l+b);
//     printf("Perimeter=%f", P);
// }

// Queston 3 
// Print solid square pattern.
int main() {
		int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
