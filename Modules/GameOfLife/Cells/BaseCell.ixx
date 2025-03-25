export module BaseCell;

import <string>;
import CellContext.fwd;

export enum CellLifeStates
{
	Dead,
  	Alive
};

export enum NextCellLifeStates
{
	Undetermined,
	Lives,
	Dies,
	Random
};

export class BaseCell
{
	CellLifeStates _lifeState = Alive;

public:
	virtual ~BaseCell() = default;

	[[nodiscard]]
	CellLifeStates GetLifeState() const
	{
		return _lifeState;
	}

	virtual void SetLifeState(const CellLifeStates state)
	{
		_lifeState = state;
	}

	virtual void Die() = 0;

	virtual std::string GetType() = 0;

	[[nodiscard]]
	virtual NextCellLifeStates GetNextCellLifeState(const CellContext &cellContext) const = 0;

	virtual void DoLifeCycle(const CellContext &cellContext) = 0;
};