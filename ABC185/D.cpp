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
	ll n, m;
	cin >> n >> m;

	if( m == 0 ){
		cout << 1 << endl;
		return 0;
	}

	ll a[m+2];
	REP(i, m){
		cin >> a[i];
	}
	a[m] = 0;
	a[m+1] = n+1;
	sort(a, a+m+2);

	ll diff[m+1];
	REP(i, m+1){
		diff[i] = a[i+1] - a[i];
		if( diff[i] != 0 )	diff[i]--;
	}
	sort(diff, diff+m+1);

	ll cnt = 0;
	while( diff[cnt] == 0 && cnt <= n ){
		cnt++;
	}

	ll ans = 0;
	ll stamp = diff[cnt];
	REP(i, cnt, m+1){
		ans += diff[i] / stamp;
		if( diff[i] % stamp )	ans++;
	}

	cout << ans << endl;

	return 0;
}
