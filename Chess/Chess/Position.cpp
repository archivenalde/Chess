//
//  Position.cpp
//  Chess
//
//  Created by Adlane Ladjal on 29/06/2018.
//  Copyright © 2018 Adlane Ladjal. All rights reserved.
//

#include "Position.hpp"

using namespace std;

Position::Position(char _col, int _row) : column(_col), row(_row)
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

