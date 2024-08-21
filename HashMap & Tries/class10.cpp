#include<iostream>
#include<unordered_map>


using namespace std;
int main ()
{
unordered_map<string ,int>m;
// insertion way 
pair<string,int>p=make_pair("Alto",3);
m.insert(p);
// way2 
m["KiaSeltos"]=25;
m["Fortuner"]=20;
// Access
cout<<m.at("KiaSeltos")<<endl;
// way 2 
cout<<m["Fortuner"]<<endl;
// to check given key is present or not 
cout<<m.count("Alto")<<endl;
cout<<m.count("Tata");
for(auto i:m){
    cout<<i.first<<"->"<<i.second<<endl;
}
 return 0;
}