#pragma once

#include <vector>
#include <memory>

#include "PiecePosition.h"
#include "Color.h"

namespace Chess
{
    class Piece
    {
    private:
        std::shared_ptr<PiecePosition> position;
        Color color;

    public:

        Piece(PiecePosition *newPosition, Color color);

        PiecePosition *getPosition();
        void setPosition(PiecePosition *newPosition);

        virtual std::vector<PiecePosition> getPosibleMoves();
    };
}
