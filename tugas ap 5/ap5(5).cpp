#include <iostream>
#include <string>

int main() {
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < alphabet.length(); i++) {
        for (int j = i; j < alphabet.length(); j++) {
            std::cout << alphabet[j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}