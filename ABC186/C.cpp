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

	vector<ll> seven;
	REP(i, 1, n+1){
		ll tmp = i;
		do{
			if( tmp % 10 == 7 )	seven.push_back(i);
			tmp /= 10;
		}while( tmp );

		tmp = i;
		do{
			if( tmp % 8 == 7 )	seven.push_back(i);
			tmp /= 8;
		}while( tmp );
	}

	sort( all(seven) );
	UNIQUE( seven );

	cout << n - seven.size() << endl;

	return 0;
}