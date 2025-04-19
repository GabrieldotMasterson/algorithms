// Classes
// What is a class?
// A class is a blueprint for creating objects. It defines a set of attributes (variables)
// and methods (functions) that the objects created from the class will have.

// What's the difference between a class and a struct?
// --> The main difference is the default access level and how they are typically used.
//     In C++, classes and structs are almost the same, but:
//       - In a struct, members are public by default.
//       - In a class, members are private by default.
//     Also, classes are often used to model objects with behavior (methods),
//     while structs are usually used for simple data grouping.


#include <iostream>

using namespace std;

class Worker {
    public:
        int id;
        string name;
        string position;
        int salary;

        Worker(int id, string name, string position, int salary) {
            this->id = id;
            this->name = name;
            this->position = position;
            this->salary = salary;
        }

        int printWorker() {
            cout << "ID: " << id << ", Name: " << name << ", Position: " << position << ", Salary: " << salary << endl;
            return 0;
        }
};

int main() {
    Worker worker1(1, "Alice", "Manager", 50000);
    Worker worker2(2, "Bob", "Developer", 60000);

    worker1.printWorker();
    worker2.printWorker();

    return 0;
}