#include<iostream>
using namespace std;

// Grade function 
char grade (int marks){
    switch(marks/10){
        case 10:return 'A';break;
         case 9:return 'A';break;
          case 8:return 'C';break;
           case 7:return 'D';break;
            case 6:return 'E';break;
             case 5:return 'F';break;
    }
//     // Ye switch case se bhu chal sakte
//     if(marks>=90){
//         return 'A';
//     }
//     else if(marks>=80){
//         return 'B';

//     }
//     else if(marks>=70){
//         return 'C';
        
//     }
//     else if(marks>=60){
//         return 'D';
        
//     }
//     else{
//         return 'E';
    }
// }


int main ()
{
int marks ;
// Taking input 
cout<<"Enter your marks \n";
cin>>marks;
cout<<"Your grade is " <<grade(marks)<<endl;
 return 0;
}