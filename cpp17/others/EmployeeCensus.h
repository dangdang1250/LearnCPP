#pragma once
class ListContainer;
class Employee;
// C++ Example of a class interface with Consistent Levels of Abstraction
class EmployeeCensus
{
public:
    EmployeeCensus();
    ~EmployeeCensus();

    // public routines
    void AddEmployee(Employee emp);
    void RemoveEmployee(Employee emp);

    Employee NextItemInList();
    Employee FirstItem();
    Employee LastItem();
private:
    ListContainer m_EmployeeLists;
};

// C++ example of a Class Interface with Mixed Levels of Abstraction
// Inheritance is only use "is a"
class EmployeeCensus : public ListContainer
{
public:
    EmployeeCensus();
    ~EmployeeCensus();

    // public routines
    void AddEmployee(Employee emp);
    void RemoveEmployee(Employee emp);
    
    Employee NextItemInList();
    Employee FirstItem();
    Employee LastItem();
private:

};


