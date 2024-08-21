#include<iostream>
#include<string>
// remove all occurence of  substring in a given array 
using namespace std;
void removeOccurence(string str,string &part){
    int found=str.find(part);
    if(found!=string::npos){ 

      str=str.substr(0,found) +str.substr(found+3,str.size());
      removeOccurence(str,part);
    }
    // Base condition 
    else{
        return;
    }
}
string remove(string s,string part){
    removeOccurence(s,part);
    return s;
}

int main ()
{
string str ="daabcbaabcbc";
cout<< remove(str,"abc");

 return 0;
}