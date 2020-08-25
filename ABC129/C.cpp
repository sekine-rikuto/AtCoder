#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define mod 1000000007;

using namespace std;

int main(){
	int n,m;
	int check=0;
	
	cin >> n >> m;
	
	int a[m];
	long long int dp[n+1];
	
	for(int i=0; i<m; i++){
		cin >> a[i];
	}
	
	for(int i=0; i<=n; i++){
		dp[i]=0;
	}
	
	for(int i=0; i<m; i++){
		dp[a[i]]=-1;
	}
	
	dp[0]=1;
	if(dp[1]!=-1)	dp[1]=1;
	for(int i=2; i<=n; i++){
		if(dp[i]!=-1){
			if(dp[i-1]!=-1)	dp[i]+=dp[i-1];
			dp[i]%=mod;
			if(dp[i-2]!=-1)	dp[i]+=dp[i-2];
			dp[i]%=mod;
			
			if(dp[i]==0){
				check=1;
				break;
			}
		}
	}
	
	if(check==1)	cout << "0" << endl;
	else	cout << dp[n] << endl;
	
	return 0;
}
