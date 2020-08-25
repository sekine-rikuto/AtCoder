#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n,a,b;
	
	cin >> n >> a >> b;
	
	cout << min(n*a,b) << endl;
	
	return 0;
}