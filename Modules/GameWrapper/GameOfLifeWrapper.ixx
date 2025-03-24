export module GameOfLifeWrapper;

import Registry;
import BaseCommandHandler;
import GameOfLifeState;
import <string>;

export class GameOfLifeWrapper
{
	Registry<std::string, BaseCommandHandler> _commandsRegistry;
	GameOfLifeState _gameOfLifeState;

public:
	void RegisterCommandHandler(const std::string &commandName, const BaseCommandHandler &handler)
	{
		_commandsRegistry.Register(commandName, handler);
	}

	void Start();
};