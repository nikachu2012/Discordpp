#include <iostream>

int main() {
    std::cout << "\x1b[1mDiscord++\x1b[0m version 1.0 alpha" << std::endl << "This software is not associated with Discord." << std::endl;

    auto input = std::cin.get();
    return input ? input : 1;
}