#include <iostream>
using namespace std;


int main()
{
	int v;
	cin >> v;
	int n;
	for (int i = 1; i <= v; i++)
	{
		cin >> n;
		long long vec = 1;
		for (int i = 1; i <= n; i++)
		{
			vec = vec * i;
		}
		cout << vec << endl;
	}

}
