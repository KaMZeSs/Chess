#pragma once
#include <memory>
#include <vector>

#include "Piece.h"

namespace Chess {

    class Board
    {
    private:
        std::vector<Piece> pieces;
    public:
        Board();

        Piece *getPiece(int vertical_line, int horizontal_line);
    };

}