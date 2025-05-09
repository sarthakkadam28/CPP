#include <iostream>
#include <vector>
#include <memory>  // for smart pointers

using namespace std;

// ======= Base Class =======
class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {}
    virtual void showDetails() = 0; // pure virtual (abstract class)
    virtual ~Employee() {}
};

// ======= Derived Classes =======

class Developer : public Employee { // is-a Employee
    string language;

public:
    Developer(string n, int i, string lang)
        : Employee(n, i), language(lang) {}

    void showDetails() {
        cout << "Developer: " << name << ", ID: " << id
             << ", Language: " << language << endl;
    }
};

class Manager : public Employee { // is-a Employee
    int teamSize;

public:
    Manager(string n, int i, int tSize)
        : Employee(n, i), teamSize(tSize) {}

    void showDetails() {
        cout << "Manager: " << name << ", ID: " << id
             << ", Team Size: " << teamSize << endl;
    }
};

// ======= Company Class =======

class Company {
private:
    string companyName;
    vector<shared_ptr<Employee>> employees;  // has-a relationship

public:
    Company(string name) : companyName(name) {}

    void addEmployee(shared_ptr<Employee> emp) {
        employees.push_back(emp);
    }

    void showAllEmployees() {
        cout << "\nCompany: " << companyName << "\n--- Employee List ---\n";
        for (auto& emp : employees)
            emp->showDetails();
    }
};

// ======= Main Function =======

int main() {
    Company myCompany("Transflower Learning");

    // Create employees
    shared_ptr<Employee> dev1 = make_shared<Developer>("Sharthak", 101, "C++");
    shared_ptr<Employee> dev2 = make_shared<Developer>("Sharayu", 102, "Python");
    shared_ptr<Employee> mgr1 = make_shared<Manager>("Shubhangi", 201, 5);

    // Add employees to company
    myCompany.addEmployee(dev1);
    myCompany.addEmployee(dev2);
    myCompany.addEmployee(mgr1);

    // Show all employee details
    myCompany.showAllEmployees();

    return 0;
}