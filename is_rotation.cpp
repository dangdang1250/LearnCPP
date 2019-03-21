//
//  is_rotation.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 3/20/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
//assum no duplicate items in each array.
//check lenght of two array

bool is_rotation(const std::vector<int>& a, const std::vector<int>& b){
    if (a.size() != b.size()){
        return false;
    }
    auto key=a[0];
    auto key_i =-1;
    for(int i = 0;i<b.size(); ++i){
        if (b[i] == key){
            key_i= i;
            break;
        }
    }
    if (key_i==-1){
        return false;
    }
    int l = 0; // length
    for(int j =0;j<a.size();j++){
        l=(key_i+j)%a.size();
        if(a[j]!=b[l]){
            return false;
        }
    }
    return true;
}
