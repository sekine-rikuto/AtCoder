#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n;	cin >> n;
	long long point[3]; for( int i = 0; i < 3; i++ )	cin >> point[i];
	string s[n];	for( int i = 0; i < n; i++ )	cin >> s[i];
	int depth = 0;
	bool choice[n];
	for( int i = 0; i < n; i++ )	choice[i] = true;
	long long int cnt = 0;
	long long int lim = pow( 2, n );

	while( cnt < lim ){
		if( choice[depth] ){
			point[s[depth][0]-'A']++;
			point[s[depth][1]-'A']--;
			choice[depth] = false;
			depth++;
		}else{
			point[s[depth][1]-'A']++;
			point[s[depth][0]-'A']--;
			choice[depth] = true;
			depth++;
		}

		if( point[0] < 0 || point[1] < 0 || point[2] < 0 ){
			cnt += pow( 2, n-depth );
			depth--;
			while( choice[depth] )	depth--;

			if( !choice[depth] ){
				point[s[depth][0]-'A']++;
				point[s[depth][1]-'A']--;
			}else{
				point[s[depth][1]-'A']++;
				point[s[depth][0]-'A']--;
			}

		}else if( depth == n ){
			cout << "Yes" << endl;

			for( int i = 0; i < n; i++ ){
				if( choice[i] ){
					cout << s[i][0] << endl;
				}else{
					cout << s[i][1] << endl;
				}
			}

			return 0;
		}

		cout << depth << endl;
		cout << cnt << endl;
		cout << point[0] << " " << point[1] << " " << point[2] << endl << endl;

	}

	cout << "No" << endl;

	return 0;
}
