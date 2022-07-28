#include <iostream>
#include <algorithm>
#include <string>
#include <assert.h>
using namespace std;
 
 
 
long long readInt(long long l,long long r,char endd){
	long long x=0;
	int cnt=0;
	int fi=-1;
	bool is_neg=false;
	while(true){
		char g=getchar();
		if(g=='-'){
			assert(fi==-1);
			is_neg=true;
			continue;
		}
		if('0'<=g && g<='9'){
			x*=10;
			x+=g-'0';
			if(cnt==0){
				fi=g-'0';
			}
			cnt++;
			assert(fi!=0 || cnt==1);
			assert(fi!=0 || is_neg==false);
			
			assert(!(cnt>19 || ( cnt==19 && fi>1) ));
		} else if(g==endd){
			assert(cnt>0);
			if(is_neg){
				x= -x;
			}
			assert(l<=x && x<=r);
			return x;
		} else {
			assert(false);
		}
	}
}
string readString(int l,int r,char endd){
	string ret="";
	int cnt=0;
	while(true){
		char g=getchar();
		assert(g!=-1);
		if(g==endd){
			break;
		}
		cnt++;
		ret+=g;
	}
	assert(l<=cnt && cnt<=r);
	return ret;
}
long long readIntSp(long long l,long long r){
	return readInt(l,r,' ');
}
long long readIntLn(long long l,long long r){
	return readInt(l,r,'\n');
}
string readStringLn(int l,int r){
	return readString(l,r,'\n');
}
string readStringSp(int l,int r){
	return readString(l,r,' ');
}

int T;
int n,m;
string s;
string ty;

int main(){
	//freopen("00.txt","r",stdin);
	//freopen("00o.txt","w",stdout);
	T=readIntLn(1,100);
	while(T--){
		bool weak=false,invalid=false;
		n=readIntSp(2,50);
		m=readIntLn(2,50);
		for(int i=0;i<n;i++){
			ty=readStringSp(1,10);
			assert(ty=="correct" || ty=="wrong");
			s=readStringLn(m,m);
			bool found=false;
			for(int i=0;i<m;i++){
				assert(s[i]=='0' || s[i]=='1');
			}
			for(int i=0;i<m;i++){
				if(s[i]=='0'){
					found=true;
				}
			}
			if(ty=="correct" && found) invalid = true;
			if(ty=="wrong" && !found) weak = true;
		}
		if(invalid){
			cout<<"INVALID"<<endl;
		} else if(weak){
			cout<<"WEAK"<<endl;
		} else {
			cout<<"FINE"<<endl;
		}
	}
	assert(getchar()==-1);
}