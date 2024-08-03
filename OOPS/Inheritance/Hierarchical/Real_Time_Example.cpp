#include <iostream>
#include <string>

// Base class: Company
class Company {
protected:
    std::string companyName;

public:
    Company(const std::string& name) : companyName(name) {}

    void displayCompany() {
        std::cout << "Company: " << companyName << std::endl;
    }
};

// Derived class: CEO
class CEO : public Company {
private:
    std::string ceoName;

public:
    CEO(const std::string& companyName, const std::string& ceoName) : Company(companyName), ceoName(ceoName) {}

    void displayCEO() {
        std::cout << "CEO: " << ceoName << std::endl;
    }
};

// Derived class: Manager
class Manager : public Company {
private:
    string managerName;

public:
    Manager(const std::string& companyName, const std::string& managerName) : Company(companyName), managerName(managerName) {}

    void displayManager() {
        sout << "Manager: " << managerName << std::endl;
    }
};

int main() {
    Company company("ABC Corp");
    company.displayCompany();

    CEO ceo("ABC Corp", "John Doe");
    ceo.displayCompany(); 
    ceo.displayCEO(); 

    Manager manager("ABC Corp", "Jane Smith");
    manager.displayCompany(); 
    manager.displayManager(); 
    return 0;
}
