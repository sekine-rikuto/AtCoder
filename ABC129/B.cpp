#include <bits/stdc++.h>

#define REP(i,n) for(int i=0,len=(n); i<len; i++)
#define all(x) (x).begin(),(x).end()

using namespace std;

int main(){
	int n;
	int sum[2];
	int ans;
	
	cin >> n;
	
	int w[n];
	
	for(int i=0; i<n; i++){
		cin >> w[i];
	}
	
	ans=100000;
	for(int i=0; i<n; i++){
		sum[0]=0;
		sum[1]=0;
		
		for(int j=0; j<i; j++){
			sum[0]+=w[j];
		}
		for(int j=i; j<n; j++){
			sum[1]+=w[j];
		}
		
		ans=min(ans,abs(sum[0]-sum[1]));
	}
	
	cout << ans << endl;
	
	return 0;
}