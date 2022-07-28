#include <iostream>
#include <string.h>
using namespace std;
class String
{
    char *name;
    int length;

public:
    String()
    {
        length = 0;
        name = new char[length + 1];
    }
    String(char *s)
    {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }
    void display();
};

void String::display()
{
    cout << name << "\n";
}

int main()
{
    char *s = "abcedf";
    String name1(s);
    name1.display();
}