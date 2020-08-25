#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define pi 3.14159265358979323846

using namespace std;

int main(){
	string s, t;	cin >> s >> t;

	if( s == t )	cout << "same" << endl;
	else{
		for( int i = 0; i < 3; i++ ){
			s[i] = toupper(s[i]);
			t[i] = toupper(t[i]);
		}
		if( s == t )	cout << "case-insensitive" << endl;
		else	cout << "different" << endl;
	}

	return 0;
}
