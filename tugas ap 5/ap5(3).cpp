#include <iostream>

int main() {
    double S = 0;
    for (int i = 1; i <= 1000; i++) {
        if (i % 2 == 0) {
            S -= 1.0 / i;
        } else {
            S += 1.0 / i;
        }
    }

    std::cout << "Nilai S = " << S << std::endl;

    return 0;
}