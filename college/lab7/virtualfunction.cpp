#include <iostream>

using namespace std;

class Virt{
    public:
        virtual void dummy() const = 0;
        virtual void prin(){
            cout << "Hello" << endl;
        }
};

class Eg: public Virt{
    public:
    void prin();
};
void Eg::prin(){
    cout << "Hello";
}

int main(){
    Eg e;
    e.prin();
    return 0;
}