#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
using namespace std;

int main(){
	long long int n;	cin >> n;
	vector<char> ans;

	while( n > 0 ){
		n--;
		ans.push_back( (n % 26) + 'a' );
		n /= 26;
	}

	for( int i = ans.size(); i > 0; i-- ){
		cout << ans[i - 1];
	}
	cout << endl;

	return 0;
}
