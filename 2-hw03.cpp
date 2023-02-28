#include<bits/stdc++.h>
using namespace std;
int ts(int x, int n, int* a)
{
	int i = 1;
	int j = n;
	while(i < j)
	{
		int m = (i + j + 1) / 2;
		if(x >= a[m])
		{
			i = m;
		}
		else j = m - 1;
	}
	int location;
	if(x == a[i]) location = i;
	else location = 0;
	return location;
}
int main()
{
	int x;
	cin >> x;
	int n;
	cin >> n;
	int a[n];
	for(int i = 1; i <= n; i++) cin >> a[i];
	cout << ts(x, n, a);
}
