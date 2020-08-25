#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int statT[2],statA[2];
	int turn = 1;
	cin >> statT[0] >> statT[1];
	cin >> statA[0] >> statA[1];

	while( statT[0] * statA[0] > 0 ){
		if( turn )	statA[0] -= statT[1];
		else	statT[0] -= statA[1];

		turn ^= 1;
	}

	if( statA[0] <= 0 )	cout << "Yes" << endl;
	else	cout << "No" << endl;

	return 0;
}
