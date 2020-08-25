#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define pi 3.14159265358979323846

using namespace std;

int main(){
	int n, m, q;	cin >> n >> m >> q;
	vector<pair<int, int>> edge(m);
	vector<int> adj[n];
	for( int i = 0; i < m; i++ ){
		cin >> edge[i].first >> edge[i].second;

		edge[i].first--;
		edge[i].second--;

		if( find( all(adj[ edge[i].first ]), edge[i].second ) == adj[ edge[i].first ].end() ){
			adj[ edge[i].first ].push_back( edge[i].second );
		}
		if( find( all(adj[edge[i].second  ]), edge[i].first ) == adj[ edge[i].second ].end() ){
			adj[ edge[i].second ].push_back( edge[i].first );
		}
	}
	int color[n];
	for( int i = 0; i < n; i++ ){
		cin >> color[i];
	}
	int form[q];
	vector<pair<int, int>> s(q);
	for( int i = 0; i < q; i++ ){
		cin >> form[i];
		cin >> s[i].first;
		if( form[i] == 2 )	cin >> s[i].second;

		s[i].first--;
	}

	for( int i = 0; i < q; i++ ){
		cout << color[ s[i].first ] << endl;
		if( form[i] == 1 ){
			for( int j = 0; j < adj[ s[i].first ].size(); j++ ){
				color[ adj[ s[i].first ][j] ] = color[ s[i].first ];
			}
		}else{
			color[ s[i].first ] = s[i].second;
		}
	}

	return 0;
}
