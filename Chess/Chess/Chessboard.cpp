//
//  Chessboard.cpp
//  Chess
//
//  Created by Adlane Ladjal on 29/06/2018.
//  Copyright © 2018 Adlane Ladjal. All rights reserved.
//

#include "Chessboard.hpp"

#include "Box.hpp"

using namespace std;

Chessboard::Chessboard()
{
    int i;
    for (i = 0; i < 64; ++i)
        boxes.push_back(Box(Position(i)));
    
    /* White pieces init */
    
    Piece r1 = Piece("rook",   true, Position('a', 1));
    Piece k1 = Piece("knight", true, Position('b', 1));
    Piece b1 = Piece("bishop", true, Position('c', 1));
    Piece q  = Piece("queen",  true, Position('d', 1));
    Piece k  = Piece("king",   true, Position('e', 1));
    Piece b2 = Piece("bishop", true, Position('f', 1));
    Piece k2 = Piece("knight", true, Position('g', 1));
    Piece r2 = Piece("rook",   true, Position('h', 1));
    Piece p = Piece("pawn", true, Position('a', 2));
    
    pieces.push_back(r1);
    boxes[Position::getPositionValue(r1.getBoxPosition()->getPosition())].setPieceOnBox(&r1);
    pieces.push_back(k1);
    boxes[Position::getPositionValue(k1.getBoxPosition()->getPosition())].setPieceOnBox(&k1);
    pieces.push_back(b1);
    boxes[Position::getPositionValue(b1.getBoxPosition()->getPosition())].setPieceOnBox(&b1);
    pieces.push_back(q);
    boxes[Position::getPositionValue(q.getBoxPosition()->getPosition())].setPieceOnBox(&q);
    pieces.push_back(k);
    boxes[Position::getPositionValue(k.getBoxPosition()->getPosition())].setPieceOnBox(&k);
    pieces.push_back(b2);
    boxes[Position::getPositionValue(b2.getBoxPosition()->getPosition())].setPieceOnBox(&b2);
    pieces.push_back(k2);
    boxes[Position::getPositionValue(k2.getBoxPosition()->getPosition())].setPieceOnBox(&k2);
    pieces.push_back(r2);
    boxes[Position::getPositionValue(r2.getBoxPosition()->getPosition())].setPieceOnBox(&r2);
    for (i = 0; i < 8; ++i)
    {
        Piece p = Piece("pawn", true, Position((char)(i + 'a'), 2));
        pieces.push_back(p);
        boxes[Position::getPositionValue(p.getBoxPosition()->getPosition())].setPieceOnBox(&p);
    }
    
    
    /* Black pieces init */
    
    Piece r1b = Piece("rook",   false, Position('a', 8));
    Piece k1b = Piece("knight", false, Position('b', 8));
    Piece b1b = Piece("bishop", false, Position('c', 8));
    Piece qb  = Piece("queen",  false, Position('d', 8));
    Piece kb  = Piece("king",   false, Position('e', 8));
    Piece b2b = Piece("bishop", false, Position('f', 8));
    Piece k2b = Piece("knight", false, Position('g', 8));
    Piece r2b = Piece("rook",   false, Position('h', 8));
    
    pieces.push_back(r1b);
    boxes[Position::getPositionValue(r1b.getBoxPosition()->getPosition())].setPieceOnBox(&r1b);
    pieces.push_back(k1b);
    boxes[Position::getPositionValue(k1b.getBoxPosition()->getPosition())].setPieceOnBox(&k1b);
    pieces.push_back(b1b);
    boxes[Position::getPositionValue(b1b.getBoxPosition()->getPosition())].setPieceOnBox(&b1b);
    pieces.push_back(qb);
    boxes[Position::getPositionValue(qb.getBoxPosition()->getPosition())].setPieceOnBox(&qb);
    pieces.push_back(kb);
    boxes[Position::getPositionValue(kb.getBoxPosition()->getPosition())].setPieceOnBox(&kb);
    pieces.push_back(b2b);
    boxes[Position::getPositionValue(b2b.getBoxPosition()->getPosition())].setPieceOnBox(&b2b);
    pieces.push_back(k2b);
    boxes[Position::getPositionValue(k2b.getBoxPosition()->getPosition())].setPieceOnBox(&k2b);
    pieces.push_back(r2b);
    boxes[Position::getPositionValue(r2b.getBoxPosition()->getPosition())].setPieceOnBox(&r2b);
    for (i = 0; i < 8; ++i)
    {
        Piece p = Piece("pawn", false, Position((char)(i + 'a'), 7));
        pieces.push_back(p);
        boxes[Position::getPositionValue(p.getBoxPosition()->getPosition())].setPieceOnBox(&p);
    }
    

}

Box Chessboard::getBoxInArray(int ind)
{
    return boxes[ind];
}

void Chessboard::describe()
{
    for (int i = 7; i >= 0; --i)
    {
        for (int j = 0; j < 8; ++j)
        {
            cout << getBoxInArray(i*8 + j).getPosition().getPositionName()
            << " - " << getBoxInArray(i*8 + j).getColor() << "  ";
        }
        cout << endl;
    }
}


void Chessboard::printEmpty()
{
    int i, k;
    
    cout << " ";
    for (k = 0; k < 8; ++k)
        cout << " ___ ";
    cout << endl;
    
    for (i = 7; i >= 0; --i)
    {
        cout << " ";
        for (k = 0; k < 8; ++k)
            cout << "|   |";
        cout << endl;
        
        cout << i+1;
        for (k = 0; k < 8; ++k)
            cout << "|   |";
        cout << endl;
        
        cout << " ";
        for (k = 0; k < 8; ++k)
            cout << "|___|";
        cout << endl;
    }
    
    cout << " ";
    for (k = 0; k < 8; ++k)
        cout << "  " << (char)(k + 'a') << "  ";
    cout << endl;
}


void Chessboard::print()
{
    int i, k;
    
    cout << " ";
    for (k = 0; k < 8; ++k)
        cout << " ___ ";
    cout << endl;
    
    for (i = 7; i >= 0; --i)
    {
        cout << " ";
        for (k = 0; k < 8; ++k)
            cout << "|   |";
        cout << endl;
        
        cout << i+1;
        for (k = 0; k < 8; ++k)
        {
            Piece *p = getPieceOnBox(Box(Position(k + 'a', i+1)));
            if (p != NULL)
                cout << "|" << p->getShortDescription() <<   " |";
            else
                cout << "|   |";
        }
        cout << endl;
        
        cout << " ";
        for (k = 0; k < 8; ++k)
            cout << "|___|";
        cout << endl;
    }
    
    cout << " ";
    for (k = 0; k < 8; ++k)
        cout << "  " << (char)(k + 'a') << "  ";
    cout << endl;
}

Piece* Chessboard::getPieceOnBox(Box b)
{
    int val = b.getPosition().getPositionValue();
    return boxes[val].getPieceOnBox();
}



Chessboard::~Chessboard()
{
    
}
