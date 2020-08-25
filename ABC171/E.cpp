#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
using namespace std;

int main(){
	int n;	cin >> n;
	int a[n];
	for( int i = 0; i < n; i++ ){
		cin >> a[i];
	}
	int base = 0;

	for( int i = 0; i < n; i++ ){
		base ^= a[i];
	}

	for( int i = 0; i < n; i++ ){
		cout << (base ^ a[i]);

		if( i != n - 1 )	cout << " ";
	}
	cout << endl;

	return 0;
}
