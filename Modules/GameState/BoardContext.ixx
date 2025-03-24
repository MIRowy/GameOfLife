export module BoardContext;

import <stdexcept>;
import Point;

export class BoardContext
{
    int _width;
    int _height;

public:
    BoardContext(const int width, const int height)
    {
        if (width < 3 || height < 3)
        {
            throw std::invalid_argument("BoardContext: width and height must be greater than 3.");
        }

        _width = width;
        _height = height;
    }

    [[nodiscard]]
    Point GetDimensions() const
    {
        return { _width, _height };
    }

    void ResizeWidth(int width);
    void ResizeHeight(int width);
};