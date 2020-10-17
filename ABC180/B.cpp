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
	ll n;
	cin >> n;
	ll x[n];
	REP(i, n){
		cin >> x[i];
	}

	ll ans = 0;
	REP(i, n){
		ans += abs(x[i]);
	}
	cout << ans << endl;

	ans = 0;
	REP(i, n){
		ans += pow(abs(x[i]),2);
	}
	printf("%.15lf\n", pow(ans, 0.5));

	ans = 0;
	REP(i, n){
		ans = max(ans, abs(x[i]));
	}
	cout << ans << endl;

	return 0;
}
