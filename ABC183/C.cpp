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
	ll n, k;	cin >> n >> k;
	ll t[n][n];
	REP(i, n) REP(j, n){
		cin >> t[i][j];
	}

	vector<ll> pat(n-1);
	iota( all(pat), 1 );
	ll sum, loc;
	ll ans = 0;
	do{
		sum = 0;
		loc = 0;
		REP(i, n-1){
			sum += t[loc][pat[i]];
			loc = pat[i];
		}
		sum += t[loc][0];

		if( sum == k )	ans++;
	}while( next_permutation( all(pat) ) );

	cout << ans << endl;

	return 0;
}
