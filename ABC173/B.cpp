#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
using namespace std;

int main(){
	int n;	cin >> n;
	int cnt[4] = {0};
	string s[n];
	for( int i = 0; i < n; i++ ){
		cin >> s[i];
		if( s[i] == "AC" )			cnt[0]++;
		else if( s[i] == "WA" )		cnt[1]++;
		else if( s[i] == "TLE" )	cnt[2]++;
		else if( s[i] == "RE" )		cnt[3]++;
	}

	cout << "AC x " << cnt[0] << endl;
	cout << "WA x " << cnt[1] << endl;
	cout << "TLE x " << cnt[2] << endl;
	cout << "RE x " << cnt[3] << endl;

	return 0;
}
