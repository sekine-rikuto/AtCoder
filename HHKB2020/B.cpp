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
	ll h, w;	cin >> h >> w;
	string s[h];
	REP(i, h){
		cin >> s[i];
	}
	ll ans = 0;

	REP(i, h) REP(j, w){
		if( s[i][j] == '#' )	continue;

		if( i - 1 >= 0 && s[i-1][j] == '.' )	ans++;
		if( i + 1 < h && s[i+1][j] == '.')		ans++;
		if( j - 1 >= 0 && s[i][j-1] == '.')		ans++;
		if( j + 1 < w && s[i][j+1] == '.' )		ans++;
	}

	cout << ans / 2 << endl;

	return 0;
}
