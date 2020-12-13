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

int main(){
	ll n, m;
	cin >> n >> m;

	ll a[max(n, m)], b[max(n, m)];

	if( n > m ){
		REP(i, n){
			cin >> b[i];
		}
		REP(i, m){
			cin >> a[i];
		}

		n ^= m;
		m ^= n;
		n ^= m;
	}else{
		REP(i, n){
			cin >> a[i];
		}
		REP(i, m){
			cin >> b[i];
		}
	}

	if( n == m ){
		ll ans = 0;
		REP(i, n){
			if( a[i] != b[i] )	ans++;
		}
		cout << ans << endl;
		return 0;
	}

	ll diff = m-n;
	ll ans = diff;
	REP(i, diff){
		ll select = 0;
		ll select_cnt = 10000;
		REP(j, m){
			ll cnt = 0;
			ll pos = 0;

			REP(k, n){
				if( b[pos] == -1 )	pos++;
				if( k == j )	pos++;
				if( a[k] != b[pos] )	cnt++;
				pos++;
			}

			if( cnt < select_cnt ){
				select_cnt = cnt;
				select = j;
			}
		}

		b[select] = -1;
		m--;

		if( i == diff-1 )	ans += select_cnt;
	}

	cout << ans << endl;

	return 0;
}
