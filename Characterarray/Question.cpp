#include<iostream>
#include<string.h>
using namespace std;
int getlength(char ch[]){
//    question-2
//  Input: s = "daabcbaabcbc", part = "abc"
// Output: "dab"
// Explanation: The following operations are done:
// - s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
// - s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
// - s = "dababc", remove "abc" starting at index 3, so s = "dab".
// Now s has no occurrences of "abc".
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos=s.find(part);
        while(pos!=string::npos){
            s.erase(pos,part.length());
            pos=s.find(part);
        }
        return s;
    }
};
    int i=0,length=0;
    while(ch[i]!='\0'){
        length++;
        i++;
    }
    return length;
}
// Question-> To reverse a string 

void reverse_a_string(char ch[],int size)
{
    int i=0,j=size-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;

    }
}
// Question ->check a given string is palimdrome or not 
bool palimdromecheck(char ch[],int size){
     int i=0,j=size-1;
     while(i<=j){
       if (ch[i]!=ch[j]){
        return false;
       }
else {
    i++ ;j--;
}

     }
     return true;
}
// Question -> remove spaces with @
void remove_space_with_(char ch[]){
    for(int i=0;i<strlen(ch);i++){
        if (ch[i]==' '){
            ch[i]='@';
        }
    }
}
// Question -> from lower case to upper case 
void lower_to_uppercase(char ch[]){
    for(int i=0;i<strlen(ch);i++){
if('a'<=ch[i]&&ch[i]<='z'){
    ch[i]=ch[i]-'a'+'A';
}
else{
    ch[i]=ch[i];
}
    }
}
int main ()


{
char ch[10];
 cin.getline(ch,50);
// reverse_a_string(ch,strlen(ch));
// cout<<palimdromecheck(ch,strlen(ch));
// remove_space_with_(ch);
// cout<<ch;
lower_to_uppercase( ch);
cout<<ch;
 return 0;
}