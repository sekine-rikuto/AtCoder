#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	long long int a, b, n;	cin >> a >> b >> n;
	int ans = 0;

	if( b == 1 )	ans = 0;
	else if( b > n )	ans = floor( (a * n) / b );
	else	ans = floor( (a * (b - 1) / b) );

	cout << ans << endl;

	return 0;
}
