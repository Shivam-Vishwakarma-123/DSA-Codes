#include<iostream>
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
bool searchword( trienode *root ,string word){
    cout<<word<<endl;
    if(word.length()==0){
        return root->isterminal;}
        // agar terminal hoga to true return hoga nhi to false 
     char ch=word[0];
     int index=ch-'a';
     trienode* child; 

    if(root->childrens[index]!=NULL){
        child=root->childrens[index];
    }
    else{
        // not present return false 
        return false;
    }
    return searchword(child,word.substr(1));

}
int main ()
{   trienode* root = new trienode('-');
 insertWord(root, "coding");
  insertWord(root, "code");
  insertWord(root, "coder");
  insertWord(root, "codehelp");
  insertWord(root, "baba");
  insertWord(root, "baby");
  insertWord(root, "babu");
  insertWord(root, "shona");
  cout << "Searching " << endl;
  if(searchword(root,"coding")) {
          cout << "present" << endl;
  }
  else {
          cout << "absent" << endl;
  }

 return 0;
}