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
	ll n;	cin >> n;
	ll a[n];
	REP(i, n){
		cin >> a[i];
	}

	ll ans = 10000, point = 0;
	ll tmp;
	REP(i, 2, 1001){
		tmp = 0;
		REP(j, n){
			if( a[j] % i == 0 )	tmp++;
		}
		if( tmp > point ){
			point = tmp;
			ans = i;
		}
	}

	cout << ans << endl;

	return 0;
}
