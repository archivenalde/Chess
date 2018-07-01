//
//  Piece.hpp
//  Chess
//
//  Created by Adlane Ladjal on 28/06/2018.
//  Copyright © 2018 Adlane Ladjal. All rights reserved.
//

#ifndef Piece_hpp
#define Piece_hpp

#include <iostream>

#include "Position.hpp"

class Box;

class Piece {
public:
    Piece(std::string descPiece, bool color, Position startPos);
    void move();
    void eat();
    void beEaten();
    
    bool isInGame();
    bool getColor();
    std::string getDescrption();
    Box* getBoxPosition();
    
private:
    bool inGame;
    bool color; //TODO : Make an enum BLACK(0) WHITE(1)
    const std::string DESCRIPTION;
    Box* boxPosition;
};

#endif /* Piece_hpp */
