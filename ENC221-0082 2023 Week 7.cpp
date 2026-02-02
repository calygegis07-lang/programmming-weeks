#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int age, serviceYear;
    double salary;
public:
    Employee(std::string n, int a, int s, double sal) : name(n), age(a), serviceYear(s), salary(sal) {}
    ~Employee() {}
    std::string getName() { return name; }
    int getAge() { return age; }
    int getServiceYear() { return serviceYear; }
    double getSalary() { return salary; }
};

int main() {
    Employee emp("John", 30, 5, 50000.0);
    std::cout << emp.getName() << " " << emp.getSalary() << "\n";
    return 0;
}