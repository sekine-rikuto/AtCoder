#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int h,w,n;
	cin >> h >> w >> n;
	int ans=0;

	ans = n/max(h,w);
	if( n%max(h,w) != 0 )	ans++;

	cout << ans << endl;

	return 0;
}
