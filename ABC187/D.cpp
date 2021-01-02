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

	ll a[n], b[n];
	ll sum = 0;
	REP(i, n){
		cin >> a[i] >> b[i];
		sum += a[i];
	}

	ll diff[n];
	REP(i, n){
		diff[i] = a[i]*2 + b[i];
	}

	sort( diff, diff+n, greater<ll>() );

	ll ans = 0;
	ll bal = 0;
	while( bal-sum <= 0 ){
		bal += diff[ans];
		ans++;
	}

	cout << ans << endl;

	return 0;
}
