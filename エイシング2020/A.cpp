#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
using namespace std;

int main(){
	int l, r, d;	cin >> l >> r >> d;
	int ans = 0;

	for( int i = l; i <= r; i++ ){
		if( i % d == 0 )	ans++;
	}

	cout << ans << endl;

	return 0;
}
