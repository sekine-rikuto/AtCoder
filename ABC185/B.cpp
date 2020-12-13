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
	ll n, m, t;
	cin >> n >> m >> t;

	ll a[m], b[m];
	REP(i, m){
		cin >> a[i] >> b[i];
	}

	bool ans = true;
	ll lim = n;
	REP(i, m){
		if( i == 0 ){
			n -= a[i];
		}else{
			n -= a[i] - b[i-1];
		}

		if( n <= 0 )	ans = false;

		n += b[i] - a[i];
		if( n > lim )	n = lim;
	}

	n -= t - b[m-1];
	if( n <= 0 )	ans = false;

	if( ans )	cout << "Yes" << endl;
	else		cout << "No" << endl;

	return 0;
}
