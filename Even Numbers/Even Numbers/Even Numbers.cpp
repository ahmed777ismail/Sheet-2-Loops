#include <iostream>
using namespace std;


int main()
{
	short num;
	cin >> num;
	if (num == 1)
	{
		cout << -1 << endl;
	}
	else
	{
		for (int i = 2; i <= num; i += 2)
		{
			cout << i << endl;
		}
	}

}

