#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
using namespace std;

int main(){
	int n;	cin >> n;
	int ans[n] = {0};
	int tmp;

	for( int x = 1; x <= 100; x++ )
	for( int y = 1; y <= 100; y++ )
	for( int z = 1; z <= 100; z++ ){
		tmp = x*x + y*y + z*z + x*y + x*z + y*z;
		if( tmp <= n )	ans[tmp - 1]++;
	}

	for( int i = 0; i < n; i++ ){
		cout << ans[i] << endl;
	}

	return 0;
}
