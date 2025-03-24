#pragma once

class GameOfLifeState {
public:
    void CleanBoard();
    void Print() const;
    void Cycle();
};