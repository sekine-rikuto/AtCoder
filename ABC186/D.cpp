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
	ll a[n];
	REP(i, n){
		cin >> a[i];
	}

	sort(a, a+n, greater<ll>());

	ll ans = 0;
	ll sum = 0;
	vector<ll> diff;
	REP(i, 1, n){
		sum += a[0] - a[i];
		diff.push_back( a[i-1] - a[i] );
	}
	REP(i, n-1){
		ans += sum;
		sum -= (n-i-1)*diff[i];
	}

	cout << ans << endl;

	return 0;
}
