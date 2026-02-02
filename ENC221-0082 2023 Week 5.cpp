#include <iostream>

struct Fraction {
    int numerator;
    int denominator;
};

const Fraction& findLargest(const Fraction& f1, const Fraction& f2, const Fraction& f3) {
    double v1 = (double)f1.numerator / f1.denominator;
    double v2 = (double)f2.numerator / f2.denominator;
    double v3 = (double)f3.numerator / f3.denominator;
    if (v1 >= v2 && v1 >= v3) return f1;
    else if (v2 >= v1 && v2 >= v3) return f2;
    else return f3;
}

int main() {
    Fraction fracA = {1, 2}, fracB = {3, 4}, fracC = {1, 3};
    const Fraction& largest = findLargest(fracA, fracB, fracC);
    std::cout << largest.numerator << "/" << largest.denominator << "\n";
    return 0;
}