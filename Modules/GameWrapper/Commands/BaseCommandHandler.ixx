export module BaseCommandHandler;

import <string>;
import <vector>;
import GameOfLifeState;

export class BaseCommandHandler
{
public:
	virtual ~BaseCommandHandler() = default;

	virtual void HandleCommand(std::vector<std::string> args, GameOfLifeState& gameOfLifeState) = 0;
};