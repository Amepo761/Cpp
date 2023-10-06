#include "Function.h"
#include"Employee.h"
#include"Project.h"


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

void CreateObj(Employee *arr1[SIZE])
{
 
 arr1[0]=new Employee("101","ame",78996.0f,DeptType::DEVELOPMENT,new Project("bfjh",100,2344.0f));
 arr1[1]=new Employee("145","jgde",86436.0f,DeptType::TESTING,new Project("gfhgvjh",80,23564.0f));
 arr1[2]=new Employee("234","riye",58996.0f,DeptType::DEVELOPMENT,new Project("dftjh",160,5684.0f));

}

Employee *HighestSalary(Employee *arr[SIZE])
{   
    if(CheckNull(arr))
    {
        throw std::runtime_error("Data is empty");
    }
    Employee* result=arr[0];
    float max=arr[0]->salary();
    float sal=arr[0]->salary();
    float currentSal=0.0f;
    for(int i=0;i<SIZE;i++){
        currentSal=arr[i]->salary();
        if(currentSal > max)
        {
            max=currentSal;
            result=arr[i];
            sal=arr[i]->salary();
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

    

    float AvgBudget(Employee *arr[SIZE])
    {   
        
        float total=0.0f;
        for(int i=0;i<SIZE;i++){
            total+=arr[i]->project()->budget();
        }
        return total/SIZE;
    }


    void FreeMemory(Employee *arr[SIZE])
    {
        for(int i=0;i<SIZE;i++)
        {
            delete arr[i];
        }
    }
