#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    double basicSalary;
    double pf;
    double bonus;

public:
    Employee(string empName, double basic, double pfValue, double bonusValue)
        : name(empName), basicSalary(basic), pf(pfValue), bonus(bonusValue) {}

    virtual void ComputePay()
    {
        double totalSalary = basicSalary - pf + bonus;
        cout << "Employee " << name << " Salary Details: " << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Provident Fund Deduction: " << pf << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
    virtual ~Employee() {}
};
class SalesEmployee : public Employee
{
protected:
    double commission;

public:
    SalesEmployee(string empName, double basic, double pfValue, double bonusValue, double comm)
        : Employee(empName, basic, pfValue, bonusValue), commission(comm) {}

    void ComputePay() override
    {
        double totalSalary = basicSalary - pf + bonus + commission;
        cout << "Sales Employee " << name << " Salary Details: " << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Provident Fund Deduction: " << pf << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Commission: " << commission << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    virtual ~SalesEmployee() {}
};

class SalesManager : public SalesEmployee
{
private:
    double managerBonus;

public:
    SalesManager(string empName, double basic, double pfValue, double bonusValue, double comm, double mgrBonus)
        : SalesEmployee(empName, basic, pfValue, bonusValue, comm), managerBonus(mgrBonus) {}

    void ComputePay() override
    {
        double totalSalary = basicSalary - pf + bonus + commission + managerBonus;
        cout << "Sales Manager " << name << " Salary Details: " << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Provident Fund Deduction: " << pf << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Commission: " << commission << endl;
        cout << "Manager Bonus: " << managerBonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    virtual ~SalesManager() {}
};
int main()
{
    Employee emp1("Sanika Kulkarni", 50000, 2000, 200);
    SalesManager emp2("Sejal Kulkarni", 30000, 2000, 1500, 1000, 2000);
    SalesEmployee emp3("Sarthak Kadam", 40000, 4000, 2100, 4000);

    emp1.ComputePay();
    cout << endl;

    emp2.ComputePay();
    cout << endl;

    emp3.ComputePay();
    return 0;
}
