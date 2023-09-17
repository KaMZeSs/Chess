#pragma once
#include "Piece.h"

namespace Chess
{
    class Rook : public virtual Piece
    {
    protected:
        Rook();
        std::vector<PiecePosition> getPosibleRook();

    public:
        Rook(PiecePosition *newPosition, Color color);
        std::vector<PiecePosition> getPosibleMoves();
    };
}