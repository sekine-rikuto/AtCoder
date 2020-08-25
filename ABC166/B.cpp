#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n, k;	cin >> n >> k;
	int d;
	int num;
	bool list[n];
	int ans = 0;

	for( int i = 0; i < n; i++ )	list[i] = false;

	for( int i = 0; i < k; i++ ){
		cin >> d;
		for( int j = 0; j < d; j++ ){
			cin >> num;
			list[num-1] = true;
		}
	}

	for( int i = 0; i < n; i++ ){
		if( !list[i] )	ans++;
	}

	cout << ans << endl;

	return 0;
}
