#include <iostream>
using namespace std;
class A
{
    int i;

public:
    A(int a)
    {
        i = a;
    }
    void show()
    {
        cout << "i = " << i << endl;
    }
};
int main()
{
    A a(19);     // implicit call
    A b = A(20); // explicit call
    a.show();
    b.show();
}
