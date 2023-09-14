#pragma once
#include "PiecePosition.h"

namespace Chess
{
    PiecePosition::PiecePosition(int verticalLine, int horizontalLine)
    {
        if (verticalLine<0 | verticalLine> 7)
        {
            throw std::out_of_range("Value must be 0..7");
        }
        if (horizontalLine<0 | horizontalLine> 7)
        {
            throw std::out_of_range("Value must be 0..7");
        }
        this->vertical_line = verticalLine;
        this->horizontal_line = horizontalLine;
    }

    PiecePosition::PiecePosition(int verticalLine, char horizontalLine)
    {
        if (verticalLine<0 | verticalLine> 7)
        {
            throw std::out_of_range("Value must be 0..7");
        }
        horizontalLine -= 'a';
        if (horizontalLine<0 | horizontalLine> 7)
        {
            throw std::out_of_range("Value must be a..h");
        }
        this->vertical_line = verticalLine;
        this->horizontal_line = horizontalLine;
    }

    /// @brief
    /// @param position e2, h4, a0
    PiecePosition::PiecePosition(std::shared_ptr<std::string> position)
    {
        int verticalLine = (*position)[1] - '0';
        if (verticalLine<0 | verticalLine> 7)
        {
            throw std::out_of_range("Value must be 0..7");
        }
        int horizontalLine = (*position)[0] - 'a';
        if (horizontalLine<0 | horizontalLine> 7)
        {
            throw std::out_of_range("Value must be a..h");
        }
        this->vertical_line = verticalLine;
        this->horizontal_line = horizontalLine;
    }

    int PiecePosition::getVerticalLine()
    {
        return this->vertical_line;
    }

    int PiecePosition::getVerticalLine()
    {
        return this->vertical_line;
    }

    char PiecePosition::getHorizontalLineFormatted()
    {
        return 'A' + this->horizontal_line;
    }
}