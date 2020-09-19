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
#define MOD 998244353

ll dp[200001];

int main(){
	ll n, k;	cin >> n >> k;
	pair<ll, ll> r[k];
	REP(i, k){
		cin >> r[i].first >> r[i].second;
	}
	vector<ll> s;

	REP(i, k) REP(j, r[i].first, r[i].second+1){
		s.push_back(j);
	}
	sort( all(s) );

	REP(i, n)	dp[i] = 0;
	dp[0] = 1;
	REP(i, n){
		REP(j, s.size()){
			if( i - s[j] >= 0){
				dp[i] += dp[i - s[j]];
				dp[i] %= MOD;
			}else{
				break;
			}
		}
	}

	cout << dp[n-1] << endl;

	return 0;
}
