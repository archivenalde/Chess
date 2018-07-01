//
//  Piece.cpp
//  Chess
//
//  Created by Adlane Ladjal on 28/06/2018.
//  Copyright © 2018 Adlane Ladjal. All rights reserved.
//

#include "Piece.hpp"
#include "Box.hpp"

using namespace std;


Piece::Piece(std::string type, bool _color, Position sp) :
DESCRIPTION((_color ? "white " : "black ") + type),
color(_color)
{
    inGame = true;
    boxPosition = new Box(sp);
}

bool Piece::getColor()
{
    return color;
}

bool Piece::isInGame()
{
    return inGame;
}

string Piece::getDescrption()
{
    return DESCRIPTION;
}

Box* Piece::getBoxPosition()
{
    return boxPosition;
}
