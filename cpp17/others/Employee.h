#pragma once
#include <string>
#include "EmployeeTypes.h"
class JobClassifcation;

class Employee
{
public:
    // public constructors and destructors
    Employee();
    Employee(
        FullName name, 
        std::string address,
        std::string workPhone,
        std::string homePhone,
        TaxId taxIdNumber,
        JobClassification jobClass);
    virtual ~Employee();

    // public routines
    FullName GetName() const;
    std::string GetAddress() const;
    std::string GetWorkPhone() const;
    std::string GetHomePhone() const;
    TaxId GetTaxIdNumber() const;
    JobClassifcation GetJobClassification() const;
private:
    FullName m_name;
    std::string m_address;
    std::string m_workPhone;
    std::string m_homePhone;
    TaxId m_taxIdNumber;
    JobClassification m_jobClass;
};

Employee::Employee()
{
}

Employee::~Employee()
{
}