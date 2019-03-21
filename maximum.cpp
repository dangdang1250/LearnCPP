//
//  maximum.cpp
//  LearnCPP
//
//  Created by ChengJixuan on 3/18/19.
//  Copyright © 2019 ChengJixuan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
struct Box {
    int indx;
    int Color;
    bool Left;
    bool Right;
    bool Bottom;
    bool Top;
    
    Box(int idx,int color,bool top, bool left,bool bottom,bool right)
    {
        indx = idx;
        Color = color;
        Top = top;
        Left = left;
        Bottom = bottom;
        Right = right;
    }
};

int maximum(){
    //first loop add all information into an array
    //
    std::vector<Box> myBox;
    myBox.emplace_back(Box(0,0,false,true,true,false));
    myBox.emplace_back(Box(1,0,false,true,true,true));
    myBox.emplace_back(Box(2,1,false,true,true,false));
    myBox.emplace_back(Box(3,2,false,false,true,true));
    myBox.emplace_back(Box(4,0,true,true,true,true));
    myBox.emplace_back(Box(5,1,true,true,true,false));
    myBox.emplace_back(Box(6,2,true,true,true,false));
    myBox.emplace_back(Box(7,1,true,true,true,false));
    myBox.emplace_back(Box(8,2,false,true,true,false));
    myBox.emplace_back(Box(9,1,false,true,true,false));
    myBox.emplace_back(Box(10,1,false,true,true,false));
    myBox.emplace_back(Box(11,1,false,true,true,false));
    
    for (int x = 0; x< myBox.size(); x++){
        if (myBox[x].Left == true){
            //check
            //nextBox[x].Color == myBox[x].Color ; blueColor ++;
        }
        
    }
    return 0;
}
