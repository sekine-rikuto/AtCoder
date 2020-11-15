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

ll table[200001];

int main(){
	ll n, w;	cin >> n >> w;

	REP(i, 200001){
		table[i] = 0;
	}

	REP(i, n){
		ll s, t, p;	cin >> s >> t >> p;
		table[s] += p;
		table[t] -= p;
	}

	REP(i, 1, 200001){
		table[i] += table[i-1];
	}

	bool ans = true;
	REP(i, n){
		if( table[i] > w )	ans = false;
	}

	if( ans )	cout << "Yes" << endl;
	else		cout << "No" << endl;

	return 0;
}
