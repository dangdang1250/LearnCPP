#include <iostream>
#include <memory>
#include <functional>
#include <array>
#include <cstdio>

#include <curl/curl.h>
#include "json.hpp"
//export LD_LIBRARY_PATH=/usr/local/lib
// g++ --std=c++17 -Wall -Wextra bitcoin.cpp -o bitcoin -lcurl
typedef std::unique_ptr<CURL, std::function<void(CURL*)>> CURL_ptr;

extern "C" std::size_t dataHandle(const char* buffer, std::size_t size,
    std::size_t nmemb, std::string* usedrData){
        if (userData == nullptr){
            return 0;
        }

        userData->append(buffer, (size * nmemb));
        return size * nmemb; // how many bytes have been writen
    }

class CurlHandle {
  private:
    CURL_ptr curlptr;
    constexpr static auto deleter = [](CURL* c){
        curl_easy_cleanup(c);
        curl_global_cleanup();
    };

    std::string data;

  public:
    CurlHandle() : curlptr(curl_easy_init(), deleter){
        curl_global_init(CURL_GLOBAL_ALL);

        curl_easy_setopt(curlptr.get(), CURLOPT_WRITEFUNCTION, dataHandle);
        curl_easy_setopt(curlptr.get(), CURLOPT_WRITEDATA, &data);
    }

    void setUrl(std::string url){
        curl_easy_setopt(curlptr.get(), CURLOPT_URL, url.c_str());
    }

    CURLcode fetch(){
        return curl_easy_perform(curlptr.get());
    }

    std::string getFetchedData(){
        return data;
    }
};

class Bitcoin{
  using json = nlohmann::json;

  private:
    CurlHandle curlHandle;
    static constexpr const char* API_URL = "https://raw.githubusercontent.com/LearnWebCode/json-example/master/animals-1.json"; 
    //https://blockchain.info/ticker";

  public:
    Bitcoin(): curlHandle({}){
        curlHandle.setUrl(API_URL);
    }

    void fedtchBitcoinData() {
        curlHandle.fetch();
        // return json::parse(curlHandle.getFetchedData());
    }

};

int main(){
    Bitcoin bitcoin;
    bitcoin.fedtchBitcoinData();

    return 0;
}