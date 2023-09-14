#pragma once
#include "Board.h"
#include <memory>

namespace Chess
{
    Board::Board()
    {
        // Add white pieces
        // Add pawns
        
    }

    Piece *Chess::Board::getPiece(int vertical_line, int horizontal_line)
    {
        for (auto piece: this->pieces) {
            auto position = *piece.getPosition();
            if (position.getVerticalLine() == vertical_line & position.getHorizontalLine() == horizontal_line) {
                return &piece;
            }
        }
        
    }
}
