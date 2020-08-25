#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}

int main(){
	int n,q;
	int tmp;
	
	cin >> n >> q;
	
	vector<pair<int,int>> ab(n-1);
	vector<pair<int,int>> px(q);
	vector<int> ans(n,0);
	
	for(int i=0; i<n-1; i++)	cin >> ab[i].first >> ab[i].second;
	for(int i=0; i<q; i++)	cin >> px[i].first >> px[i].second;
	
	for(int i=0; i<n-1; i++){
		if(ab[i].first>ab[i].second){
			tmp=ab[i].first;
			ab[i].first=ab[i].second;
			ab[i].second=tmp;
		}
	}
	
	sort(all(ab),comp);
	
	for(int i=0; i<q; i++){
		ans[px[i].first-1]+=px[i].second;
	}
	
	cout << ans[0] << " ";
	for(int i=1; i<n; i++){
		ans[i]+=ans[ab[i-1].first-1];
		cout << ans[i];
		
		if(i!=n-1)	cout << " ";
	}
	cout << endl;
	
	return 0;
}