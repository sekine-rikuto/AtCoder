#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()

#define MOD 1000000007

using namespace std;

int main(){
	int k,x;
	
	cin >> k >> x;
	
	for(int i=x-k+1; i<x+k; i++){
		cout << i;
		if(i!=x+k-1)	cout << " ";
	}
	
	cout << endl;
	
	return 0;
}