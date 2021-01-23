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

	string s[n];
	REP(i, n){
		cin >> s[i];
	}

	ll t[n], f[n];
	REP(i, n){
		t[i] = 0;
		f[i] = 0;
	}

	if( s[0] == "OR" ){
		t[0] = 3;
		f[0] = 1;
	}else{
		t[0] = 1;
		f[0] = 3;
	}
	REP(i, 1, n){
		if( s[i] == "OR" ){
			t[i] = t[i-1]*2 + f[i-1];
			f[i] = f[i-1];
		}else{
			t[i] = t[i-1];
			f[i] = t[i-1] + f[i-1]*2;
		}
	}

	cout << t[n-1] << endl;

	return 0;
}
