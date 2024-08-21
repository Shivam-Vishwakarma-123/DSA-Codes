// 1--> Declaration by user size and input 



// #include<iostream>
// #include<vector>
// using namespace std;
// int main ()
// {
//     // Declaration of 2d vector 
//     int r;
//     int c;
//     cout<<"Enter no of rows and column "<<endl;
//     cin>>r>>c;
//     vector<vector<int> > a (r,vector<int>(c));
//     // Where r is the size of row and c is the size of column
//     // Taking input 
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//            cin>>a[i][j];

//         }
        
//     }

//     // For printing array value 
// for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//            cout<<" "<< a[i][j];

//         }
//         cout<<endl;
//     }
    

//  return 0;
// }

// 2--> Declarion of 2 d vector intialise by the same value 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main ()
// {
// int r;
//     int c;
//     cout<<"Enter no of rows and column "<<endl;
//     cin>>r>>c;
//     // Intialise vector having all value equal to 69
//     vector<vector<int> > a (r,vector<int>(c,69));
//     // Printing vector 
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//            cout<<" "<< a[i][j];

//         }
//         cout<<endl;
//     }
    
//  return 0;
// }

// 3 --> Explicit declaration 
#include<iostream>
#include<vector>
using namespace std;
int main ()
{

   
    vector<vector<int> > brr ;
    // Pushing element in a given array 
    vector<int>a{1,2,3};
    vector<int>b{4,5,6};
    
    vector<int>c{7,8,9};
    brr.push_back(a);
    brr.push_back(b);
    brr.push_back(c);
    
    // Printing vector 
    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = 0; j < brr[0].size(); j++)
        {
           cout<<" "<<brr[i][j];
        }
        cout<<endl;
    }
    
    
 return 0;
}