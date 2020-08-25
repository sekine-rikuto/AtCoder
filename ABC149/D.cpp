#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n,k;
	int r,s,p;
	string t;
	cin >> n >> k;
	cin >> r >> s >> p;
	cin >> t;

	int point[3];
	char myhand[n][3];

	for( int i=0; i<3; i++ )	point[i] = 0;

	for( int i=0; i<n; i++ ){
		for( int j=0; j<3; j++ ){
			if( i-k >= 0 ){

				if( t[i] == 's' && myhand[i-k][j] != 'r' ){
					point[j] += r;
					myhand[i][j] = 'r';
				}else	if( t[i] == 'p' && myhand[i-k][j] != 's' ){
					point[j] += s;
					myhand[i][j] = 's';
				}else	if( t[i] == 'r' && myhand[i-k][j] != 'p' ){
					point[j] += p;
					myhand[i][j] = 'p';
				}else{
					if( i+k < n ){
						if( t[i+k] == 'p' )	myhand[i][j] = 'r';
						else if( t[i+k] == 'r' )	myhand[i][j] = 's';
						else	myhand[i][j] = 'p';
					}
				}
			}else{
				if( t[i] == 's' ){
					point[j] += r;
					myhand[i][j] = 'r';
				}else	if( t[i] == 'p' ){
					point[j] += s;
					myhand[i][j] = 's';
				}else	if( t[i] == 'r' ){
					point[j] += p;
					myhand[i][j] = 'p';
				}else{
					if( i+k < n ){
						if( t[i+k] == 'p' )	myhand[i][j] = 'r';
						else if( t[i+k] == 'r' )	myhand[i][j] = 's';
						else	myhand[i][j] = 'p';
					}
				}
			}
		}
	}

	cout << max( point[0], max( point[1], point[2] ) ) << endl;

	return 0;
}
