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
	ll a, b, c, d;
	cin >> a >> b >> c >> d;

	if( a == c && b == d ){
		cout << 0 << endl;
	}else if( a+b == c+d ){
		cout << 1 << endl;
	}else if( a-b == c-d ){
		cout << 1 << endl;
	}else if( abs(a-c) + abs(b-d) <= 3 ){
		cout << 1 << endl;
	}else if( (a+b+c+d) % 2 == 0 ){
		cout << 2 << endl;
	}else if( abs(a-c) + abs(b-d) <= 6 ){
		cout << 2 << endl;
	}else if( abs(a+b-c-d) <= 3 ){
		cout << 2 << endl;
	}else if( abs(a-b-c+d) <= 3 ){
		cout << 2 << endl;
	}else{
		cout << 3 << endl;
	}

	return 0;
}
