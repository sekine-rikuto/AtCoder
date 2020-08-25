#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
using namespace std;

int main(){
	int n, k;	cin >> n >> k;
	int p[n];
	for( int i = 0; i < n; i++ ){
		cin >> p[i];
	}
	int sum = 0;

	sort( p, p + n );

	for( int i = 0; i < k; i++ ){
		sum += p[i];
	}

	cout << sum << endl;

	return 0;
}
