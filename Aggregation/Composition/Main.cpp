#include<iostream>
#include"Employee.h"
#include"Project.h"
#define SIZE 3
#include"Function.h"

int main(){
    Employee* arr[SIZE];
    try
    {
        CreateObj();
        std::cout<<"Highest Salary"<<HighestSalary<<std::endl;
        std::cout<<"Count Of Employee"<<CountOfEmployee<<std::endl;
        std::cout<<"Avg Budget of All Project"<<AvgBudget<<std::endl;

        FreeMemory(arr);
        

        
    }
    catch(const std::runtime_error& e)
    {
        std::cout << e.what() << '\n';
    }
    


}