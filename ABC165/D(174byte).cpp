#include <bits/stdc++.h>

using namespace std;

int main(){
	long int a, b, n;	cin >> a >> b >> n;

	cout << floor( a * min(n, b - 1) / b ) << endl;

	return 0;
}
