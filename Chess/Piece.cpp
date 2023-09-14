#include "Piece.h"

namespace Chess
{
    Piece::Piece(PiecePosition *newPosition, Color color)
    {
        this->color = color;
        this->position = std::shared_ptr<PiecePosition>(newPosition);
    }

    PiecePosition *Piece::getPosition()
    {
        return this->position.get();
    }

    void Piece::setPosition(PiecePosition *newPosition)
    {
        this->position = std::shared_ptr<PiecePosition>(newPosition);
    }
}
