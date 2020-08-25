#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	long long int n;
	long long int i,j,ans;
	long long int tmp[18] = {0};
	cin >> n;

	i=0;
	j=0;
	ans=0;
	while( n/10 != 0 ){
		tmp[i]=n/10;
		i++;
		n/=10;
	}
	for( i=i-1; i>=0; i-- ){
		ans+=(i+1)*tmp[i];
	}
	cout << ans << endl;

	return 0;
}
