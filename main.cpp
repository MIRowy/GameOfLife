import <format>;
import <iostream>;

import Point;

int main() {
    std::cout << "Hello, World!" << std::endl;

    constexpr Point p(1, 2);

    std::cout << std::format("The point is: ({}; {})", p.X(), p.Y());

    return 0;
}