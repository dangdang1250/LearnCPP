#pragma once
#include <string>
struct FullName
{
    std::string FirstName;
    std::string LastName;

    void getFullName() { return FirstName + " " + LastName; }
};

typedef int TaxId;