#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream hello("Simplefile.txt");
    hello << "Hua hua  hoo";
    hello.close();
}
