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
#include "Piece.hpp"

class Chessboard {
public:
    Chessboard();
    
    Box getBoxInArray(int index);
    Box getBoxAtPosition(Position pos);
    Piece* getPieceOnBox(Box b);
    
    void describe();
    void printEmpty();
    void print();
    
    ~Chessboard();
    
private:
    std::vector<Box> boxes; //TODO : try to make it const and static
    std::vector<Piece> pieces;
    
};

#endif /* Chessboard_hpp */
