#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define pi 3.14159265358979323846

using namespace std;

vector<vector<bool>> num{
	{	// 0
		 true,  true,  true,
		 true, false,  true,
		 true, false,  true,
		 true, false,  true,
		 true,  true,  true
	},
	{	// 1
		false,  true, false,
		 true,  true, false,
		false,  true, false,
		false,  true, false,
		 true,  true,  true
	},
	{	// 2
		 true,  true,  true,
		false, false,  true,
		 true,  true,  true,
		 true, false, false,
		 true,  true,  true
	},
	{	// 3
		 true,  true,  true,
		false, false,  true,
		 true,  true,  true,
		false, false,  true,
		 true,  true,  true
	},
	{	// 4
		 true, false,  true,
		 true, false,  true,
		 true,  true,  true,
		false, false,  true,
		false, false,  true
	},
	{	// 5
		 true,  true,  true,
		 true, false, false,
		 true,  true,  true,
		false, false,  true,
		 true,  true,  true
	},
	{	// 6
		 true,  true,  true,
		 true, false, false,
		 true,  true,  true,
		 true, false,  true,
		 true,  true,  true
	},
	{	// 7
		 true,  true,  true,
		false, false,  true,
		false, false,  true,
		false, false,  true,
		false, false,  true
	},
	{	// 8
		 true,  true,  true,
		 true, false,  true,
		 true,  true,  true,
		 true, false,  true,
		 true,  true,  true
	},
	{	// 9
		 true,  true,  true,
		 true, false,  true,
		 true,  true,  true,
		false, false,  true,
		 true,  true,  true
	}
};

int main(){
	int n;	cin >> n;
	string s[5];
	for( int i = 0; i < 5; i++ ){
		cin >> s[i];
	}
	vector<bool> pattern;

	for( int i = 0; i < n; i++ ){
		pattern.clear();

		for( int j = 0; j < 5; j++ ){
			for( int k = 4 * i + 1; k < 4 * (i + 1); k++ ){
				if( s[j][k] == '#' ){
					pattern.push_back( true );
				}else{
					pattern.push_back( false );
				}
			}
		}

		for( int j = 0; j < 10; j++ ){
			if( pattern == num[j] ){
				cout << j;
				j = 10;
			}
		}
	}

	cout << endl;

	return 0;
}
