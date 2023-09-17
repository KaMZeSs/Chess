#include "Pawn.h"

namespace Chess
{
    Pawn::Pawn(PiecePosition *newPosition, Color color) : Piece(newPosition, color)
    {
        this->canDoubleMove = true;
    }

    std::vector<PiecePosition> Pawn::getPosibleMoves()
    {
        auto moves = std::vector<PiecePosition>();

        auto curPos = this->getPosition();

        auto curHor = curPos->getHorizontalLine();
        auto curVer = curPos->getVerticalLine();

        // Проверить две клетки вперед
        if (this->canDoubleMove)
        {
            
        }
    }
}
