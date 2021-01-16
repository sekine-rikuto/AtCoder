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
	REP(i, n){
		cin >> a[i];
	}
	REP(i, n){
		cin >> b[i];
	}

	ll c[n];
	ll a_max = a[0];
	c[0] = a[0]*b[0];
	REP(i, 1, n){
		a_max = max(a_max, a[i]);
		c[i] = max(a_max*b[i], c[i-1]);
	}

	REP(i, n){
		cout << c[i] << endl;
	}

	return 0;
}
