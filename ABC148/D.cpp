#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n,i,j,ans;
	cin >> n;
	int a[n];
	for( i=0; i<n; i++ )	cin >> a[i];

	j=1;
	ans=0;
	for( i=0; i<n; i++ ){
		if( a[i] != j )	ans++;
		else			j++;
	}
	if( ans == n )	ans = -1;

	cout << ans;

	return 0;
}
