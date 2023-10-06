#ifndef PROJECT_H
#define PROJECT_H
#include<iostream>

class Project
{
private:
    std::string _name;
    int _duration_day;
    float _budget;

public:
    Project()=delete;
    Project(const Project& obj)=delete;
    Project(std::string name,
    int day,
    float budget);
    ~Project() {
        std::cout<<"Project is destroyed"<<std::endl;
    }

    std::string name() const { return _name; }

    int durationDay() const { return _duration_day; }

    float budget() const { return _budget; }

    friend std::ostream &operator<<(std::ostream &os, const Project &rhs);
    
};

#endif // PROJECT_H
