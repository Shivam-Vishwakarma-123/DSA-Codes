#include<iostream>
using namespace std;
//Reverse a string 
void reversestring(string &str,int start,int end){
if(start==end){
    return;
}

    swap(str[start],str[end]);


return reversestring(str,start+1,end-1);
}

int main ()
{
    string str("abcddde");
    int end= str.size()-1;
    reversestring(str,0,end);
    cout<<str<<endl;
    cout<<;

 return 0;
}



