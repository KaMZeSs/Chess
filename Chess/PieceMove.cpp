#pragma once
#include "PieceMove.h"

namespace Chess
{

    PieceMove::PieceMove(std::shared_ptr<PiecePosition> startPosition,
                         std::shared_ptr<PiecePosition> endPosition,
                         std::shared_ptr<Piece> piece)
    {
        this->start = startPosition;
        this->end = endPosition;
        this->piece = piece;
    }

    std::shared_ptr<PiecePosition> PieceMove::getStartPos()
    {
        return this->start;
    }

    std::shared_ptr<PiecePosition> PieceMove::getEndPos()
    {
        return this->end;
    }

    std::shared_ptr<Piece> PieceMove::getPiece()
    {
        return this->piece;
    }

}