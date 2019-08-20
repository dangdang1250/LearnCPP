#include <thread>
#include <iostream>

void thread_function()
{
    for(int i = 0; i < 10000; ++i){
        std::cout << "thread function Executing:" << i << std::endl;
    }
}

int main(){
    // Thread object std::thread thObj(<CALLBACK>);
    thread threadObj(thread_function);
    for(int i = 0; i < 10000; ++i){
        std::cout << "Display from main thread:" << i << std::endl;
    }

    threadObj.join();
    std::cout << "Exit of Main Thread." << std::endl;
    return 0;
}