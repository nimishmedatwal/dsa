#include <bits/stdc++.h>

using namespace std;

int main(){

    int T;
    cin>>T;
    while(T--){

        long long N , K , V , S = 0;
        cin>>N>>K>>V;
        for(int j = 1 ; j <= N ; j++){
            int x;
            cin>>x;
            S += x;
        }
        if( (V * (N+K)- S)%K ) puts("-1");
        else{
            long long ans = (V * (N+K)- S)/K;
            if(ans <= 0) ans = -1;
            cout<<ans<<endl;
        }
    }

}