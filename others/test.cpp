//
//  test.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 3/21/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    //what's the smallest one?
    //add1, is it in A?
    int temp = A[0];
    for(int i=0; i<A.size(); i++) {
        if(temp>A[i]) {
            temp=A[i];
        }
    }
    
    while(auto it = find(A.begin(), A.end(),temp) != A.end()){
        temp++;
    }
    return temp;
}

void demo_test(){
    
    std::string grp1;
  
    int idx =0,K=2;
    std::string S = "2-5G-3-J";
    std::vector<std::string> token;
    size_t pos=0;
    while ((pos = S.find('-')) != std::string::npos) {
        token.emplace_back(S.substr(0, pos));
        S.erase(0, pos + 1);
    }
    token.emplace_back(S);
    bool needtoAdd = false;
    for(auto item: token){
        if(needtoAdd){
            grp1+=item;
            needtoAdd = false;
        }
        else{
            if(item.length()<K ){
                if( idx == 0){
                    grp1=item+'-';
                }
                else{
                    grp1+=item;
                }
            }
            else if(item.length()==K){
                grp1+=item+'-';
            }
            else
            {
                grp1+=item;
                needtoAdd = true;
            }
        }
        
        idx++;
    }
    std::cout << grp1<< std::endl;
   // std::cout << token << std::endl;

    int N = 7;
    std::vector<int> cells{0,1,0,1,1,0,0,1};
    std::vector<int> new_cells;
    for(int i = 1; i < N+1; ++i){
        std::cout <<"Day "<< i<<" ";
        new_cells.emplace_back(0);
        for(int j=1;j<cells.size()-1;j++){
            if (cells[j-1] == cells[j+1]){
                new_cells.emplace_back(1);
            }
            else{
                new_cells.emplace_back(0);
            }
        }
        new_cells.emplace_back(0);
        cells.clear();
        cells=new_cells;
        new_cells.clear();
        for(int n = 0; n<cells.size();++n){
            std::cout<< cells[n] << " ";
        }
        std::cout << std::endl;
    }
}
