#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {5, 12, 3, 20, 8, 15};
    int limit = 10;
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (numbers[i] > limit) {
            std::cout << numbers[i] << " > " << limit << "\n";
        } else {
            std::cout << numbers[i] << " <= " << limit << "\n";
        }
    }
    int count = 3;
    while (count > 0) {
        std::cout << count << "\n";
        count--;
    }
    return 0;
}