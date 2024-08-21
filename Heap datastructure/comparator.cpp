#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class student{
    public:
    string name;
    int roll;
    int marks;
    student(string name ,int roll,int marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;

    }

};


bool compare(student a ,student b){
    return a.marks<b.marks;
}
int main ()
{
vector<student>sheet;
student s1("Shivam",69,200),s2("yash",84,150);
sheet.push_back(s1);
sheet.push_back(s2);
sort(sheet.begin(),sheet.end(),compare);
cout<<sheet.size();
for(int i=0;i<sheet.size();i++){
    cout<<sheet[i].name<<" "<<sheet[i].marks<<endl;
}

 return 0;
}