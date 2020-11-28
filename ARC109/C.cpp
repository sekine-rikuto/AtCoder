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

char check_win(char a, char b){
	if( a == 'R' ){
		if( b == 'S' )	return a;
		if( b == 'P' )	return b;
		return a;
	}
	if( a == 'S' ){
		if( b == 'P' )	return a;
		if( b == 'R' )	return b;
		return a;
	}
	if( a == 'P' ){
		if( b == 'R' )	return a;
		if( b == 'S' )	return b;
		return a;
	}

	return a;
}

int main(){
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;

	REP(i, k){
		string new_s;
		if( n % 2 == 0 ){
			for(ll j=0; j<n; j+=2){
				new_s.push_back(check_win(s[j], s[j+1]));
			}

			s = new_s;
			n /= 2;
		}else{
			s = s+s;

			for(ll j=0; j<2*n; j+=2){
				new_s.push_back(check_win(s[j], s[j+1]));
			}

			s = new_s;
		}
	}

	cout << s[0] << endl;

	return 0;
}
