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

// (1,1)以外すべて
int main(){
	ll id, n, k;	cin >> id >> n >> k;
	string s[n];
	REP(i, n){
		cin >> s[i];
	}

	cout << 9999 << endl;
	REP(i, 1, n+1) REP(j, 1, n+1){
		if( i == 1 && j == 1 ) continue;
		cout << i << " " << j << " " << "1" << endl;
	}

	return 0;
}
