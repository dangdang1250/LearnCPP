#include <iostream>
#include <thread>

using namespace std;

void function_1(){
  std::cout<< "Beauty is only skin-deep" << std::endl;
}

class Fctor{
  public:
    void operator()(){
      for (int i=0; i>-100; --i){
        cout << "from t1 " << i << endl;
      }
    }
};

int main(){
  //std::thread t1(function_1); // t1 starts running
  Fctor fct;
  std::thread t1(fct); // t1 starts running
  // using RAAI
  // wrapper w(t1);
  try{
    for (int i =0; i<100; ++i)
      cout << "from main: " << i << endl;
  }
  catch(...){
    t1.join();
    throw;
  }


  return 0;
}


