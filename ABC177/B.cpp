#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define _overload(_1, _2, _3, name, ...) name
#define _rep(i, n) for(ll i = 0; i < (ll)n; i++)
#define _repi(i, s, n) for(ll i = (ll)(s); i < (ll)n; i++)
#define REP(...) _overload(__VA_ARGS__, _repi, _rep,)(__VA_ARGS__)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

int main(){
	string s, t;	cin >> s >> t;
	ll ans = 1001;

	REP(i, s.length() - t.length() + 1){
		ll tmp = 0;
		REP(j, t.length()){
			if( s[i+j] != t[j] ){
				tmp++;
			}
		}
		ans = min(ans, tmp);
	}

	cout << ans << endl;

	return 0;
}
