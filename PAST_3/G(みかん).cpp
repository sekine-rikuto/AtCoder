#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define pi 3.14159265358979323846

using namespace std;

int main(){
	int n, sx, sy;	cin >> n >> sx >> sy;
	pair<int, int> block[n];
	for( int i = 0; i < n; i++ ){
		cin >> block[i].first >> block[i].second;
	}
	int grid[203][203] = {0};

	grid[100][100] = 0;
	for( int i = 0; i < n; i++ ){
		grid[ block[i].first ][ block[i].second ] = -1;
	}

	

	return 0;
}
