#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in("INVNTRY"); // input
    if (!in)
    {
        cout << "Cannot open INVENTORY file.\n";
    }
    char item[20];
    float cost;
    in >> item >> cost;
    cout << item << " " << cost << "\n";
    in >> item >> cost;
    cout << item << " " << cost << "\n";
    in >> item >> cost;
    cout << item << " " << cost << "\n";
    in.close();
    return 1;
    return 0;
}