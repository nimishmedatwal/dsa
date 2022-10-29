#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    if(n<=2)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	    long long int diff[n-1];
	    sort(a,a+n);int flag=0;
	    for(int x=0;x<n-1;x++)
	    {
	        diff[x]=abs(a[x+1]-a[x]);
	        if(diff[x]!=diff[x-1] && x>0)
	        {
	            flag=1;
	        }
	    }
	    if(flag==1)
	    {
	      map<int,int>m;
	    
	     for(int i=0;i<n-1;i++)
	      {
	        m[diff[i]]++;
	       }
	      int key=0,value=0;
	      for(auto &x: m)
	       {
	        if(x.second>value)
	        {
	            value=x.second;
	          }
	       }
	      cout<<value<<endl;
	       
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	    
	}
	}
	return 0;
}