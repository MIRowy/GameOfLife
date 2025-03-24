export module GameOfLifeState;

import BoardContext;

export class GameOfLifeState {
    BoardContext _boardContext;

public:
    explicit GameOfLifeState(const BoardContext& boardContext) : _boardContext(boardContext) {}

    void CleanBoard();
    void Print() const;
    void Cycle();
};