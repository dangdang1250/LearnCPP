//
//  mine_sweeper.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 3/21/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <functional>
#include <vector>
#include <iomanip>
// assume bombs not empty, rows and cols number always correct
void mine_sweeper(const std::vector<std::vector<int> > &bombs, int num_rows, int num_cols)
{
    //[[0,2],[2,0]
    // Return :[row,col]
    std::vector<std::vector<int> > result(num_rows,std::vector<int>(num_cols,0));
    for(auto item : bombs){
        int row = item[0];
        int col = item[1];
        
        result[row][col]=-1;

        for (int i = row-1; i <= row+1; i++) {
            for (int j = col-1; j <= col+1; j++){
                if((i>=0 && i<num_rows) &&
                   (j>=0 &&j<num_cols) && result[i][j]!=-1)
                    result[i][j]+=1;
            }
        }
    }
    
    
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++){
            std::cout << std::setw(2)<<result[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
