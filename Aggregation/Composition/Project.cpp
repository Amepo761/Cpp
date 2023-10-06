#include "Project.h"

Project::Project(std::string name, int day, float budget)
:_name(name),_duration_day(day),_budget(budget)
{
}

std::ostream &operator<<(std::ostream &os, const Project &rhs) {
    os << "_name: " << rhs._name
       << " _duration_day: " << rhs._duration_day
       << " _budget: " << rhs._budget;
    return os;
}
