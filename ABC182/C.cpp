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
	string s;	cin >> s;
	ll slen = s.length();

	ll d[slen];
	ll sum = 0;
	REP(i, slen){
		d[i] = s[i] - '0';
		sum += d[i];
	}

	ll ans = 20;
	ll tmp, cnt;
	for(ll i=0; i<(1<<slen); i++){
		tmp = sum;
		cnt = 0;
		for(ll j=0; j<slen; j++){
			if( i & (1<<j) ){
				tmp -= d[j];
				cnt++;
			}
		}

		if( tmp % 3 == 0 && cnt != slen )	ans = min( ans, cnt );
	}

	if( ans == 20 )	cout << -1 << endl;
	else			cout << ans << endl;

	return 0;
}
