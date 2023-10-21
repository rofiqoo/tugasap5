#include <iostream>
#include <limits>

int main() {
    // Inisialisasi variabel untuk menyimpan data
    double data[10];

    // Membaca sepuluh data dari keyboard
    for (int i = 0; i < 10; i++) {
        std::cout << "Masukkan data ke-" << i + 1 << ": ";
        std::cin >> data[i];
    }

    // Menghitung nilai rata-rata
    double total = 0.0;
    for (int i = 0; i < 10; i++) {
        total += data[i];
    }
    double rata_rata = total / 10;

    // Mencari nilai terkecil dan terbesar
    double nilai_terkecil = std::numeric_limits<double>::max();
    double nilai_terbesar = std::numeric_limits<double>::lowest();
    for (int i = 0; i < 10; i++) {
        if (data[i] < nilai_terkecil) {
            nilai_terkecil = data[i];
        }
        if (data[i] > nilai_terbesar) {
            nilai_terbesar = data[i];
        }
    }

    // Melaporkan hasil
    std::cout << "Nilai rata-rata: " << rata_rata << std::endl;
    std::cout << "Nilai terkecil: " << nilai_terkecil << std::endl;
    std::cout << "Nilai terbesar: " << nilai_terbesar << std::endl;

    return 0;
}