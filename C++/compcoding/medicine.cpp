#include<bits/stdc++.h>

using namespace std;


int main() {
   int t;
   cin>>t;
   while(t--)
   {
       string str;
       cin>>str;
       int yr=stoi(str.substr(0,4));
       int mth=stoi(str.substr(5,2));
       int dys=stoi(str.substr(8,2));
       int count=0;
       if(mth==2)
       {
           if(yr%4==0 && yr!=1900)
           {
               
               if(dys%2==0)
               {
                   int c=29-dys+1;
                     count=(c/2); 
                     cout<<count<<endl;
               }
               else
               {
                    int c=29-dys+1;
                     count=(c/2); 
                     cout<<count+1<<endl;
               }
           }
           else
           {
               if(dys%2==0)
               {
                   int c=28-dys+1;
                     count=(c/2)+1; 
                     cout<<count+15<<endl;
               }
               else
               {
                    int c=28-dys+1;
                     count=(c/2); 
                     cout<<count+16<<endl;
               }
           }
       }
       else
       {
           if(dys%2==0)
           {
               int c=30-dys+1;
               count=(c/2)+1;
               if(mth==2 || mth==4 || mth==6 || mth==9 || mth==11)
               {
                  count+=15;
                  cout<<count<<endl;
               }
               else
               {
                   cout<<count<<endl;
               }
           }
           else
           {
               int c=30-dys+1;
                count=(c/2);
               if(mth==2 || mth==4 || mth==6 || mth==9 || mth==11)
               {
                  count+=16;
                  cout<<count<<endl;
               }
               else
               {
                   cout<<count+1<<endl;
               }
           }
       }
   }
	return 0;
}