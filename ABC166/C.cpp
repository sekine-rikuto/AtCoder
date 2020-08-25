#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n, m;	cin >> n >> m;
	int h[n];	for( int i = 0; i < n; i++ )	cin >> h[i];
	vector< pair<int, int> > way(m);
	for( int i = 0; i < m; i++ ){
		cin >> way[i].first >> way[i].second;
		way[i].first--;
		way[i].second--;
	}
	bool good[n];
	int ans = 0;

	for( int i = 0; i < n; i++ )	good[i] = true;

	sort( all(way) );

	for( int i = 0; i < m; i++ ){
		if( h[way[i].first] <= h[way[i].second]  ){
			good[way[i].first] = false;
		}
		if( h[way[i].first] >= h[way[i].second]  ){
			good[way[i].second] = false;
		}
	}

	for( int i = 0; i < n; i++ ){
		if( good[i] )	ans++;
	}

	cout << ans << endl;

	return 0;
}
