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
	ll n; cin >> n;
	pair<ll, ll> p[n];
	REP(i, n){
		cin >> p[i].first >> p[i].second;
	}

	sort( p, p+n );

	REP(i, n) REP(j, i+1, n) REP(k, j+1, n){
		if( (p[k].first-p[i].first)*(p[j].second-p[i].second) == (p[j].first-p[i].first)*(p[k].second-p[i].second) ){
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

	return 0;
}
