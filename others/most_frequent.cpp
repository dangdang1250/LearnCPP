//
//  most_frequent.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 3/18/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
/*
 given array is [1,3,1,3,2,1,1]
 return most frequent number in array, this one should return max_item = 1
 since 1 repeated 4 times.
 */
int most_frequent(std::vector<int> given_array){
    int max_count = 0;
    int max_item = -1;
    std::map<int,int> count {};
    std::map<int,int>::iterator it;
    for( auto item: given_array){
        auto it = count.find(item);
        if (it != count.end()){
            //found it
            count[item]+=1;
        }
        else
        {
            count.insert({item, 1});
        }
        if(count[item]>max_count){
            max_count = count[item];
            max_item = item;
        }
    }
    return max_item;
}
