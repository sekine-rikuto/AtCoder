#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	long long int x;	cin >> x;
	int i = 0;
	long long int dep = 100;

	while( dep < x ){
		dep *= 1.01;
		i++;
	}

	cout << i << endl;

	return 0;
}
