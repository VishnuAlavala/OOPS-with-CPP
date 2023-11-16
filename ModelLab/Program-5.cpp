#include <iostream>
class Employee {
protected:
    std::string name;
    int id;
    double salary;
public:
    Employee(std::string name, int id, double salary) {
        this->name = name;
        this->id = id;
        this->salary = salary;
    }
    virtual void work() = 0; 
    virtual double calculatePay() = 0; 
    virtual void printInfo() {
        std::cout << "Employee Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};
