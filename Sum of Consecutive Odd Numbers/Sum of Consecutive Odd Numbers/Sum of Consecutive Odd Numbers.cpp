#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int x, y;
		cin >> x >> y;
		int minn = min(x, y);
		int maxx = max(x, y);
		int sum = 0;

		for (int j = minn + 1; j < maxx; j++)
		{
			if (j % 2 != 0)
			{
				sum += j;
			}
			cout << sum << endl;
		}
	}
	return 0;
}