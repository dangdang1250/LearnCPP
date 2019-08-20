#include <thread>
#include <iostream>
#include <mutex>
#include "Application.h"

int main(){
    Application app;

    std::thread thread_1(&Application::mainTask, &app);
    std::thread thread_2(&Application::loadData, &app);

    thread_2.join();
    thread_1.join();

    return 0;
}