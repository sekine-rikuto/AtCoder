#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define _overload(_1, _2, _3, name, ...) name
#define _rep(i, n) for(ll i = 0; i < (ll)n; i++)
#define _reps(i, s, n) for(ll i = (ll)(s); i < (ll)n; i++)
#define REP(...) _overload(__VA_ARGS__, _reps, _rep,)(__VA_ARGS__)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

int main(){
	ll n, x, y; 
	cin >> n >> x >> y;
	
	ll red = 1, blue = 0;
	for(ll i=n; i>=2; i--){
		ll red_q = red;
		ll blue_q = blue;
		
		red = red_q * (x + 1) + blue_q;
		blue = (red_q * x + blue_q) * y;
	}
	
	cout << blue << endl;

	return 0;
}
