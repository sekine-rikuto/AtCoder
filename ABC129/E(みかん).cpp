#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

using namespace std;

int main(){
	string L;
	int num;
	int ans;
	
	cin >> L;
	
	num=0;
	for(int i=0; i<L.length(); i++){
		num+=(L[i]-'0')*(int)pow(2,(double)(L.length()-1-i));
	}
	
	ans=0;
	for(int i=0; i<=num; i++){
		for(int j=num-i; j>=0; j--){
			if(i+j==i^j)	ans++;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}