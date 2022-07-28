#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int n;
        cin>>n;
        int arr[n];
        for (int j=0;j<n;j++){
            cin>>arr[j];
        }
        int num=1;
        while (n--){
            int count = 0;
            for (int j=0;j<n;j++){
                if (arr[j]==num) count++;
                if (count ==2){
                    num++;
                    break;
                }
            }
        }
        cout<<num+1<<endl;
    }
    return 0;
}
