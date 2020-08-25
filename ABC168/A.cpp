#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n;	cin >> n;
	n %= 10;

	switch(n){
		case 2:
		case 4:
		case 5:
		case 7:
		case 9:
		cout << "h";
		break;

		case 0:
		case 1:
		case 6:
		case 8:
		cout << "p";
		break;

		case 3:
		cout << "b";
		break;
	}

	cout << "on" << endl;

	return 0;
}
