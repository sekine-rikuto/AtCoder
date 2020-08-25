#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define REP(i, n) for(ll i = 0; i < (ll)n; i++)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

int main(){
	ll x, k, d;	cin >> x >> k >> d;

	x = abs(x);

	if( k - x / d < 0 ){
		cout << x - k * d << endl;
	}else{
		k -= x/d;
		x %= d;

		if( k % 2 == 0 ){
			cout << x << endl;
		}else{
			cout << abs(x - d) << endl;
		}
	}


	return 0;
}
