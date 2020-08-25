#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define pi 3.14159265358979323846

using namespace std;

int main(){
	int n;	cin >> n;
	vector<string> a(n);
	for( int i = 0; i < n; i++ ){
		cin >> a[i];
	}
	bool match;
	char ans[n];

	for( int i = 0; i < n / 2; i++ ){
		match = false;
		for( int j = 0; j < n && !match; j++ ){
			for( int k = 0; k < n && !match; k++ ){
				if( a[i][j] == a[n - i - 1][k] ){
					match = true;
					ans[i] = ans[n - i - 1] = a[i][j];
				}
			}
		}

		if( !match ){
			cout << "-1" << endl;
			return 0;
		}
	}

	if( n % 2 == 1 ){
		ans[n / 2] = a[n / 2][0];
	}
	for( int i = 0; i < n; i++ ){
		cout << ans[i];
	}
	cout << endl;

	return 0;
}
