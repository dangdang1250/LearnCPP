//
//  SimpleLog.h
//  LearnCPP
//
//  Created by ChengJixuan on 3/20/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#ifndef SimpleLog_h
#define SimpleLog_h
#include <iostream>
#include <string>
class SimpleLog{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
private:
    int mLogLevel;//class member, private
    
public:
    void SetLogLevel(int level){
        mLogLevel = level;
    }
    void LogError(const std::string& message){
        if(mLogLevel>=LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }
    
    void LogWarning(const std::string& message){
        if(mLogLevel>=LogLevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }
    
    void LogInfo(const std::string& message){
        if(mLogLevel>=LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};
// SimpleLog log;
// log.SetLevel(LogLevelWarning);
// log.Warn("Warning");
#endif /* SimpleLog_h */
