#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n;
	int check = 0;
	int ans = 1;
	cin >> n;
	vector<string> s(n);
	for( int i=0; i<n; i++ )	cin >> s[i];

	sort( all(s) );

	for( int i=1; i<n; i++ ){
		if( s[check] != s[i] ){
			ans++;
			check = i;
		}
	}

	cout << ans << endl;

	return 0;
}
