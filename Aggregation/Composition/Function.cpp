#include "Function.h"
#include"Employee.h"

bool CheckNull(Employee* arr[SIZE])
{
    bool flag=true;
    for(int i=0;i<SIZE;i++)
    {
        if(arr[i]!=nullptr)
        {
            flag=false;
        }
    }
    return flag;
}

void CreateObj(Employee *arr[SIZE])
{
}

Employee *HighestSalary(Employee *arr[SIZE])
{   
    if(CheckNull(arr))
    {
        throw std::runtime_error("Data is empty");
    }
    Employee* result=arr[0];
    float max=arr[0]->salary();
    float currentSal=0.0f;
    for(int i=0;i<SIZE;i++){
        currentSal=arr[i]->salary();
        if(currentSal > max)
        {
            max=currentSal;
            result=arr[i];

        }
    }
    return result;
    }

    int CountOfEmployee(Employee *arr[SIZE],DeptType dept)
    {   
        if(CheckNull(arr))
    {
        throw std::runtime_error("Data is empty");
    }
        int count=0;
        for(int i=0;i<SIZE;i++)
        {
            if(DeptType(dept)==dept)
            {
                count++;

            }
        }
        return count;
    }

    int FreeMemory(Employee *arr[SIZE])
    {
        return 0;
    }

    float AvgBudget(Project *arr[SIZE])
    {   
        
        float total=0.0f;
        for(int i=0;i<SIZE;i++){
            total+=arr[i]->budget();
        }
        return total/SIZE;
    }
