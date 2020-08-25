#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define pi 3.14159265358979323846

using namespace std;

int main(){
	long long int a, r, n;	cin >> a >> r >> n;
	long long int num;

	num = a * pow(r, (n - 1));

	if( num > 1000000000 || num < 0 )	cout << "large" << endl;
	else	cout << num << endl;

	return 0;
}
