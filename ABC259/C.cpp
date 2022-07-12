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
	string s, t;
	cin >> s >> t;

	s += "@@@";
	t += "@@@";

	for(ll i = 0, j = 0; i < s.length(); i++){
		if( s[i] != t[j] ){
			cout << "No" << endl;
			return 0;
		}

		if( i == 0 ){
			j++;
			continue;
		}

		if( s[i] == s[i-1] && s[i] != s[i+1] ){
			while( s[i] == t[j] && j < t.length() ){
				j++;
			}
		}else{
			j++;
		}
	}

	cout << "Yes" << endl;

	return 0;
}
