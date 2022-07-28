#include <iostream>
using namespace std;
class time{
    private:
    int hour,sec;
    public:
    time(int h=0,int s=0){
        hour=h;
        sec=s;
    }
    time operator+(time const &t2){
        time t3;
        t3.hour=t2.hour+hour;
        t3.sec=t2.sec+sec;
        return t3;
    }
    void show(){
        cout<<"Hour "<<hour<<" Sec "<<sec;
    }
};

int main(){
    time t1(14,2);
    time t2(3,4);
    time t3=t1+t2;
    return 0;
}
