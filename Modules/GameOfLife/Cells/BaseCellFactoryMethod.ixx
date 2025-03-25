export module BaseCellFactoryMethod;

import BaseCell;

export class BaseCellFactoryMethod
{
public:
	virtual ~BaseCellFactoryMethod() = default;

	virtual BaseCell& Create() = 0;
};