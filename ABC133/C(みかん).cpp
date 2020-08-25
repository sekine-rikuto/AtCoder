#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	long long int l,r;
	long long int range;
	
	cin >> l >> r;
	
	range=r-l+1;
	
	vector<int> tmp(range);
	
	fill(all(tmp),2020);
	
	if(l+1==r)	cout << (l*r)%2019 << endl;
	else if(r-l>=2019)	cout << "0" << endl;
	else{
		tmp[0]=l%2019;
		for(long long int i=1; i<range; i++){
			tmp[i]=tmp[i-1]+1;
			if(tmp[i]==2019)	tmp[i]=0;
		}
		
		sort(all(tmp));
		
		cout << (tmp[0]*tmp[1])%2019 << endl;
	}
	
	return 0;
}