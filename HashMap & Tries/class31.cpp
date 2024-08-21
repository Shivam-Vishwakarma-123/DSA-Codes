#include<iostream>
#include<vector>
using namespace std;
class trienode{
    public:
    char data;
    // 26 size ka array bana diya trienode* ka 
    trienode* childrens[26];
    bool isterminal;
  trienode(char data){
    this->data=data;
    for(int i=0;i<26;i++){
        childrens[i]=NULL;
    }
    this->isterminal=false;

  }

};
void insertWord( trienode *root ,string word){
    // base case
    // Agar word ki length 0 to uske upar level par root node termainal hogi 

    if(word.length()==0){
       root->isterminal=true;
     return ;
    }
    char ch=word[0];
    int index=ch-'a';
    trienode* child; 
    // agar root if
    if(root->childrens[index]!=NULL){
        child=root->childrens[index];
    }
    else{
        // create node 
        child=new trienode(ch);
          root->childrens[index]=child;
    }
    // recutsion sambhla dega
    insertWord(child,word.substr(1));
}

 vector<vector<string>> getsuggestion(trienode *root,string input){
//    traverse the input string 
for(int i=0;i<input.size();i++){
    char lastch=input[i];
}

 }

int main ()
{ vector<string>v;
v.push_back("love");
v.push_back("lover");
v.push_back("loving");
v.push_back("lane");
v.push_back("last");
v.push_back("lost");
v.push_back("Lord");
 string input ="lovi";
 trienode*root=new trienode('-');
 for(int i=0;i<v.size();i++){
    insertWord(root, v[i]);
 }
 vector<vector<string>> ans=getsuggestion(root,v);


 return 0;
}