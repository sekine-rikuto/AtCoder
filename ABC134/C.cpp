#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	vector<int> a(n);
	vector<int> ca(n);
	
	for(int i=0; i<n; i++){
		cin >> a[i];
		ca[i]=a[i];
	}
	
	sort(all(ca));
	
	for(int i=0; i<n; i++){
		if(a[i]==ca[n-1])	cout << ca[n-2] << endl;
		else	cout << ca[n-1] << endl;
	}
	
	return 0;
}