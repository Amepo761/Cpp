#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include"DeptType.h"
#include"Project.h"

class Employee
{
private:
    std::string _id;
    std::string _name;
    float _salary;
    DeptType _dept;
    Project* _project;

public:
    Employee(std::string id,
    std::string name,
    float salary,
    DeptType dept,
    Project* project);
    ~Employee() {
        std::cout<<"Employee is destroyed"<<std::endl;
    }

    std::string id() const { return _id; }

    std::string name() const { return _name; }

    float salary() const { return _salary; }

    DeptType dept() const { return _dept; }

    Project* project() const { return _project; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
    
};
std::string DisplayEnum(const DeptType value);

#endif // EMPLOYEE_H
