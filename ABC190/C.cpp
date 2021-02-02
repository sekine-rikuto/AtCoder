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
	ll n, m;
	cin >> n >> m;

	ll a[m], b[m];
	REP(i, m){
		cin >> a[i] >> b[i];
	}

	ll k;
	cin >> k;

	ll c[k], d[k];
	REP(i, k){
		cin >> c[i] >> d[i];
	}

	vector<ll> keep[65536];
	ll m_size = 0, k_size = 0;
	for (ll bit = 0; bit < (1<<k); bit++) {
		vector<ll> select(k);
		REP(i, k){
			if( bit & (1<<i) )	select[i] = c[i];
			else				select[i] = d[i];
		}
		sort( all(select) );
		UNIQUE(select);

		if( select.size() > m_size ){
			m_size = select.size();
			REP(i, k)	keep[i].clear();
			keep[0] = select;
			k_size = 1;
		}else if( select.size() == m_size ){
			keep[k_size] = select;
			k_size++;
		}
	}

	ll ans = 0, tmp;
	REP(i, k_size){
		ll num[n+1];
		REP(j, n+1){
			num[j] = 0;
		}

		REP(j, keep[i].size()){
			num[keep[i][j]] = 1;
		}

		tmp = 0;
		REP(j, m){
			if( num[a[j]] && num[b[j]] )	tmp++;
		}
		ans = max(ans, tmp);
	}

	cout << ans << endl;

	return 0;
}
