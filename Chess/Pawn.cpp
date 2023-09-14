#include "Pawn.h"

namespace Chess
{
    Chess::Pawn::Pawn(PiecePosition *newPosition, Color color) : Pawn(newPosition, color)
    {
        this->canDoubleMove = true;
    }

    std::vector<PiecePosition> Pawn::getPosibleMoves()
    {
        auto moves = std::vector<PiecePosition>();

        auto curPos = this->getPosition();

        // Проверить две клетки вперед
        if (this->canDoubleMove)
        {
            
        }
    }
}
