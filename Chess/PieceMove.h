#pragma once
#include "PiecePosition.h"
#include "Piece.h"

namespace Chess
{
    class PieceMove
    {
    private:
        std::shared_ptr<PiecePosition> start;
        std::shared_ptr<PiecePosition> end;
        std::shared_ptr<Piece> piece;

    public:
        PieceMove(std::shared_ptr<PiecePosition> startPosition,
                  std::shared_ptr<PiecePosition> endPosition,
                  std::shared_ptr<Piece> piece);

        std::shared_ptr<PiecePosition> getStartPos();
        std::shared_ptr<PiecePosition> getEndPos();
        std::shared_ptr<Piece> getPiece();
    };
}