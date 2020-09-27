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

// グリッドの右上，右下，左上，左下にわけてランダム
int main(){
	ll id, n, k;	cin >> id >> n >> k;
	string s[n];
	REP(i, n){
		cin >> s[i];
	}
	mt19937 m(random_device{}());
	uniform_int_distribution<int> distF(1, 50);
	uniform_int_distribution<int> distB(51, 100);
	uniform_int_distribution<int> distK(1, 3);

	cout << 9999 << endl;
	REP(i, 2499){
		cout << distF(m) << " " << distF(m) << " " << distK(m) << endl;
	}
	REP(i, 2499){
		cout << distF(m) << " " << distB(m) << " " << distK(m) << endl;
	}
	REP(i, 2499){
		cout << distB(m) << " " << distF(m) << " " << distK(m) << endl;
	}
	REP(i, 2502){
		cout << distB(m) << " " << distB(m) << " " << distK(m) << endl;
	}

	return 0;
}
