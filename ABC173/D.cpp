#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
using namespace std;

int main(){
	int n;	cin >> n;
	long long int a[n];
	for( int i = 0; i < n; i++ ){
		cin >> a[i];
	}
	long long int ans;

	sort( a, a + n, greater<long long int>() );

	ans = 0;
	int j = 0;
	for( int i = 0; i < n - 1; i++ ){
		ans += a[j];
		if( i % 2 == 0 )	j++;
	}

	cout << ans << endl;

	return 0;
}
