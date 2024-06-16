#include <iostream>
using namespace std;
int main() {
    int num, dig1, dig2, someOfSum = 0;
    cin >> num >> dig1 >> dig2;
    for (int i = 1; i <= num; i++) {
        int sum = 0;
        for (int j = i; j > 0; j /= 10) {
            int counter = j % 10;
            sum += counter;
        }
        for (int c = dig1; c <= dig2; c++) {
            if (sum == c) {
                someOfSum += i;
            }
        }
    }
    cout << someOfSum;
    return 0;
}