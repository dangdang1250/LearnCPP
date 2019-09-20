#pragma once
// C++ example of a class interface that presents a better abstraction
class Program
{
public:
    Program();
    ~Program();

    //public routines
    void InitializeUserInterface();
    void ShutDownUserInterface();
    void InitializeReports();
    void ShutDownReports();
private:
    //...
};

Program::Program()
{
}

Program::~Program()
{
}