#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007

using namespace std;

int main(){
	int n, k;	cin >> n >> k;
	long long int a[n];
	for( int i = 0; i < n; i++ ){
		cin >> a[i];
	}

	for( int i = k; i < n; i++ ){
		if( a[i] > a[i-k] )	cout << "Yes" << endl;
		else	cout << "No" << endl;
	}

	return 0;
}
