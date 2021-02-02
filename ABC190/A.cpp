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
	ll a, b, c;
	cin >> a >> b >> c;

	if( c )	b--;
	else	a--;

	if( a == b ){
		if( c )	cout << "Aoki" << endl;
		else	cout << "Takahashi" << endl;
	}else if( a - b > 0 )	cout << "Takahashi" << endl;
	else				cout << "Aoki" << endl;

	return 0;
}
