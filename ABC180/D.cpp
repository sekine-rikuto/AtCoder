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
	ll x, y, a, b;
	cin >> x >> y >> a >> b;

	ll ans = 0;
	while( x*a < y && x*a < x+b && (double)a*x<=2e18 ){
		x *= a;
		ans++;
	}
	ans += (y-x-1) / b;

	cout << ans << endl;

	return 0;
}
