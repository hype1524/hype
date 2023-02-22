#include<bits/stdc++.h>
using namespace std;
int* bis(int* a, int n)
{
	for(int j = 2; j <= n; j++)
	{
		int i = 1;
		int k = j;
		while(i < k)
		{
			int m = (i + k) / 2;
			if(a[j] > a[m]) i = m + 1;
			else k = m;
		};
		int n = a[j];
		for(int l = 0; l <= j - i - 1; l++){
			a[j - l] = a[j - l - 1];
		}
		a[i] = n;
	}
	return a;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 1; i <= n; i++) cin >> a[i];
	int* b = bis(a, n);
	for(int i = 1; i <= n; i++) cout << b[i] << ' ';
}
