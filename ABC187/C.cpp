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
	ll n;
	cin >> n;
	string s[n];
	REP(i, n){
		cin >> s[i];
	}

	vector<string> org;
	vector<string> exclam;
	REP(i, n){
		if( s[i][0] == '!' ){
			s[i].erase(0, 1);
			exclam.push_back(s[i]);
		}else{
			org.push_back(s[i]);
		}
	}

	sort(all(org));
	UNIQUE(org);
	sort(all(exclam));
	UNIQUE(exclam);

	vector<string> uni;
	REP(i, org.size()){
		uni.push_back(org[i]);
	}
	REP(i, exclam.size()){
		uni.push_back(exclam[i]);
	}
	sort(all(uni));

	REP(i, uni.size()-1){
		if( uni[i] == uni[i+1] ){
			cout << uni[i] << endl;
			return 0;
		}
	}

	cout << "satisfiable" << endl;

	return 0;
}
