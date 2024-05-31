#include <iostream>
using namespace std;


int main()
{


	int N;
	cin >> N;

	int max_number = 0;
	for (int i = 0; i < N; ++i) {
		int num;
		std::cin >> num;
		if (i == 0 || num > max_number) {
			max_number = num;
		}
	}

	cout << max_number << endl;

	return 0;


}

