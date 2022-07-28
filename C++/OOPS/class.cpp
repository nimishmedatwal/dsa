#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    string gender;
    student(string s,int a , int g){
        name=s;
        age=a;
        gender=g;
    }
    void printinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age :" <<age<<endl;
        cout<<"Gender : "<<gender<<endl;
    }

};
int main(){

    student a("Nimish",18,0);
    student c=a;
    c.printinfo();
    return 0;
    }