#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int a,b,c;
	
	cin >> a >> b >> c;
	
	cout << (a-b>=c ? 0 : c-a+b) << endl;
	
	return 0;
}