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
	ll h, w;
	cin >> h >> w;
	ll a[h][w];
	ll sum = 0;
	ll base = 1000;
	REP(i, h) REP(j, w){
		cin >> a[i][j];
		sum += a[i][j];
		base = min(base, a[i][j]);
	}

	cout << sum - h*w*base << endl;

	return 0;
}
