#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n-1];
	int ans[n] = {0};
	for( int i=0; i<n-1; i++ )	cin >> a[i];

	for( int i=0; i<n-1; i++ )	ans[ a[i]-1 ]++;

	for( int i=0; i<n; i++ )	cout << ans[i] << endl;

	return 0;
}
