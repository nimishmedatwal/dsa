#include <bits/stdc++.h>
using namespace std;
void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    dec(n - 1);
}
int inc(int n){
    if (n==0){
        return 0;
    }
    int prev=inc(n-1);
    cout<<n<< " ";
    return n;
}
int main()
{

    inc(7);
    return 0;
}
//  6