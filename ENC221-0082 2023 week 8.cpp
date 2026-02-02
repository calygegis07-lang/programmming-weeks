#include <iostream>

class Square {
protected:
    double side;
public:
    Square(double s) : side(s) {}
    ~Square() {}
    double getPeri() { return 4 * side; }
    virtual double getArea() { return side * side; }
};

class Cube : public Square {
public:
    Cube(double s) : Square(s) {}
    ~Cube() {}
    double getArea() override { return 6 * side * side; }
    double getVolume() { return side * side * side; }
};

int main() {
    Square sq(5.0);
    Cube cb(3.0);
    std::cout << sq.getArea() << " " << cb.getVolume() << "\n";
    return 0;
}