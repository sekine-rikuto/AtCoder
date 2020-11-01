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
	string s; cin >> s;

	if( s.length() == 1 ){
		if( s == "8" )	cout << "Yes" << endl;
		else			cout << "No" << endl;
		return 0;
	}

	if( s.length() == 2 ){
		if( ((s[1]-'0')*10 + (s[0]-'0')) % 8 == 0 ||
			((s[0]-'0')*10 + (s[1]-'0')) % 8 == 0 )	cout << "Yes" << endl;
		else	cout << "No" << endl;
		return 0;
	}

	ll cnt[10];
	ll slen = s.length();
	REP(i, 10)	cnt[i] = 0;
	REP(i, slen){
		cnt[s[i]-'0']++;
	}

	ll tmp;
	ll need[10];
	bool check;
	REP(i, 13, 125){
		tmp = 8*i;
		REP(j, 10)	need[j] = 0;
		REP(j, 3){
			need[tmp%10]++;
			tmp /= 10;
		}
		check = true;
		REP(j, 10){
			if( cnt[j] < need[j] )	check = false;
		}

		if( check ){
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

	return 0;
}
