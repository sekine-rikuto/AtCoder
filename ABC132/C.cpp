#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	vector<int> d(n);
	
	for(int i=0; i<n; i++)	cin >> d[i];
	
	sort(all(d));
	
	cout << d[n/2]-d[n/2-1] << endl;
	
	return 0;
}