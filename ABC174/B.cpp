#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define REP(i, n) for(ll i = 0; i < (ll)n; i++)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

int main(){
	ll n, d;	cin >> n >> d;
	ll ans = 0;
	double x, y;

	REP(i, n){
		cin >> x >> y;

		if( x*x + y*y <= d*d ){
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
