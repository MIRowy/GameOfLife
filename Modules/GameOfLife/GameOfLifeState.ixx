export module GameOfLifeState;

import <vector>;
import <string>;
import <memory>;
import <format>;
import <stdexcept>;
import SingletonRegistry;
import BaseCellFactoryMethod;
import Point;
import BaseCell;

export class GameOfLifeState {
    Point _boardSizes;
    std::vector<std::vector<std::unique_ptr<BaseCell>>> _board;
    SingletonRegistry<BaseCellFactoryMethod>& _gameCellFactories;

    void VerifyRequestedCoordinates(const Point &point) const
    {
        if (_boardSizes.X() < point.X()
            || _boardSizes.Y() < point.Y()
            || point.X() < 1
            || point.Y() < 1)
        {
            const auto message = std::format(
                "Board dimensions are ({}, {}), but requested coordinates are ({}, {}).",
                _boardSizes.X(),
                _boardSizes.Y(),
                point.X(),
                point.Y());

            throw std::out_of_range(message);
        }
    }

public:
    void CleanBoard();
    void Cycle();

    [[nodiscard]]
    BaseCell& GetCell(const Point& coords) const
    {
        VerifyRequestedCoordinates(coords);

        return *_board[coords.Y() - 1][coords.X() - 1];
    }

    void SetCellOnGrid(Point coords, std::string cellType);
    void KillCell(Point coords);
};
