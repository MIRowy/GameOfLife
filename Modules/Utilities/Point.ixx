export module Point;

export class Point
{
    const int _x;
    const int _y;

public:
    constexpr Point(const int x, const int y) : _x(x), _y(y) {}

    [[nodiscard]] constexpr int X() const { return _x; }
    [[nodiscard]] constexpr int Y() const { return _y; }
};