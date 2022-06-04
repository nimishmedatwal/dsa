#include <iostream>
using namespace std;

class Time{
    private:
        int hour,minute,second;
    public:
        Time(int h=0,int m=0,int s=0){
            hour=h;
            minute=m;
            second=s;
        }
        Time operator + (Time const &t2){
            Time t3;
            t3.hour=hour+t2.hour;
            t3.minute=minute+t2.minute;
            t3.second=second+t2.second;
            return t3;
        }
        void print(){
            cout<<hour<<" : "<<minute
        }
};