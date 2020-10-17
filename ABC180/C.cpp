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
	vector<ll> ans;

	ll tmp;
	REP(i, 1, (int)(pow(n, 0.5) + 1)){
		if( n % i == 0 ){
			ans.push_back( i );
			ans.push_back( n / i );
		}
	}

	sort( all(ans) );
	UNIQUE(ans);

	ll len = ans.size();
	REP(i, len){
		cout << ans[i] << endl;
	}

	return 0;
}
