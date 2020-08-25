#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
using namespace std;

int main(){
	int n;	cin >> n;

	if( n % 1000 )	cout << (1000 - n % 1000) << endl;
	else	cout << 0 << endl;

	return 0;
}
