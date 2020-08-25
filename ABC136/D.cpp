#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	string s;
	int cnt=0;
	char before='R';
	vector<int> tmp;
	vector<int> ans;
	
	cin >> s;
	
	for(int i=0; i<s.length(); i++){
		if(before==s[i])	cnt++;
		else{
			tmp.push_back(cnt);
			cnt=1;
			before=s[i];
		}
	}
	tmp.push_back(cnt);
	
	for(int i=0; i<tmp.size(); i+=2){
		for(int j=0; j<tmp[i]-1; j++){
			ans.push_back(0);
		}
		ans.push_back(tmp[i]/2+tmp[i]%2+tmp[i+1]/2);
		ans.push_back(tmp[i]/2+tmp[i+1]/2+tmp[i+1]%2);
		for(int j=0; j<tmp[i+1]-1; j++){
			ans.push_back(0);
		}
	}
	
	for(int i=0; i<ans.size(); i++){
		cout << ans[i];
		if(i!=ans.size()-1)	cout << " ";
	}
	cout << endl;
	
	return 0;
}