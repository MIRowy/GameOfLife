export module CellContext;

import <vector>;
import <functional>;
import <utility>;
import BaseCell;
import Point;

export class CellContext
{
public:
	CellContext(
		const std::vector<std::reference_wrapper<BaseCell>> &neighbours,
		const Point position,
		const Point boardSizes)
	: Neighbours(neighbours), Position(position), BoardSizes(boardSizes)
	{
	}

	const std::vector<std::reference_wrapper<BaseCell>> Neighbours;

	const Point Position;

	const Point BoardSizes;
};