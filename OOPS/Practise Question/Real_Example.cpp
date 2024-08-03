/*
    Real ex of run time polymorphism and abstraction
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Abstract base class representing an Employee
class Employee
{
protected:
    string name;
    double salary;

public:
    Employee(const string &empName, double empSalary) : name(empName), salary(empSalary) {}

    // Virtual function for displaying employee details
    virtual void display() const = 0;
};

// Developer class derived from Employee
class Developer : public Employee
{
private:
    string programmingLanguage;

public:
    Developer(const string &empName, double empSalary, const string &lang)
        : Employee(empName, empSalary), programmingLanguage(lang) {}

    // Override display function to show developer details
    void display() const 
    {
        cout << "Developer - Name: " << name << ", Salary: $" << salary << ", Language: " << programmingLanguage << endl;
    }
};

// Tester class derived from Employee
class Tester : public Employee
{
private:
    string testingType;

public:
    Tester(const string &empName, double empSalary, const string &type)
        : Employee(empName, empSalary), testingType(type) {}

    // Override display function to show tester details
    void display() const 
    {
        cout << "Tester - Name: " << name << ", Salary: $" << salary << ", Testing Type: " << testingType << endl;
    }
};

int main()
{
    // Creating a vector of employee pointers to demonstrate polymorphism
    vector<Employee *> employees;

    // Adding developer and tester objects to the vector
    employees.push_back(new Developer("John", 5000, "C++"));
    employees.push_back(new Tester("Alice", 4500, "Automation"));

    // Displaying details of all employees
    for (const auto &emp : employees)
    {
        emp->display();
    }

    // Deleting allocated memory to prevent memory leaks
    for (auto &emp : employees)
    {
        delete emp;
    }

    return 0;
}
