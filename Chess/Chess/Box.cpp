//
//  Box.cpp
//  Chess
//
//  Created by Adlane Ladjal on 29/06/2018.
//  Copyright © 2018 Adlane Ladjal. All rights reserved.
//

#include "Box.hpp"

bool Box::setColor(Position _pos)
{
    if (_pos.getRow() % 2 == 1)
        return ((bool)((_pos.getColumn() - 'a') % 2));
    else
        return !((bool)((_pos.getColumn() - 'a') % 2));
}


Box::Box(Position _pos) : pos(_pos), color(setColor(pos))
{}

Position Box::getPosition()
{
    return pos;
}

bool Box::getColor()
{
    return color;
}


void Box::setPieceOnBox(Piece *_p)
{
    p = _p;
}

Piece* Box::getPieceOnBox()
{
    return p;
}

