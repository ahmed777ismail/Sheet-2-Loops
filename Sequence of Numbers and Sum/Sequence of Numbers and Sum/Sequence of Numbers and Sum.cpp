#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	while (num1 > 0 && num2 > 0) {
		if (num1 > num2) {
			int temp = num2;
			num2 = num1;
			num1 = temp;
		}
		int sum = 0;
		for (int i = num1; i <= num2; i++) {
			cout << i << " ";
			sum = sum + i;
		}
		cout << "sum =" << sum;
		cout << "\n";
		cin >> num1 >> num2;
	}
	return 0;
}