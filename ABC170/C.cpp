#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define pi 3.14159265358979323846

using namespace std;

int main(){
	int x, n;	cin >> x >> n;
	vector<int> p;
	p.push_back(-1);
	if( n != 0 ){
		for( int i = 0; i < n; i++ ){
			int tmp;
			cin >> tmp;
			p.push_back(tmp);
		}
	}else{
		getchar();
		getchar();
	}
	int cnt = 0;
	int ans = 0;

	sort( all(p) );

	if( n != 0 )	cnt++;

	for( int i = 0; i <= 101; i++ ){
		if( i != p[cnt] ){
			if( abs( x - i ) < abs( x - ans ) ){
				ans = i;
			}
		}else{
			cnt++;
		}
	}

	cout << ans << endl;

	return 0;
}
