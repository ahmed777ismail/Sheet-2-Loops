#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Upper part of the diamond
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N - i; ++j) {
            cout << ' ';
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << '*';
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = N; i >= 1; --i) {
        for (int j = 1; j <= N - i; ++j) {
            cout << ' ';
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
