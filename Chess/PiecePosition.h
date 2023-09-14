#pragma once
#include <iostream>
#include <stdexcept>
#include <memory>
#include <string>

namespace Chess
{

    class PiecePosition
    {
    private:
        /// @brief 0..7 (1..8)
        int vertical_line;
        /// @brief 0..7 (A..H)
        int horizontal_line;

    public:
        PiecePosition(int verticalLine, int horizontalLine);
        PiecePosition(int verticalLine, char horizontalLine);
        PiecePosition(std::shared_ptr<std::string> position);

        int getVerticalLine();
        int getHorizontalLine();
        char getHorizontalLineFormatted();
    };
}
