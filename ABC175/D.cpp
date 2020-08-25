#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define REP(i, n) for(ll i = 0; i < (ll)n; i++)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

int main(){
	ll n, k;	cin >> n >> k;
	ll p[n], c[n];
	REP(i, n){
		cin >> p[i];
	}
	REP(i, n){
		cin >> c[i];
	}

	vector<bool> list(n, 0);
	vector<ll> loop[n];
	REP(i, n){
		if( !list[i] ){
			ll j = i;
			do{
				loop[i].push_back(c[p[j] - 1]);
				list[p[j] - 1] = true;
				j = p[j] - 1;
			}while(j != i);
		}
	}

	ll sum, score, ck;
	ll ans = -1000000000;
	REP(i, n){
		sum = 0;
		score = 0;
		ck = k;

		REP(j, loop[i].size()){
			sum += loop[i][j];
		}

		if( sum > 0 && ck > (ll)loop[i].size() ){
			score = sum * (ck / loop[i].size());
			ck %= loop[i].size();

			if( k % loop[i].size() == 0 ){
				score -= sum;
				ck += loop[i].size();
			}
		}

		vector<ll> s(2 * loop[i].size() + 1, 0);
		s[0] = 0;
		REP(j, loop[i].size()){
			s[j+1] = s[j] + loop[i][j];
		}
		REP(j, loop[i].size()){
			s[j+loop[i].size()+1] = s[j+loop[i].size()] + loop[i][j];
		}

		ll tmp = -1000000000;
		for(ll left=0; left < 2 * (ll)loop[i].size() + 1; left++)
		for(ll right=left + 1; right < 2 * (ll)loop[i].size() + 1; right++){
			if( right - left <= ck ){
				tmp = max(tmp, s[right] - s[left]);
			}
		}

		ans = max(ans, score + tmp);
	}

	cout << ans << endl;

	return 0;
}
