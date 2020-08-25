#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	int a[n],b[n],c[n];
	int tmp[3];
	int ans[3];
	
	for(int i=0; i<n; i++)	cin >> a[i] >> b[i] >> c[i];
	
	ans[0]=a[0];
	ans[1]=b[0];
	ans[2]=c[0];
	for(int i=1; i<n; i++){
		tmp[0]=max(ans[1]+a[i],ans[2]+a[i]);
		tmp[1]=max(ans[0]+b[i],ans[2]+b[i]);
		tmp[2]=max(ans[0]+c[i],ans[1]+c[i]);
		
		ans[0]=tmp[0];
		ans[1]=tmp[1];
		ans[2]=tmp[2];
	}
	
	cout << max(max(ans[0],ans[1]),ans[2]) << endl;
	
	return 0;
}