#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define pi 3.14159265358979323846

using namespace std;

int main(){
	int n, m, q;	cin >> n >> m >> q;
	int form[q];
	vector<pair<int, int>> s(q);
	for( int i = 0; i < q; i++ ){
		cin >> form[i];
		cin >> s[i].first;
		if( form[i] == 2 )	cin >> s[i].second;

		s[i].first--;
		s[i].second--;
	}

	int point[m];
	bool correct[n][m];
	int score;

	for( int i = 0; i < m; i++ ){
		point[i] = 0;
	}
	for( int i = 0; i < n; i++ ){
		for( int j = 0; j < m; j++ ){
			correct[i][j] = false;
		}
	}

	for( int i = 0; i < q; i++ ){
		if( form[i] == 1 ){
			score = 0;
			for( int j = 0; j < m; j++ ){
				if( correct[ s[i].first ][j] ){
					score += n - point[j];
				}
			}
			cout << score << endl;
		}else{
			correct[ s[i].first ][ s[i].second ] = true;
			point[ s[i].second ]++;
		}
	}

	return 0;
}
