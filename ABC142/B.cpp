#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n,k;
	int ans = 0;
	cin >> n >> k;

	int h[n];
	for( int i=0; i<n; i++ )	cin >>h[i];

	for( int i=0; i<n; i++ )	if( h[i] >= k )	ans++;
	
	cout << ans << endl;

	return 0;
}
