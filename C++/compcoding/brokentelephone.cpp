#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int count=0;
        for (int i=0;i<n-1;i++){
            if (arr[i+1]!=arr[i] && arr[i]==arr[i+2]){
                count++;
            }
            if (arr[i+1]!=arr[i] && arr[i]!=arr[i+2]){
                count=count+2;
            }
        }
        cout << count<< endl;
    }
}