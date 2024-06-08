#include <iostream>
using namespace std;

int main() {
    int a, b, store, copy, flag = 0, indicator = 0; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        copy = i;
        flag = 0;
        while (copy) {
            store = copy % 10;
            if (store == 4 || store == 7) { flag = 1; }
            else { flag = 0; break; }
            copy /= 10;


        } if (flag == 1) { cout << i << " "; indicator = 1; }
    }
    if (indicator == 0) cout << -1;
}