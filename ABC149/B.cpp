#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	long long int a,b,k;
	cin >> a >> b >> k;

	if( a <= k ){
		cout << "0 ";
		if( a+b-k < 0 )	cout << "0" << endl;
		else	cout << a+b-k << endl;
	}else{
		cout << a-k << " " << b << endl;
	}

	return 0;
}
