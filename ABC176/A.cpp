#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define REP(i, n) for(ll i = 0; i < (ll)n; i++)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

int main(){
	ll n, x, t;	cin >> n >> x >> t;
	ll ans = 0;

	ans = t * (n / x);
	if( n % x != 0 )	ans += t;

	cout << ans << endl;

	return 0;
}
