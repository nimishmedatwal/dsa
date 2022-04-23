#include <iostream>
using namespace std;
class Test
{
    int i;
    int m;

public:
    void setData(int a) { i = a; }
    void show() { cout << "i = " << i << endl; }
};
int main()
{
    
    Test *t = new Test[2];

    t->setData(44);
    (t + 1)->setData(88);
    t->show();
    (t + 1)->show();
    delete[] t;      

}