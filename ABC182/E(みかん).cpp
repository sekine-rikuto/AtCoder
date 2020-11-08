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
	ll h, w, n, m;	cin >> h >> w >> n >> m;

	ll grid[h][w];
	REP(i, h) REP(j ,w)	grid[i][j] = 0;
	REP(i, n){
		ll a, b;	cin >> a >> b;
		grid[b-1][a-1] = 2;
	}
	REP(i, m){
		ll c, d;	cin >> c >> d;
		grid[d-1][c-1] = -1;
	}

	REP(i, h){
		vector<ll> line[w];
		bool light[w];
		REP(j, w)	light[j] = false;
		ll cnt = 0;
		REP(j, w){
			if( grid[i][j] != -1 ){
				line[cnt].push_back(j);
				if( grid[i][j] == 2 ){
					light[cnt] = true;
				}
			}else{
				cnt++;
			}
		}

		REP(j, cnt+1){
			if( light[j] ){
				REP(k, line[j].size()){
					if( grid[i][line[j][k]] == 0 )	grid[i][line[j][k]] = 1;
				}
			}
		}
	}

	REP(i, w){
		vector<ll> line[h];
		bool light[h];
		REP(j, h)	light[j] = false;
		ll cnt = 0;
		REP(j, h){
			if( grid[j][i] != -1 ){
				line[cnt].push_back(j);
				if( grid[j][i] == 2 ){
					light[cnt] = true;
				}
			}else{
				cnt++;
			}
		}

		REP(j, cnt+1){
			if( light[j] ){
				REP(k, line[j].size()){
					if( grid[line[j][k]][i] == 0 )	grid[line[j][k]][i] = 1;
				}
			}
		}
	}

	ll ans = 0;
	REP(i, h) REP(j, w){
		if( grid[i][j] == 1 || grid[i][j] == 2 )	ans++;
	}

	cout << ans << endl;

	return 0;
}
