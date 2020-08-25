#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
using namespace std;

int main(){
	int n;	cin >> n;
	string x;	cin >> x;
	long long int num = 0;
	long long int calc[2];
	int popcnt[2];
	long long int tmp;
	int ans;

	for( int i = 0; x.length() < n; i++ ){
		x.insert( x.begin(), '0' );
	}

	for( int i = 0; i < n; i++ ){
		num += (x[i] - '0') * pow( 2, n - i - 1 );
	}

	popcnt[0] = __builtin_popcount(num) + 1;
	popcnt[1] = __builtin_popcount(num) - 1;

	calc[0] = num % popcnt[0];
	calc[1] = num % popcnt[1];

	for( int i = 0; i < n; i++ ){
		ans = 1;
		if( x[i] == '0' ){
			tmp = calc[0] + (long long int)pow( 2, n - i - 1 ) % popcnt[0] + popcnt[0];
			tmp %= popcnt[0];
		}else{
			tmp = calc[1] - (long long int)pow( 2, n - i - 1 ) % popcnt[1] + popcnt[1];
			tmp %= popcnt[1];
		}

		while( tmp != 0 ){
			tmp %= __builtin_popcount(tmp);
			ans++;
		}

		cout << ans << endl;
	}

	return 0;
}
