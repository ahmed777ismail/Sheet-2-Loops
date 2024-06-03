#include <iostream>
using namespace std;

int main()
{
	bool check = 0;
	int x;
	cin >> x;
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0) {
			check = 1;
		}
	}
	if (check == 0)
	{
		cout << "YES";

	}
	else {
		cout << "NO";
	}
}

