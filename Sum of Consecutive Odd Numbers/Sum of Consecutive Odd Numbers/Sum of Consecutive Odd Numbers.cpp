#include <iostream>
using namespace std;

int sumOfOddNumbers(int x, int y) {
    int sum = 0;
    if (x > y) swap(x, y);
    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        cout << sumOfOddNumbers(X, Y) << endl;
    }
    return 0;
}
