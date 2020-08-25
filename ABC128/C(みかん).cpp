#include <bits/stdc++.h>

using namespace std;

int main(){
	int N,M;
	int buf;
	
	cin >> N >> M;
	
	int k[M];
	vector<vector<int>> s(M);
	int p[M];
	int sw[N];
	int st;
	int ans;
	
	for(int i=0; i<M; i++){
		cin >> k[i];
		for(int j=0; j<k[i]; j++){
			cin >> buf;
			s[i].push_back(buf);
		}
	}
	
	for(int i=0; i<M; i++){
		cin >> p[i];
	}
	
	for(int i=0; i<N; i++){
		sw[i]=0;
	}
	
	
	return 0;
}