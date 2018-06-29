//
//  Piece.cpp
//  Chess
//
//  Created by Adlane Ladjal on 28/06/2018.
//  Copyright © 2018 Adlane Ladjal. All rights reserved.
//

#include "Piece.hpp"

using namespace std;


Piece::Piece(std::string desc, bool _color) : DESCRIPTION((_color ? "white " : "black ") + desc),
                                              color(_color)
{
    inGame = true;
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
