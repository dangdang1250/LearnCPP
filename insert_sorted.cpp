//
//  insert_sorted.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 3/19/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
int insert_sorted(std::vector<int> arr){
    int compare_times = 0;
    int i, key, j;
    for (i = 1; i < arr.size(); i++) {
        key = arr[i];
        j = i - 1;
        
        /* Move elements of arr[0..i-1], that are
         greater than key, to one position ahead
         of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for(int x = 0; x < arr.size(); ++x){
        std::cout << arr[x] << " ";
    }
    std::cout << std::endl;
    return compare_times;
}
