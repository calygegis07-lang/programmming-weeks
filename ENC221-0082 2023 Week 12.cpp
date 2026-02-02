#include <iostream>
#include <string>
#include <vector>

class Course {
private:
    std::string name;
public:
    Course(std::string n) : name(n) {}
    std::string getName() { return name; }
};

class Student {
private:
    std::string name;
    std::vector<Course*> courses;
public:
    Student(std::string n) : name(n) {}
    void registerCourse(Course* c) { courses.push_back(c); }
    void display() {
        for (Course* c : courses) std::cout << c->getName() << " ";
    }
};

int main() {
    Course c1("Math");
    Student s("Jane");
    s.registerCourse(&c1);
    s.display();
    return 0;
}