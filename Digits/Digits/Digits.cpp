#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		int num;
		cin >> num;
		if (num == 0)
		{
			cout << 0;
		}
		while (num != 0) {
			cout << num % 10 << " ";
			num /= 10;
		}

		cout << endl;
	}
	return 0;
}