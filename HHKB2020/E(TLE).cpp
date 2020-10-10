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

ll mod_pow(ll x, ll n){
	ll res = 1;
	while( n > 0 ){
		if( n & 1 )	res = res * x % MOD;
		x = x * x % MOD;
		n >>= 1;
	}
	return res;
}

// ケース1つだけTLE
int main(){
	ll h, w;	cin >> h >> w;
	string s[h];
	ll clear = 0;
	REP(i, h){
		cin >> s[i];

		REP(j, w){
			if( s[i][j] == '.' )	clear++;
		}
	}
	ll ans, cnt, tmp;

	ans = mod_pow(2, clear) * clear % MOD;

	REP(i, h) REP(j, w){
		if( s[i][j] == '#' )	continue;

		cnt = 1;
		tmp = 1;
		while( i - tmp >= 0 && s[i-tmp][j] == '.' ){
			cnt++;
			tmp++;
		}
		tmp = 1;
		while( i + tmp < h && s[i+tmp][j] == '.' ){
			cnt++;
			tmp++;
		}
		tmp = 1;
		while( j - tmp >= 0 && s[i][j-tmp] == '.' ){
			cnt++;
			tmp++;
		}
		tmp = 1;
		while( j + tmp < w && s[i][j+tmp] == '.' ){
			cnt++;
			tmp++;
		}

		ans -= mod_pow(2, (clear - cnt));
		if( ans < 0 )	ans += MOD;
	}

	cout << ans << endl;

	return 0;
}
