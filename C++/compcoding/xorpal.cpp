#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while (t--){
        cout<<"testcase"<<endl;
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count = 0;
        for (int i=0;i<(n/2+1);i++){
            if(arr[i]!=arr[n-i-1]){
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
