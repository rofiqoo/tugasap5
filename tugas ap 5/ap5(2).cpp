#include <iostream>

int main() {
    int n = 5; // banyaknya baris

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}