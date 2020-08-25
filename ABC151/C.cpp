#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<pair<int,string>> sub(m);
	for( int i=0; i<m; i++ )	cin >> sub[i].first >> sub[i].second;

	bool is_ac[n];
	int ac[n],pena[n];
	int ans[2];
	for( int i=0; i<n; i++ ){
		is_ac[i] = false;
		ac[i] = 0;
		pena[i] = 0;
	}
	ans[0] = 0;
	ans[1] = 0;

	for( int i=0; i<m; i++ ){
		if( is_ac[sub[i].first-1] == false ){
			if( sub[i].second == "AC" ){
				is_ac[sub[i].first-1] = true;
				ac[sub[i].first-1]++;
			}else{
				pena[sub[i].first-1]++;
			}
		}
	}

	for( int i=0; i<n; i++ ){
		if( is_ac[i] == true ){
			ans[0] += ac[i];
			ans[1] += pena[i];
		}
	}

	cout << ans[0] << " " << ans[1] << endl;

	return 0;
}
