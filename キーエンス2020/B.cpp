#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

bool compare( pair<int,int> a,pair<int,int> b ){
	return a.first < b.first;
}

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> arm(n);
	vector<pair<int,int>> range(n);
	for( int i=0; i<n; i++ ){
		cin >> arm[i].first >> arm[i].second;
		range[i].first = arm[i].first + arm[i].second;
		range[i].second = arm[i].first - arm[i].second;
	}
	int ans=1;
	int g;

	sort( all( range ) );

	if( n == 1 ){
		cout << 1 << endl;
		return 0;
	}

	g = range[0].first;
	for( int i=1; i<n; i++ ){
		if( g <= range[i].second ){
			ans++;
			g = range[i].first;
		}
	}

	cout << ans << endl;

	return 0;
}
