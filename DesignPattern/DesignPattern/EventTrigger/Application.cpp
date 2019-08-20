#include "Application.h"
#include <functional>

void Application::loadData()
{
    //Make This Thread sleep for 1 second
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Loading Data from XML" << std::endl;
    // Lock The Data structure
    std::lock_guard<std::mutex> guard(m_mutex);
    m_bDataLoaded = true;
    // Notify the condition variable
    m_condVar.notify_one();
}

bool Application::isDataLoaded()
{
    return m_bDataLoaded;
}

// condition variable 
void Application::mainTask(){
    std::cout << "Do Something Handshaking." << std::endl;
    // Acquire the lock
    std::unique_lock<std::mutex> mlock(m_mutex);
    // Start waiting for the Condition Variable to get signaled
    // Wait() will internally release the lock and make the thread to block
    // As soon as condition variable get signaled, resume the thread and
    // again acquire the lock. Then check if condition is met or not
    // If condition is met then continue else again go in wait.
    m_condVar.wait(mlock, std::bind(&Application::isDataLoaded, this));
    std::cout << "Do Processing On loaded Data" << std::endl;
}

// without conditon variable
// void Application::mainTask()
// {
//     std::cout << "Do Some Handshaking." << std::endl;
//     // Acquire the Lock
//     m_mutex.lock();
//     while(m_bDataLoaded != true){
//         // Release the lock
//         m_mutex.unlock();
//         // Sleep for 100 milli secons
//         std::this_thread::sleep_for(std::chrono::milliseconds(100));
//         // Acquire the lock;
//         m_mutex.lock();
//     }
//     m_mutex.unlock();

//     // Doc processing on loaded Data
//     std::cout << "Do processing On loaded Data." << std::endl;
// }


