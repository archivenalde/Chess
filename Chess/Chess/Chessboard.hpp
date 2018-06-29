//
//  Chessboard.hpp
//  Chess
//
//  Created by Adlane Ladjal on 29/06/2018.
//  Copyright © 2018 Adlane Ladjal. All rights reserved.
//

#ifndef Chessboard_hpp
#define Chessboard_hpp

#include <iostream>
#include <vector>

#include "Box.hpp"

class Chessboard {
public:
    Chessboard();
    
    Box getBoxByValue(int value);
    Box getBoxByName(std::string name);
    
    ~Chessboard();
    
private:
    std::vector<Box> boxes; //TODO : try to make it const and static
    
};

#endif /* Chessboard_hpp */
