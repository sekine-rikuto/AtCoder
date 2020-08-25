#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define REP(i, n) for(ll i = 0; i < (ll)n; i++)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

int main(){
	ll n;	cin >> n;
	ll a[n];
	REP(i, n)	cin >> a[i];
	ll ans = 0;
	ll tmp = -1;

	REP(i, n){
		tmp = max(tmp, a[i]);
		if( tmp != a[i] ){
			ans += tmp - a[i];
		}
	}

	cout << ans << endl;

	return 0;
}
