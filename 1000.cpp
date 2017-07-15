#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[50][50], b[50][50],c[50][50];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> a[i][j];
			c[i][j]= a[i][j];
			b[i][j] = 0;
		}
	}
	for (int i = n-2; i >=0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			if (a[i+1][j] >= a[i+1][j + 1]) {
				a[i][j] += a[i+1][j];
				b[i][j] = 0;
			}
			else
			{
				a[i][j] += a[i+1][j+1];
				b[i][j] = 1;
			}
		}
	}
	cout << a[0][0] << endl;
	int j = 0;
	for (int i = 0; i <n-1; i++)
	{
		cout << c[i][j] << " ";
		j += b[i][j];
	}
	cout << c[n - 1][j];
	return 0;
}