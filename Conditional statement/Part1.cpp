#include<iostream>
using namespace std ;
int main(){
    //Making integer input variable 
    int score;
    //Taking input from user 
    cout<<"Enter the score"<<endl;
    cin>>score;
    //if condition 
    if(score>90){
        cout<<"Grade A"<<endl;
    }
    else if(score>80){
        cout<<"Grade B"<<endl;
    }
     else if(score>70){
        cout<<"Grade c"<<endl;
    }
     else if(score>60){
        cout<<"Grade D"<<endl;
    }
     else if(score>50){
        cout<<"Grade E"<<endl;
    }
     else {
        cout<<"Grade F"<<endl;
    }
}