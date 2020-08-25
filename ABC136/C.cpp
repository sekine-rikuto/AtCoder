#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n;
	bool ans = true;
	
	cin >> n;
	
	int h[n];
	
	for(int i=0; i<n; i++)	cin >> h[i];
	
	if(n==1){
		cout << "Yes" << endl;
	}else{
		for(int i=n-1; i>=1; i--){
			if(h[i-1]-h[i]>1){
				ans=false;
			}
			if(h[i-1]-h[i]==1){
				h[i-1]--;
			}
		}
		
		cout << (ans ? "Yes" : "No") << endl;
	}
	
	return 0;
}