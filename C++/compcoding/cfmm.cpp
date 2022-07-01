#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s;
        string temp;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            s+=temp;
        }
        // sort(s.begin(),s.end());
        
        // cc o d h ee f
        int countc =0;
        int counto =0;
        int countd =0;
        int counth =0;
        int counte =0;
        int countf =0;
        for ( int i = 0; i < s.length(); i++)
        {
            if(s[i]=='c')
                countc++;
            else if(s[i]=='o')
                counto++;
            else if(s[i]=='d')
                countd++;
            else if(s[i]=='h')
                counth++;
            else if(s[i]=='e')
                counte++;
            else if(s[i]=='f')
                countf++;
        }
        countc=countc/2;
        counte=counte/2;
        int m=min( countc,min(counto,min(countd,min(counth,min(counte,countf)))));
        cout<<m<<endl;
    }
}