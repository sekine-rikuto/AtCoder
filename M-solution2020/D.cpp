#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007

using namespace std;

int main(){
	int n;	cin >> n;
	vector<int> a;
	for( int i = 0; i < n; i++ ){
		int tmp;	cin >> tmp;
		if( i == 0 || a[i-1] != tmp ){
			a.push_back( tmp );
		}
	}
	vector<pair<int, int>> upR;
	long long int money = 1000;

	for( int i = 1; i < a.size(); i++ ){
		upR.push_back( make_pair( a[i-1], a[i] - a[i-1] ) );
		if( i > 1 && upR[ upR.size() - 1 ].second > 0 && upR[ upR.size() - 2 ].second > 0 ){
			upR[ upR.size() - 2 ].second += upR[ upR.size() - 1].second;
			upR.pop_back();
		}
	}

/*
	for( int i = 0; i < upR.size(); i++ ){
		cout << upR[i].first << "," << upR[i].second << endl;
	}
*/

	for( int i = 0; i < upR.size(); i++ ){
		if( upR[i].second > 0 ){
			money += money / upR[i].first * upR[i].second;
		}
	}

	cout << money << endl;

	return 0;
}
