#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define pi 3.14159265358979323846

using namespace std;

int main(){
	int n, q;	cin >> n >> q;
	int form[q];
	vector<pair<int, int>> query(q);
	for( int i = 0; i < q; i++ ){
		cin >> form[i];
		if( form[i] != 3 ){
			cin >> query[i].first >> query[i].second;
		}
	}

	// 0:行, 1:列
	vector<int> pos[2];
	bool trans = false;
	vector<int>::iterator ite[2];

	for( int i = 1; i < n + 1; i++ ){
		pos[0].push_back(i);
		pos[1].push_back(i);
	}

	for( int i = 0; i < q; i++ ){
		switch( form[i] ){
			case 1:
				if( query[i].first == query[i].second )	break;

				if( trans )	swap( pos[1][ query[i].first - 1 ], pos[1][ query[i].second - 1 ] );
				else		swap( pos[0][ query[i].first - 1 ], pos[0][ query[i].second - 1 ] );
				break;

			case 2:
				if( query[i].first == query[i].second )	break;

				if( trans )	swap( pos[0][ query[i].first - 1 ], pos[0][ query[i].second - 1 ] );
				else		swap( pos[1][ query[i].first - 1 ], pos[1][ query[i].second - 1 ] );
				break;

			case 3:
				if( trans )	trans = false;
				else		trans = true;
				break;

			case 4:
				int tmp[2];
				if( trans ){
					ite[0] = find( all(pos[1]), query[i].first );
					ite[1] = find( all(pos[0]), query[i].second );

					tmp[0] = ite[0] - pos[1].begin();
					tmp[1] = ite[1] - pos[0].begin();

					cout << n * tmp[1] + tmp[0] << endl;
				}else{
					ite[0] = find( all(pos[0]), query[i].first );
					ite[1] = find( all(pos[1]), query[i].second );

					tmp[0] = ite[0] - pos[0].begin();
					tmp[1] = ite[1] - pos[1].begin();

					cout << n * tmp[0] + tmp[1] << endl;
				}
				break;
		}
	}

	return 0;
}
