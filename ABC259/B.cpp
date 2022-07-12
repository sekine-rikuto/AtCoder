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
	ll a, b, d;
	cin >> a >> b >> d;

	double rad = d * M_PI / 180;

	cout << fixed;
	cout << setprecision(20) << a*cos(rad) - b*sin(rad) << " ";
	cout << setprecision(20) << a*sin(rad) + b*cos(rad) << endl;

	return 0;
}
