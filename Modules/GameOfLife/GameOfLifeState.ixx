export module GameOfLifeState;

import <vector>;
import <string>;
import SingletonRegistry;
import BaseCellFactoryMethod;
import Point;
import BaseCell;

export class GameOfLifeState {
    std::vector<std::vector<BaseCell>> _board;
    SingletonRegistry<BaseCellFactoryMethod>& _gameCellFactories;

public:
    void CleanBoard();
    void Cycle();
    BaseCell& GetCell(Point coords);
    void SetCellOnGrid(Point coords, std::string cellType);
    void KillCell(Point coords);
};