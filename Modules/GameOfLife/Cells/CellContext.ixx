export module CellContext;

import <vector>;
import <functional>;
import <utility>;
import BaseCell;
import Point;

using CellRef = std::reference_wrapper<BaseCell>;

export class CellContext
{
public:
	CellContext(
		std::vector<CellRef> neighbours,
		const Point position,
		const Point boardSizes)
	: Neighbours(std::move(neighbours)), Position(position), BoardSizes(boardSizes)
	{
	}

	const std::vector<CellRef> Neighbours;

	const Point Position;

	const Point BoardSizes;
};