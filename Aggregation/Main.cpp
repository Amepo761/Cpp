#include<iostream>
#include"Employee.h"
#include"Project.h"
#define SIZE 3
#include"Function.h"

int main(){
    Employee* arr1[SIZE];
    Project* arr2[SIZE];
    try
    {
        CreateObj(arr1);
        Employee* sal=HighestSalary(arr1);
        std::cout<<"Highest Salary :"<<sal->salary()<<std::endl;
        std::cout<<"Count Of Employee :"<<CountOfEmployee(arr1,DeptType::DEVELOPMENT)<<std::endl;
        std::cout<<"Avg Budget of All Project"<<AvgBudget(arr1)<<std::endl;

        FreeMemory(arr1);  
    }
    catch(const std::runtime_error& e)
    {
        std::cout << e.what() << '\n';
    }
    


}