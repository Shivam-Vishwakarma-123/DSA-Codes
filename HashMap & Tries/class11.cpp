#include<iostream>
#include<unordered_map>
using namespace std;
// ++++++++++++++++++++CircularLL Through Map++++++++++
// bool circularcheckonLL(Node*head){
//     unordered_map<Node*,bool >vis;
//     Node *temp=head;
//     while(temp!=NULL){
//         if(vis.find(temp)!=vis. end()){
//             // entry create kar do 
//             vis[temp]=true;
//         }
//         else{
//             return false;
//         }
//     }
//     return true ;
// }

int main ()
{
    // +++++++++++++++count the character+++++++++++++
string s="Thiruvanthapuram";
unordered_map<char ,int>m;
for(int i=0;i<s.length();i++){

    char ch=s[i];
    m[s[i]]++;
}
for(auto i:m){
    cout<<i.first <<" "<<i.second<<endl;
}



 return 0;
}