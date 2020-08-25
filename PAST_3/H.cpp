#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define pi 3.14159265358979323846

using namespace std;

int main(){
	int n, l;	cin >> n >> l;
	int x[n];
	for( int i = 0; i < n; i++ )	cin >> x[i];
	int t[3];
	for( int i = 0; i < 3; i++ )	cin >> t[i];
	int time[l] = {0};
	bool hurdle[l] = {false};
	int tmp[3];

	for( int i = 0; i < n; i++ ){
		hurdle[ x[i] ] = true;
	}

	time[0] = 0;
	time[1] = t[0];
	if( hurdle[1] )	time[1] += t[2];

	for( int i = 2; i < l; i++ ){
		tmp[0] = time[i - 1] + t[0];
		tmp[1] = time[i - 2] + t[0] + t[1];
		if( i >= 4 ){
			tmp[2] = time[i - 4] + t[0] + t[1] * 3;
		}else{
			tmp[2] = 100000000;
		}

		time[i] = min( min( tmp[0], tmp[1] ), tmp[2] );
		if( hurdle[i] )	time[i] += t[2];
	}

	tmp[0] = time[l - 1] + t[0];

	tmp[1] = time[l - 2] + t[0] + t[1];
	tmp[1] = min( tmp[1], time[l - 1] + t[0] / 2 + t[1] / 2 );

	tmp[2] = time[l - 1] + t[0] / 2 + t[1] / 2;
	tmp[2] = min( tmp[2], time[l - 2] + t[0] / 2 + t[1] * 3 / 2 );
	if( l >= 3 )	tmp[2] = min( tmp[2], time[l - 3] + t[0] / 2 + t[1] * 5 / 2 );
	if( l >= 4 )	tmp[2] = min( tmp[2], time[l - 4] + t[0] + t[1] * 3 );

	cout << min( min( tmp[0], tmp[1] ), tmp[2] ) << endl;

	return 0;
}
