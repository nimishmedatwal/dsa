#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;
    void printinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age :" <<age<<endl;
        cout<<"Gender : "<<gender<<endl;
    }
};
int main(){

    student arr[3];
    for (int i=0;i<3;i++){
        cin>>arr[i].name;
        cin>>arr[i].age;
        cin>>arr[i].gender;
        arr[i].printinfo();
    }
    return 0;
}