#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

long long int comb(long long int a,long long int b){
	long long int n=1;
	for(int i=0; i<b; i++)	n*=(a-i);
	for(int i=1; i<=b; i++)	n/=i;
	
	return n;
}

int main(){
	int n;
	long long int cnt=0,ans=0;
	vector<int> tmp(35);
	bool eq=false;
	
	cin >> n;
	
	vector<string> s(n);
	vector<vector<int>> alphabet(n,vector<int>(35,0));
	
	for(int i=0; i<n; i++)	cin >> s[i];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<10; j++){
			alphabet.at(i).at(s[i].at(j)-97)++;
		}
	}
	
	sort(all(alphabet));
	
	tmp=alphabet.at(0);
	cnt=1;
	for(int i=1; i<n; i++){
		if(tmp!=alphabet.at(i)){
			if(cnt>=2){
				ans+=comb(cnt,2);
			}
			tmp=alphabet.at(i);
			cnt=1;
		}else{
			cnt++;
		}
	}
	if(cnt>=2){
		ans+=comb(cnt,2);
	}
	
	cout << ans << endl;
	
	return 0;
}