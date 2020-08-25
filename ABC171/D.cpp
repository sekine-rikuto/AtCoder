#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
using namespace std;

int main(){
	int cnt[100001];	memset( cnt, 0, sizeof(int) * 100001 );
	long long int sum = 0;
	int n;	cin >> n;
	int a[n];
	for( int i = 0; i < n; i++ ){
		cin >> a[i];
		cnt[ a[i] ]++;
		sum += a[i];
	}
	int q;	cin >> q;
	pair<int, int> bc[q];
	for( int i = 0; i < q; i++ ){
		cin >> bc[i].first >> bc[i].second;
	}

	for( int i = 0; i < q; i++ ){
		sum += (bc[i].second - bc[i].first) * cnt[ bc[i].first ];
		cnt[ bc[i].second ] += cnt[ bc[i].first ];
		cnt[ bc[i].first ] = 0;

		cout << sum << endl;
	}

	return 0;
}
