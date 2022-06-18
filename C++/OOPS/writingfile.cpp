#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char ch;
    ifstream fin("MySecrets.txt");
    ofstream fout("CopyMySecrets.txt");
    while (!fin.eof())
    {
        fin.get(ch);
        fout << ch;
        cout << ch << ".";
    }
    fin.close();
    fout.close();
}
