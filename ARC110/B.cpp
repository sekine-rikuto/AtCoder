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
	string t;	cin >> t;
	string s;

	while( n+3 > s.size() ){
		s += "110";
	}

	if( s.find(t) == string::npos ){
		cout << 0 << endl;
	}else if( t == "1" ){
		cout << 20000000000 << endl;
	}else if( t == "11" ){
		cout << 10000000000 << endl;
	}else{
		int cnt = 0;
		REP(i, n){
			if( t[i] == '0' )	cnt++;
		}

		if( t[n-1] == '0' ){
			cout << 10000000001 - cnt << endl;
		}else{
			cout << 10000000000 - cnt << endl;
		}
	}

	return 0;
}
