#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int k;	cin >> k;
	string s;	cin >> s;
	bool dot = false;

	if( (int)s.length() - k > 0 )	dot = true;

	for( int i = 0; i < s.length() && k > 0; i++, k-- ){
		cout << s[i];
	}

	if( dot )	cout << "...";

	cout << endl;

	return 0;
}
