#pragma once
#include "Bishop.h"
#include "Rook.h"

namespace Chess
{
    class Queen : Bishop, Rook
    {
    public:
        Queen(PiecePosition *newPosition, Color color);

        std::vector<PiecePosition> getPosibleMoves();
    };

}