#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    int original[20];
    std::vector<int> odds, evens;
    for (int i = 0; i < 20; ++i) {
        original[i] = (std::rand() % 100) + 1;
        if (original[i] % 2 == 0) evens.push_back(original[i]);
        else odds.push_back(original[i]);
    }
    for (int n : evens) std::cout << n << " ";
    std::cout << "\n";
    for (int n : odds) std::cout << n << " ";
    return 0;
}