//
//  Piece.cpp
//  Chess
//
//  Created by Adlane Ladjal on 28/06/2018.
//  Copyright © 2018 Adlane Ladjal. All rights reserved.
//

#include "Piece.hpp"

#include "Box.hpp"
#include <string>
#include <vector>

using namespace std;


// Procedure to split a piece description in two words "white rook" -> "white", "rook"
static const vector<string> explode(const string& s, const char& c)
{
    string buff{""};
    vector<string> v;
    
    for(auto n:s)
    {
        if(n != c) buff+=n; else
            if(n == c && buff != "") { v.push_back(buff); buff = ""; }
    }
    if(buff != "") v.push_back(buff);
    
    return v;
}




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

string Piece::getShortDescription()
{
    vector<string> splitDesc {explode(DESCRIPTION, ' ')};
    
    if (splitDesc[1] == "king")
    {
        string res{static_cast<char>(splitDesc[1][0] + 'A' - 'a'), splitDesc[0][0]};
        return res;
    }
    else
    {
        string res{splitDesc[1][0], splitDesc[0][0]};
        return res;
    }
}

Box* Piece::getBoxPosition()
{
    return boxPosition;
}
