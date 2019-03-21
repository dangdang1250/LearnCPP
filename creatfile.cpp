//
//  creatfile.cpp
//  LearnCPP
//  Since I don't point out filesystem and no path. file will be create at Debug folder
//  Created by ChengJixuan on 3/21/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include <stdio.h>
#include <fstream>
#include <iostream>
void write_file() {
    std::string filename{"text.txt"};
    std::ofstream ofs(filename);
    ofs << "Hello There\n";
}
