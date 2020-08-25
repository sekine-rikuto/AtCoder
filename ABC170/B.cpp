#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define pi 3.14159265358979323846

using namespace std;

int main(){
	int x, y;	cin >> x >> y;
	int sum;
	bool ans = false;

	for( int i = 0; i <= x; i++ ){
		if( i * 2 + (x - i) * 4 == y )	ans = true;
	}

	if( ans )	cout << "Yes" << endl;
	else		cout << "No" << endl;

	return 0;
}
