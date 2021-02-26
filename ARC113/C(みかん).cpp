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
	string s;
	cin >> s;

	pair<ll, char> invasion;
	string hold;
	ll ans = 0;

	invasion.first = 1;
	invasion.second = s[s.length()-1];
	hold.clear();

	for(ll i=s.length()-1; i>=2; i--){
		if( i < s.length() - invasion.first ){
			hold.push_back(s[i]);
		}

		if( s[i-1] == s[i-2] && s[i] != s[i-1] ){
			ll n = hold.length();
			if( s[i-1] != invasion.second ){
				n += invasion.first;
			}
			REP(j, hold.length()){
				if( s[i-1] == hold[j] )	n--;
			}

			ans += n;
			invasion.first = n+2;
			invasion.second = s[i-1];
			hold.clear();
			i -= 1;
		}
	}

	cout << ans << endl;

	return 0;
}
