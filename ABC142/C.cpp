#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

bool comp( pair<int,int>a, pair<int, int>b ){
	return a.first < b.first;
}

int main(){
	int n;
	cin >> n;

	vector< pair<int, int> > a(n);
	for( int i=0; i<n; i++ ){
		cin >> a[i].first;
		a[i].second = i+1;
	}

	sort( all(a), comp );

	for( int i=0; i<n-1; i++ )	cout << a[i].second << " ";
	cout << a[n-1].second << endl;

	return 0;
}
