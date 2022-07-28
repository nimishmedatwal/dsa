// 1
// 3
// 1110001101
// 1010101011
// 0000000011
#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    // Initializing base value to 1, i.e 2^0
    int base = 1;
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    cout<<dec_value<<endl;
    return dec_value;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=binaryToDecimal(a[i]);
        }
        for (int i = 1; i < n; i++)
        {
            a[0]=b[0]^b[i];
        }
        int count=0;
        string s=to_string(a[0]);
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='1'){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}