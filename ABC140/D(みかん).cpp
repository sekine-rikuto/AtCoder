#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int n,k;
	int ans=0;
	cin >> n >> k;
	string s;
	cin >> s;

	vector<int> r, l;
	pair<int,char> cnt;

	cnt.first=1;
	cnt.second=s[0];
	for(int i=1; i<n; i++){
		if(cnt.second==s[i])	cnt.first++;
		else{
			if(cnt.second=='R')	r.push_back(cnt.first);
			else	l.push_back(cnt.first);

			cnt.first=1;
			cnt.second=s[i];
		}
	}
	if(cnt.second=='R')	r.push_back(cnt.first);
	else	l.push_back(cnt.first);

	if(r.size()<=k || l.size()<=k)	cout<< n-1 <<endl;
	else{
		if(r.size()<=l.size()){
			sort(all(r), greater<int>());

			for(int i=0; i<l.size(); i++)	ans+=l[i]-1;
			for(int i=0; i<k; i++)	ans+=r[i]+1;
			cout << ans << endl;
		}else{
			sort(all(l), greater<int>());

			for(int i=0; i<r.size(); i++)	ans+=r[i]-1;
			for(int i=0; i<k; i++)	ans+=l[i]+1;
			cout << ans << endl;
		}
	}

	return 0;
}
