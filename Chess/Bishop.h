#pragma once
#include "Piece.h"

namespace Chess
{
    class Bishop : public virtual Piece
    {
    protected:
        Bishop();
        std::vector<PiecePosition> getPosibleBishopMoves();

    public:
        Bishop(PiecePosition *newPosition, Color color);
        std::vector<PiecePosition> getPosibleMoves();
    };
}