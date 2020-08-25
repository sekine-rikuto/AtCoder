#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	
	cin >> N;
	
	string S[N];
	vector<int> P(N);
	string sbuf;
	int pbuf;
	
	for(int i=0; i<N; i++){
		cin >> S[i] >> P[i];
	}
	
	string cS[N](S);
	vector<int> cP(P);
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(cS[i]==cS[j] && cP[i]>cP[j]){
				sbuf=cS[i];
				cS[i]=cS[j];
				cS[j]=sbuf;
				pbuf=cP[i];
				cP[i]=cP[j];
				cP[j]=pbuf;
			}else if(cS[i]<cS[j]){
				sbuf=cS[i];
				cS[i]=cS[j];
				cS[j]=sbuf;
				pbuf=cP[i];
				cP[i]=cP[j];
				cP[j]=pbuf;
			}
		}
	}
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(cP[i]==P[j]){
				cout << j+1 << endl;
			}
		}
	}
	
	return 0;
}