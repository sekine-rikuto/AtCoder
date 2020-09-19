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
	pair<ll, ll> d[n];
	REP(i, n){
		cin >> d[i].first >> d[i].second;
	}
	ll cnt = 0;
	bool ans = false;

	REP(i, n){
		if( d[i].first == d[i].second ){
			cnt++;
		}else{
			cnt = 0;
		}

		if( cnt == 3 ){
			ans = true;
		}
	}

	if( ans )	cout << "Yes" << endl;
	else		cout << "No" << endl;

	return 0;
}
