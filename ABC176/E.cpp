#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define REP(i, n) for(ll i = 0; i < (ll)n; i++)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

int main(){
	ll h, w, m;	cin >> h >> w >> m;
	set<pair<int, int>> target;
	int sumH[h] = {0};
	int sumW[w] = {0};
	vector<int> cH;
	vector<int> cW;
	int mh, mw;
	REP(i, m){
		ll x, y;	cin >> x >> y;
		x--; y--;
		sumH[x]++;
		sumW[y]++;
		target.insert(make_pair(x, y));
	}

	mh = *max_element(sumH, sumH + h);
	mw = *max_element(sumW, sumW + w);
	REP(i, h){
		if( sumH[i] == mh )	cH.push_back(i);
	}
	REP(i, w){
		if( sumW[i] == mw )	cW.push_back(i);
	}

	REP(i, cH.size()) REP(j, cW.size()){
		if( target.find( make_pair(cH[i], cW[j]) ) == target.end() ){
			cout << mh + mw << endl;
			return 0;
		}
	}

	cout << mh + mw - 1 << endl;

	return 0;
}
