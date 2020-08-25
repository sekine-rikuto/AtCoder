#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
using namespace std;

int main(){
	int n;	cin >> n;
	vector<int> list[n];
	for( int i = 0; i < n - 1; i++ ){
		int a, b;	cin >> a >> b;
		list[a - 1].push_back(b - 1);
		list[b - 1].push_back(a - 1);
	}

	for( int i = 0; i < n; i++ ){
		
	}

	return 0;
}
