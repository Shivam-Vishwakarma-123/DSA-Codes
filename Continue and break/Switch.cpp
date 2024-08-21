#include<iostream>
using namespace std;
int main ()
{
// Intialising variable 

int day;
cout<<"Enter the day no you want to print "<<endl;
cin>>day;
// switch case 
// switch(day){
//     case 1:
//     cout<<"Monday"  <<endl;
//     break;
//     case 2:
//     cout<<"Tuesday"  <<endl;
//     break;
//     case 3:
//     cout<<"Wednesday"  <<endl;
//     break;
//     case 4:
//     cout<<"Thursday"  <<endl;
//     break;
//     case 5:
//     cout<<"friday"  <<endl;
//     break;
//     case 6:
//     cout<<"saturday"  <<endl;
//     break;
//     default : //Kuch bhi true nhi to default chalega 
//     cout<<"Sunday"<<endl;
//     break;
// }
// WEithout break 
switch(day){
    case 1:
    cout<<"Monday"  <<endl;
    
    case 2:
    cout<<"Tuesday"  <<endl;
    
    case 3:
    cout<<"Wednesday"  <<endl;
  
    case 4:
    cout<<"Thursday"  <<endl;
    
    case 5:
    cout<<"friday"  <<endl;
    
    case 6:
    cout<<"saturday"  <<endl;
    
    default : //Kuch bhi true nhi to default chalega 
    cout<<"Sunday"<<endl;
    
}
// output_ input 3
// Wednesday
// Thursday
// friday
// saturday
// Sunday



//Very Important Question 
// can we use continue in switch 
// We can't use continue statement with 'switch','lablel' as it is not compatible with them.


//can we give character to switch case

// Because a character is nothing but an Ascii value, 
// it is perfectly valid to write it in switch expression and case label

 return 0;
}