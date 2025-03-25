export module GameOfLifeContext;

import <string>;
import GameOfLifeState;
import Point;

export class GameOfLifeManager
{
	GameOfLifeState _gameOfLifeState;

public:
	void SetGameCycleBehaviour(const std::string& gameCycleBehaviour);
	void DoCycle();
	void ResizeBoard(Point newSizes);
};