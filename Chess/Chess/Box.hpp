//
//  Box.hpp
//  Chess
//
//  Created by Adlane Ladjal on 29/06/2018.
//  Copyright © 2018 Adlane Ladjal. All rights reserved.
//

#ifndef Box_hpp
#define Box_hpp

#include <iostream>

#include "Position.hpp"

class Box {
public:
    Box(Position pos);
    Box(char col, int row);
    Position getPosition();
    bool getColor();
    
    bool setColor(Position pos); // Exclusively call in constructor
    
private:
    const Position pos;
    const bool color; //TODO : Make an enum BLACK(0) WHITE(1)
    
};

#endif /* Box_hpp */
