#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	
	cin >> N;
	
	int h[N];
	int dp[N];
	
	for(int i=0; i<N; i++){
		cin >> h[i];
	}
	
//	1~N�̊e����ɓ��B���邽�߂̍ŏ��R�X�g�����߂�
	dp[0]=0;
	dp[1]=abs(h[1]-h[0]);
	for(int i=2; i<N; i++){
		dp[i]=min(dp[i-1]+abs(h[i-1]-h[i]),dp[i-2]+abs(h[i-2]-h[i]));
	}
	
	cout << dp[N-1] << endl;
	
	return 0;
}