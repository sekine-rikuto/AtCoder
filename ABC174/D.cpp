#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define REP(i, n) for(ll i = 0; i < (ll)n; i++)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

int main(){
	ll n;	cin >> n;
	string c;	cin >> c;
	ll l, r;
	ll cnt = 0;

	l = 0;
	r = c.length() - 1;
	while( l < r ){
		while( c[l] == 'R' ){
			l++;
		}
		while( c[r] == 'W' ){
			r--;
		}

		if( l < r ){
			cnt++;
			l++;
			r--;
		}
	}

	cout << cnt << endl;

	return 0;
}
