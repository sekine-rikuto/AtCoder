#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	long long int a,b;
	long long int tmp[2],gcd;
	cin >> a >> b;

	tmp[0] = a;
	tmp[1] = b;
	while(tmp[0] % tmp[1] != 0){
		gcd = tmp[0] % tmp[1];
		tmp[0] = tmp[1];
		tmp[1] = gcd;
	}
	gcd = tmp[1];

	cout << a*b / gcd << endl;

	return 0;
}
