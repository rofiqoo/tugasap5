#include <iostream>

int hitung_faktorial(int n) {
    int hasil = 1;
    for (int i = n; i >= 1; i--) {
        hasil *= i;
    }
    return hasil;
}

int main() {
    int n;
    std::cout << "Masukkan nilai n: ";
    std::cin >> n;

    int faktorial = hitung_faktorial(n);
    std::cout << n << "! = " << faktorial << std::endl;

    return 0;
}