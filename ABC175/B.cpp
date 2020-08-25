#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define REP(i, n) for(ll i = 0; i < (ll)n; i++)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

int main(){
	ll n;	cin >> n;
	ll l[n];
	REP(i, n){
		cin >> l[i];
	}
	ll ans = 0;

	for(ll i=0; i<n; i++)
	for(ll j=i+1; j<n; j++)
	for(ll k=j+1; k<n; k++){
		if( l[i] != l[j] && l[i] != l[k] && l[j] != l[k] ){
			if( l[i]+l[j] > l[k] && l[j]+l[k] > l[i] && l[i]+l[k] > l[j] ){
				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
