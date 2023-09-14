#pragma once
#include "Piece.h"

namespace Chess {

    class Pawn: Piece
    {
    private:
        bool canDoubleMove;
    public:
        Pawn(PiecePosition *newPosition, Color color);

        std::vector<PiecePosition> getPosibleMoves();
    };

}