#pragma once
#include "Piece.h"

namespace Chess
{
    class Knight : Piece
    {
    public:
        Knight(PiecePosition *newPosition, Color color);
        std::vector<PiecePosition> getPosibleMoves();
    };
}