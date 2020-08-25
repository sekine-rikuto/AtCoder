#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n,k,m;
	cin >> n >> k >> m;
	int a[n-1];
	for( int i=0; i<n-1; i++ )	cin >> a[i];
	int sum=0;

	for( int i=0; i<n-1; i++ )	sum+=a[i];

	if( m*n - sum <= k ){
		if( m*n - sum < 0 )	cout << 0 << endl;
		else	cout << m*n - sum << endl;
	}else{
		cout << -1 << endl;
	}

	return 0;
}
