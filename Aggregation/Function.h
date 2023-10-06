#ifndef FUNCTION_H
#define FUNCTION_H
#include"Employee.h"
#include"Project.h"
#define SIZE 3
//check null func
bool CheckNull(Employee* arr[SIZE]);

void CreateObj(Employee *arr1[SIZE]);

Employee* HighestSalary(Employee* arr[SIZE]);

int CountOfEmployee(Employee* arr[SIZE],DeptType dept);

float AvgBudget(Employee* arr[SIZE]);

void FreeMemory(Employee* arr[SIZE]);


#endif // FUNCTION_H
