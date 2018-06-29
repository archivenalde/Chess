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
    
    Piece p = Piece("king", true);
    Position pos = Position('c', 4);
    Box b1 = Box(pos);
    Box b2 = Box('a', 2);
    Chessboard cb = Chessboard();
    
    cout << bonjour << endl;
    cout << p.getDescrption() << endl;
    cout << pos.getPositionName() << " - " << pos.getPositionValue() << endl;
    cout << "b1: " << b1.getPosition().getPositionName() << " - " << b1.getColor() << endl;
    cout << "b2: " << b2.getPosition().getPositionName() << " - " << b2.getColor() << endl;
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            cout << cb.getBoxByValue(i*8 + j).getPosition().getPositionName()
            << " - " << cb.getBoxByValue(i*8 + j).getColor() << "  ";
        }
        cout << endl;
    }
    
    return 0;
}
