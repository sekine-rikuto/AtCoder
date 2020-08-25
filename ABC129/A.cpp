#include <bits/stdc++.h>

#define REP(i,n) for(int i=0,len=(n); i<len; i++)
#define all(x) (x).begin(),(x).end()

using namespace std;

int main(){
	int p,q,r;
	int ans;
	
	cin >> p >> q >> r;
	
	ans=1000;
	ans=min(ans,p+q);
	ans=min(ans,p+r);
	ans=min(ans,q+r);
	
	cout << ans << endl;
	
	return 0;
}