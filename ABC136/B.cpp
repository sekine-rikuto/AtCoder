#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n;
	int ans=0;
	
	cin >> n;
	
	for(int i=1; i<=n; i++){
		if(i<10 || (100<=i && i<=999) || (10000<=i && i<=99999)){
			ans++;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}