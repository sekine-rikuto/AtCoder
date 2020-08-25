#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007

using namespace std;

int main(){
	int a, b, c;	cin >> a >> b >> c;
	int k;	cin >> k;

	while( a >= b && k > 0 ){
		b *= 2;
		k--;
	}

	while( b >= c && k > 0 ){
		c *= 2;
		k--;
	}

	if( a < b && b < c )	cout << "Yes" << endl;
	else	cout << "No" << endl;

	return 0;
}
