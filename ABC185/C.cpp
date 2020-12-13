#include <bits/stdc++.h>
//#include <atcoder/all>

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
//using namespace atcoder;

#define _overload(_1, _2, _3, name, ...) name
#define _rep(i, n) for(ll i = 0; i < (ll)n; i++)
#define _reps(i, s, n) for(ll i = (ll)(s); i < (ll)n; i++)
#define REP(...) _overload(__VA_ARGS__, _reps, _rep,)(__VA_ARGS__)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

ull combination(ull a, ull b){
	ull res = 1;
	if( b*2 > a )	b = a-b;
	REP(i, b){
		res *= a;
		res /= (i+1);
		a--;
	}
	return res;
}

int main(){
	ull n;
	cin >> n;

	cout << combination(n-1, 11) << endl;

	return 0;
}
