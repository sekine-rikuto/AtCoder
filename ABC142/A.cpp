#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n;
	cin >> n;

	printf( "%.10lf", (n/2 + n%2) / (double)n );

	return 0;
}
