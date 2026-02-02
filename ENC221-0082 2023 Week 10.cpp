#include <iostream>
#include <string>
#include <vector>

class Employee {
protected:
    std::string firstName;
    char initial;
    std::string lastName;
public:
    Employee(std::string f, char i, std::string l) : firstName(f), initial(i), lastName(l) {}
    virtual ~Employee() {}
    virtual double calculateMonthlyPay() = 0;
};

class SalaryEmployee : public Employee {
private:
    double salary;
public:
    SalaryEmployee(std::string f, char i, std::string l, double s) : Employee(f, i, l), salary(s) {}
    double calculateMonthlyPay() override { return salary; }
};

class HourlyEmployee : public Employee {
private:
    double rate, hours;
public:
    HourlyEmployee(std::string f, char i, std::string l, double r, double h) : Employee(f, i, l), rate(r), hours(h) {}
    double calculateMonthlyPay() override { return rate * hours; }
};

int main() {
    SalaryEmployee s("Alice", 'A', "Doe", 3000.0);
    HourlyEmployee h("Bob", 'B', "Smith", 20.0, 100.0);
    std::cout << s.calculateMonthlyPay() << " " << h.calculateMonthlyPay() << "\n";
    return 0;
}