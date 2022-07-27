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
	ll n, x, y, z;
	cin >> n >> x >> y >> z;
	
	vector<pair<ll, ll>> math;
	vector<pair<ll, ll>> english;
	vector<pair<ll, ll>> total;
	REP(i, n){
		ll a;
		cin >> a;
		math.push_back(make_pair(a, -i));
		total.push_back(make_pair(a, -i));
	}
	REP(i, n){
		ll b;
		cin >> b;
		english.push_back(make_pair(b, -i));
		total[i].first += b;
	}
	
	vector<ll> ans;
	
	sort(all(math), greater<pair<ll, ll>>());
	REP(i, x){
		ll tmp = math[i].second * -1;
		ans.push_back(tmp+1);
		english[tmp].first = -1;
		total[tmp].first = -1;
	}
	
	sort(all(english), greater<pair<ll, ll>>());
	REP(i, y){
		ll tmp = english[i].second * -1;
		ans.push_back(tmp+1);
		total[tmp].first = -1;
	}
	
	sort(all(total), greater<pair<ll, ll>>());
	REP(i, z){
		ll tmp = total[i].second * -1;
		ans.push_back(tmp+1);
	}
	
	sort(all(ans));
	REP(i, ans.size()){
		cout << ans[i] << endl;
	}

	return 0;
}
