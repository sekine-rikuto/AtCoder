#include <bits/stdc++.h>

using namespace std;

int main(){
	string X,Y;
	
	cin >> X >> Y;
	
	if(X==Y)	cout << "=" << endl;
	if(X>Y)		cout << ">" << endl;
	if(X<Y)		cout << "<" << endl;
	
	return 0;
}