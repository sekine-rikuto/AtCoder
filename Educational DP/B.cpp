#include <bits/stdc++.h>

using namespace std;

int main(){
	int N,K;

	cin >> N >> K;
	
	int h[N];
	int dp[N];
	
	for(int i=0; i<N ;i++){
		cin >> h[i];
	}
	
	dp[0]=0;
	dp[1]=abs(h[1]-h[0]);
	for(int i=2; i<N; i++){
		dp[i]=dp[i-1]+abs(h[i]-h[i-1]);
		for(int j=2; j<=K && j<=i; j++){
			dp[i]=min(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
		}
	}
	
	cout << dp[N-1] << endl;
	
	return 0;
}