#include <iostream>
#include <vector>

int main() {
    char S;
    int N;
    std::cin >> S >> N;
    std::vector<int> numbers(N);

    for(int i = 0; i < N; ++i) {
        std::cin >> numbers[i];
    }

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < numbers[i]; ++j) {
            std::cout << S;
        }
        std::cout << std::endl;
    }

    return 0;
}

