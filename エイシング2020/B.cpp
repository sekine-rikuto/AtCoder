#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
using namespace std;

int main(){
	int n;	cin >> n;
	int ans = 0;
	int tmp;

	for( int i = 0; i < n; i++ ){
		cin >> tmp;

		if( i % 2 == 0 && tmp % 2 == 1 ){
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
