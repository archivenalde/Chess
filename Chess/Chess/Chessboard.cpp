//
//  Chessboard.cpp
//  Chess
//
//  Created by Adlane Ladjal on 29/06/2018.
//  Copyright © 2018 Adlane Ladjal. All rights reserved.
//

#include "Chessboard.hpp"

#include "Box.hpp"

Chessboard::Chessboard()
{
    for (int i = 0; i < 64; ++i)
        boxes.push_back(Box(Position(i)));
}

Box Chessboard::getBoxByValue(int val)
{
    return boxes[val];
}

Chessboard::~Chessboard()
{
    
}
