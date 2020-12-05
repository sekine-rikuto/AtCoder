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

ll gcd(ll a, ll b){
	if( b )	return gcd(b, a%b);
	else	return a;
}

ll lcm(ll a, ll b){
	return a*b/gcd(a,b);
}

int main(){
	ll n;	cin >> n;
	ll ans = 1;

	REP(i, 2, n+1){
		ans = lcm(ans, i);
	}

	cout << ans+1 << endl;

	return 0;
}
