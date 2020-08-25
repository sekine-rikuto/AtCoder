#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int a,b;
	
	cin >> a >> b;
	
	cout << max({a+b,a-b,a*b}) << endl;
	
	return 0;
}