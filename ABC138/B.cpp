#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n;
	double ans=0;
	
	cin >> n;
	
	double a[n];
	
	for(int i=0; i<n; i++)	cin >> a[i];
	
	for(int i=0; i<n; i++)	ans+=1/a[i];
	
	printf("%.14f\n",1/ans);
	
	return 0;
}