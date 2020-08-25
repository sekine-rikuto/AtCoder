#include <bits/stdc++.h>

using namespace std;

int main(){
	int N,M;
	int upl,lowl;
	
	cin >> N >> M;
	
	int L[M],R[M];
	
	for(int i=0; i<M; i++){
		cin >> L[i] >> R[i];
	}
	
	upl=0;
	lowl=N;
	for(int i=0; i<M; i++){
		if(L[i] > upl)	upl=L[i];
		if(R[i] < lowl)	lowl=R[i];
	}
	
	if(upl > lowl)	cout << "0" << endl;
	else	cout << lowl-upl+1 << endl;
	
	return 0;
}