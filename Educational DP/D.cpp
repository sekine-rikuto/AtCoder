#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define _overload(_1, _2, _3, name, ...) name
#define _rep(i, n) for(ll i = 0; i < (ll)n; i++)
#define _repi(i, s, n) for(ll i = (ll)(s); i < (ll)n; i++)
#define REP(...) _overload(__VA_ARGS__, _repi, _rep,)(__VA_ARGS__)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

ll dp[101][100001];

int main(){
	ll n, w;	cin >> n >> w;
	pair<ll, ll> item[n];
	REP(i, n){
		cin >> item[i].first >> item[i].second;
	}

	memset(dp, -1, sizeof(dp));

	REP(i, n+1) REP(j, w+1){
		dp[i][j] = 0;
	}

	REP(i, 1, n+1){
		REP(j, w+1){
			if( j - item[i-1].first < 0 )	dp[i][j] = dp[i-1][j];
			else	dp[i][j] = max(dp[i-1][j], dp[i-1][ j-item[i-1].first ] + item[i-1].second);
		}
	}

	cout << dp[n][w] << endl;

	return 0;
}
