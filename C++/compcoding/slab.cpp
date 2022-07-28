#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while (T--){
	   int n,tax=0;
		cin>>n;
		if(n>250000)
			tax += ( (min(500000,n)-250000)*5 )/100;
		if(n>500000)
			tax += ( (min(750000,n)-500000)*10 )/100;
		if(n>750000)
			tax += ( (min(1000000,n)-750000)*15 )/100;
		if(n>1000000)
			tax += ( (min(1250000,n)-1000000)*20 )/100;
		if(n>1250000)
			tax += ( (min(1500000,n)-1250000)*25 )/100;
		if(n>1500000)
			tax += ( (n-1500000)*30 )/100;
		cout<<n-tax<<'\n';
	}    
	return 0;
}
