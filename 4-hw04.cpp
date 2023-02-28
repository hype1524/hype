#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	int k = 0;
	int l = 0;
	if(a < 0)
	{
		a = -a;
		k = 1;
	}
	if(b < 0)
	{
		b = -b;
		l = 1;
	}
	int x0 = 1;
	int x1 = 0;
	int y0 = 0;
	int y1 = 1;
	while(b > 0)
	{
		int q = a / b;
		int r = a % b;
		if(r == 0) break;
		a = b;
		b = r;
		int x = x0 - x1 * q;
		int y = y0 - y1 * q;
		x0 = x1;
		x1 = x;
		y0 = y1;
		y1 = y;
	}
	if(k == 1) x1 = -x1;
	if(l == 1) y1 = - y1;
	cout << x1 << ' ' << y1;
}
