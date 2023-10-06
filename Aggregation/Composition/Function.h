#ifndef FUNCTION_H
#define FUNCTION_H
#include"Employee.h"
#define SIZE 3
//check null func
bool CheckNull(Employee* arr[SIZE]);

void CreateObj(Employee* arr[SIZE]);

Employee* HighestSalary(Employee* arr[SIZE]);

int CountOfEmployee(Employee* arr[SIZE],DeptType dept);

float AvgBudget(Employee* arr[SIZE]);

int FreeMemory(Employee* arr[SIZE]);


#endif // FUNCTION_H
