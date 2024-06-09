#include <iostream>
using namespace std;



int main()
{
	char l;
	cin >> l;
	short Size;
	cin >> Size;
	
	for (int i = 1; i <= Size; i++)
	{
		short n;
		cin >> n;

		for (int j = 0; j <= n; j++)
		{
			cout << l;
		}
		cout << endl;
	}



	return 0;
}

