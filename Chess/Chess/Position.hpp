//
//  Position.hpp
//  Chess
//
//  Created by Adlane Ladjal on 29/06/2018.
//  Copyright © 2018 Adlane Ladjal. All rights reserved.
//

#ifndef Position_hpp
#define Position_hpp

#include <iostream>

class Position {
    
public:
    Position(char row, int col);
    Position(std::string namePos);
    Position(int value); // Set row and col by the value of a box array
    
    char getColumn();
    int getRow();
    
    std::string getPositionName();
    int getPositionValue();
    static int getPositionValue(char row, int col);
    static int getPositionValue(Position p);
    
private:
    const char column;
    const int row;

};

#endif /* Position_hpp */
