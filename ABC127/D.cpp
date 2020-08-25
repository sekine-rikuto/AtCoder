#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int,int> a,pair<int,int> b){
	return a.second > b.second;
}

int main(){
	int N,M;
	long long int ans;
	int j;
	
	cin >> N >> M;
	
	vector<int> A(N);
	vector<pair<int,int>> B(M);
	
	for(int i=0; i<N; i++){
		cin >> A[i];
	}
	
	for(int i=0; i<M; i++){
		cin >> B[i].first >> B[i].second;
	}
	
	sort(A.begin(),A.end());
	
	sort(B.begin(),B.end(),compare);
	
	j=0;
	for(int i=0; i<N; i++){
		if(A[i] < B[j].second)	A[i]=B[j].second;
		B[j].first--;
		
		if(B[j].first == 0){
			if(j != M-1)	j++;
			else	break;
		}
	}
	
	ans=0;
	for(int i=0; i<N; i++){
		ans+=A[i];
	}
	
	cout << ans << endl;
	
	return 0;
}