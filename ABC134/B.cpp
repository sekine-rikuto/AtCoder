#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n,d;
	int ans;
	
	cin >> n >> d;
	
	ans=n/(2*d+1);
	if(n%(2*d+1))	ans++;
	
	cout << ans << endl;
	
	return 0;
}