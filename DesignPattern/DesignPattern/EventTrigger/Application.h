#ifndef APPLICATION_H
#define APPLICATION_H

#include <thread>
#include <iostream>
#include <mutex>

#include <condition_variable>

class Application
{
private:
    std::mutex m_mutex;
    std::condition_variable m_condVar;
    bool m_bDataLoaded;
public:
    Application(): m_bDataLoaded(false) {}
    bool isDataLoaded();
    void loadData();
    void mainTask();
};

#endif