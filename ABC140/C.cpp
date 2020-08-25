#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n;
	int ans;
	int bef;
	cin >> n;

	int b[n-1];
	for(int i=0; i<n-1; i++)	cin >> b[i];

	ans = b[n-2];
	for(int i=n-1; i>1; i--){
		ans+=min(b[i-2],b[i-1]);
	}
	ans+=b[0];

	cout << ans << endl;

	return 0;
}
