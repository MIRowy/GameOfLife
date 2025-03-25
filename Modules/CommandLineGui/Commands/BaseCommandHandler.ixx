export module BaseCommandHandler;

import <string>;
import <vector>;
import <iostream>;
import <stdexcept>;
import GameOfLifeContext;

export class BaseCommandHandler
{
	virtual void HandleCommand(std::vector<std::string>& args, GameOfLifeContext& gameOfLifeState) = 0;

	virtual std::string GetCommandDescription() = 0;
public:
	virtual ~BaseCommandHandler() = default;

	void Invoke(std::vector<std::string>& args, GameOfLifeContext& gameOfLifeState)
	{
		try
		{
			if (args.size() == 1 && args[0] == "help")
			{
				std::cout << GetCommandDescription() << std::endl;
			}

			HandleCommand(args, gameOfLifeState);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
};