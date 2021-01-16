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

ll dp[5002][5002];
char grid[5002][5002];

int main(){
	ll h, w, k;
	cin >> h >> w >> k;

	REP(i, h+1) REP(j, w+1){
		dp[i][j] = 0;
		if( i == 0 || j == 0 )	grid[i][j] = ' ';
		else	grid[i][j] = '.';
	}

	REP(i, k){
		ll hpos, wpos;
		cin >> hpos >> wpos;
		cin >> grid[hpos][wpos];
	}

	REP(i, 1, h+1) REP(j, 1, w+1){
		if( i == 1 && j == 1 )	dp[i][j] = 1;
		else{
			if( grid[i-1][j] == '.' ){
				if( grid[i][j-1] != 'D' ){
					dp[i][j] += 2*(dp[i-1][j] + dp[i][j-1]);
				}else{
					dp[i][j] += 2*dp[i-1][j];
				}
			}else if( grid[i-1][j] != 'R' ){
				dp[i][j] += dp[i-1][j];
			}

			if( grid[i][j-1] == '.' ){
				if( grid[i-1][j] != 'R' ){
					dp[i][j] += 2*(dp[i-1][j] + dp[i][j-1]);
				}else{
					dp[i][j] += 2*dp[i][j-1];
				}
			}else if( grid[i][j-1] != 'D' ){
				dp[i][j] += dp[i][j-1];
			}

			dp[i][j] %= MOD;
		}
	}

	if( grid[h][w] == '.' )	dp[h][w] = (3*dp[h][w]) % MOD;

	cout << dp[h][w] << endl;

	return 0;
}
