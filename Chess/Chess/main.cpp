//
//  main.cpp
//  Chess
//
//  Created by Adlane Ladjal on 28/06/2018.
//  Copyright © 2018 Adlane Ladjal. All rights reserved.
//

#include <iostream>

#include "Piece.hpp"
#include "Position.hpp"
#include "Box.hpp"
#include "Chessboard.hpp"

//TODO : Make an enum BLACK(0) WHITE(1)

using namespace std;

int main(int argc, const char * argv[]) {
    
    string bon = "bon", jour = "jour";
    string bonjour = bon + jour;
    
    Position pos = Position('c', 4);
    Box b1 = Box(pos);
    Chessboard cb = Chessboard();
    Piece p = Piece("rook", true, Position("a1"));
    
    cout << bonjour << endl;
    cout << pos.getPositionName() << " - " << pos.getPositionValue() << endl;
    cout << "b1: " << b1.getPosition().getPositionName() << " - " << b1.getColor() << endl;
    cb.describe();
    cb.printEmpty();
    
    cout << p.getShortDescription() << endl;
    
    cout << cb.getPieceOnBox(Box(Position("h8")))->getDescrption() << endl;
    
    cb.print();
    
    return 0;
}
