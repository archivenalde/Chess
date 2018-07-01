//
//  Position.cpp
//  Chess
//
//  Created by Adlane Ladjal on 29/06/2018.
//  Copyright © 2018 Adlane Ladjal. All rights reserved.
//

#include "Position.hpp"

#include <string>

using namespace std;

Position::Position(char _col, int _row) :
column(_col), row(_row)
{}

Position::Position(std::string posName) :
column(posName[0]), row(posName[1] - '0')
{}

Position::Position(int val) :
column(val%8 + 'a'), row(val/8 + 1)
{}

char Position::getColumn()
{
    return column;
}

int Position::getRow()
{
    return row;
}


string Position::getPositionName()
{
    string posName = "";
    
    posName.push_back(column);
    posName.push_back((char)(row + '0'));
    
    return posName;
}

int Position::getPositionValue()
{
    int colInt = column - 'a';
    
    return (row-1) * 8 + colInt;
}

int Position::getPositionValue(char _row, int _col)
{
    int colInt = _col - 'a';
    
    return (_row-1) * 8 + colInt;
}


int Position::getPositionValue(Position p)
{
    return p.getPositionValue();
}

