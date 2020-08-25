#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

#define pi 3.14159265358979323846

using namespace std;

int main(){
	int a, b;	cin >> a >> b;
	double h, m;	cin >> h >> m;
	double angle[3];
	double ans;

	angle[0] = pi / 6 * h + pi / 360 * m;
	angle[1] = pi / 30 * m;
	angle[2] = abs( angle[0] - angle[1] );
	if( angle[2] > pi )	angle[2] = 2 * pi - angle[2];

	ans = (a * a) + (b * b) - (2 * a * b * cos( angle[2] ));
	ans = pow( ans, 0.5 );

	printf( "%.20lf", ans );

	return 0;
}
