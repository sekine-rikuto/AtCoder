#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define REP(i, n) for(ll i = 0; i < (ll)n; i++)
#define all(v) (v).begin(),(v).end()
#define UNIQUE(v) (v).erase( unique( all(v) ), (v).end() );
#define MOD 1000000007

ll item[3000][3000];
ll dp[3000][3000][4];

int main(){
	int r, c, k;	cin >> r >> c >> k;

	REP(i, r) REP(j, c)	item[i][j] = 0;
	REP(i, k){
		ll x, y;	cin >> x >> y;
		x--; y--;
		cin >> item[x][y];
	}

	REP(i, r) REP(j, c) REP(l, 4)	dp[i][j][l] = 0;

	REP(i, r) REP(j, c){
		ll tmp = 0;
		if( i != 0 )	tmp = max( {dp[j][i-1][0], dp[j][i-1][1], dp[j][i-1][2], dp[j][i-1][3]} );

		if( j != 0 ){
			dp[j][i][0] = max( dp[j-1][i][0], tmp );
			dp[j][i][1] = dp[j-1][i][1];
			dp[j][i][2] = dp[j-1][i][2];
			dp[j][i][3] = dp[j-1][i][3];

			if( item[i][j] != 0 ){
				dp[j][i][1] = max( {dp[j-1][i][1], dp[j-1][i][0] + item[i][j], tmp + item[i][j]} );
				dp[j][i][2] = max( {dp[j-1][i][2], dp[j-1][i][1] + item[i][j]} );
				dp[j][i][3] = max( {dp[j-1][i][3], dp[j-1][i][2] + item[i][j]} );
			}
		}else{
			dp[j][i][0] = tmp;
			dp[j][i][1] = tmp + item[i][j];
			dp[j][i][2] = 0;
			dp[j][i][3] = 0;
		}
	}

	r--; c--;
	cout << max( {dp[c][r][0], dp[c][r][1], dp[c][r][2], dp[c][r][3]} ) << endl;

	return 0;
}
