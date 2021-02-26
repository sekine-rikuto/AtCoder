#include <bits/stdc++.h>
//#include <atcoder/all>

typedef long long ll;
using namespace std;
//using namespace atcoder;

#define _overload(_1, _2, _3, name, ...) name
#define _rep(i, n) for(ll i = 0; i < (ll)n; i++)
#define _reps(i, s, n) for(ll i = (ll)(s); i < (ll)n; i++)
#define REP(...) _overload(__VA_ARGS__, _reps, _rep,)(__VA_ARGS__)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

ll modpow(ll x, ll n, ll m){
	ll r = 1;
	while( n > 0 ){
		if( n & 1 )	r = x * r % m;
		x = x * x % m;
		n >>= 1;
	}
	return r;
}

int main(){
	ll a, b, c;
	cin >> a >> b >> c;

	ll low_dig = a % 10;
	vector<ll> table;
	ll num = low_dig;

	REP(i, 10){
		table.push_back(num);
		num *= low_dig;
		num %= 10;
	}

	vector<ll> cpy;
	ll len;

	cpy = table;
	sort( all(cpy) );
	UNIQUE( cpy );
	len = cpy.size();

	ll calc = modpow(b, c, len);
	calc = (calc + len - 1) % len;

	cout << table[calc] << endl;

	return 0;
}
