#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	cin >> x >> y;
	if(x==y){cout << "=" << endl; return 0;}
	if(x==1){cout << "<" << endl; return 0;}
	if(y==1){cout << ">" << endl; return 0;}
	if(x==2){
		if(y==4){cout << "=" << endl; return 0;}
		if(y<4){cout << "<" << endl; return 0;}
		if(y>4){cout << ">" << endl; return 0;}
	}
	if(y==2){
		if(x==4){cout << "=" << endl; return 0;};
		if(x<4){cout << "<" << endl; return 0;};
		if(x>4){cout << ">" << endl; return 0;};
	}
	cout << x<y?">":"<" << endl;
	return 0;
}
