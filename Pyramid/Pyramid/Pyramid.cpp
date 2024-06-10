#include <iostream>
using namespace std;



int main()
{
	int n;
	cin >> n;

	string shape = "";


	for (int i = 0; i < n; i++)
	{
		shape += '*';
		cout << shape << endl;
	}


	return 0;
}

