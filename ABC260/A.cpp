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
	string s;
	cin >> s;
	
	if( s[0] == s[1] && s[1] == s[2] ){
		cout << "-1" << endl;
	}else if( s[0] == s[1] ){
		cout << s[2] << endl;
	}else if( s[0] == s[2] ){
		cout << s[1] << endl;
	}else{
		cout << s[0] << endl;
	}

	return 0;
}
