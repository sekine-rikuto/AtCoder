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

ll dp[1001][1001];

int main(){
	ll n, m;
	cin >> n >> m;

	ll a[n], b[m];
	REP(i, n){
		cin >> a[i];
	}
	REP(i, m){
		cin >> b[i];
	}

	REP(i, n+1) REP(j, m+1){
		if( i == 0 && j == 0 ){
			dp[i][j] = 0;
		}else if( i == 0 ){
			dp[i][j] = dp[i][j-1]+1;
		}else if( j == 0 ){
			dp[i][j] = dp[i-1][j]+1;
		}else{
			ll tmp = dp[i-1][j-1];
			if( a[i-1] != b[j-1] )	tmp++;

			dp[i][j] = min(dp[i-1][j]+1, dp[i][j-1]+1);
			dp[i][j] = min(dp[i][j], tmp);
		}
	}

	cout << dp[n][m] << endl;

	return 0;
}
