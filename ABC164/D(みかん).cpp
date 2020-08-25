#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	string multipleList[100];
	int cnt = 0;
	match_results<std::string::iterator> result;
	int ans = 0;
	string s;
	cin >> s;

	for( int i=1; i<100; i++ ){
		multipleList[cnt] = to_string( 2019 * i );
		if( !regex_search( multipleList[cnt], regex( "0" ) ) ){
			cnt++;
		}
	}

	for( int i=0; i<cnt; i++ ){
		string::iterator pos = s.begin();
		do{
			if( regex_search( pos, s.end(), result, regex( multipleList[i] ) ) ){
				pos += result.position(0) + 1;
				ans++;
			}
		}while( result.size() != 0 );
	}

	cout << ans << endl;

	return 0;
}
