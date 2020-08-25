#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n,d;
	int ans=0;
	double tmp;
	
	cin >> n >> d;
	
	int x[n][d];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<d; j++){
			cin >> x[i][j];
		}
	}
	
	
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			tmp=0;
			
			for(int k=0; k<d; k++){
				tmp+=pow((x[i][k]-x[j][k]),2);
			}
			
			tmp=pow(tmp,0.5);
			
			if(ceil(tmp)==floor(tmp))	ans++;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}