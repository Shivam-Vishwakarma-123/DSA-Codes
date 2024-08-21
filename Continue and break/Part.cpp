#include<iostream>
using namespace std;
int main ()
{// Tiutorial
// Significance of break statement 
// Jab bhi break keyword aata he tab uss particular scope se bahar 
// yani loop se bahar 

// Tiutorial
for(int i=1;i<5;i++){
    cout<<i<<endl;

break;
// Output 1 sirf ek hi baar chala loop
}


for(int i=0;i<5;i++){
    cout<<i<<endl;
if(i==2)
break;
// Output =0
// 1
// 2
}
cout<<"  "<<endl;

// Continue statement mtb jab hame kisi particular statement ko skip karna to continue 
// ka upyog karte mtb jese hi continue aaya uske baad ka code execute nhi hoga nxt iteration 
// me pahuch jayega 

// Tiutorial
for(int i=0;i<5;i++){
    
    continue;//Isme sari hi iteration skip ho gayi 
    cout<<i<<endl;
    // Output none 
}

for(int i=0;i<5;i++){
    if(i==2)
    continue;
    cout<<i<<endl;
    // Output
// {{//     0
// 1
// 3
// 4}}
}

 return 0;}
