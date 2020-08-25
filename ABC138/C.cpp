#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	vector<double> v(n);
	
	for(int i=0; i<n; i++)	cin >> v[i];
	
	sort(all(v));

	for(int i=1; i<n; i++){
		v[i] = (v[i-1]+v[i])/2;
	}
	
	printf("%.12f\n",v[n-1]);
	
	return 0;
}