#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define REP(i, n) for(ll i = 0; i < (ll)n; i++)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

int main(){
	string s;	cin >> s;
	ll cnt = 0;

	if( s == "RSR" ){
		cnt = 1;
	}else{
		REP(i, 3){
			if( s[i] == 'R' )	cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
