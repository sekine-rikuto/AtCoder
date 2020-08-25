#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[m];
	int asum = 0;
	for( int i=0; i<m; i++ ){
		cin >> a[i];
		asum += a[i];
	}

	if( asum > n )	cout << "-1" << endl;
	else	cout << n - asum << endl;

	return 0;
}
