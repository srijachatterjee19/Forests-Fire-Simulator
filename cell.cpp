#include "Cell.h"

Cell::Cell(void)
{
	x = 0;
	y = 0;
	this->state = EMPTY;
}


Cell::Cell(const int x, const int y, const CellState state)
{
	this->x = x;
	this->y = y;
	this->state = state;
}

 

int Cell::GetX(void) const
{
	return x;
}

int Cell::GetY(void) const
{
	return y;
}



CellState Cell::GetState(void) const
{
	return state;
}

CellState Cell::GetNextState()
{
	return nextState;
}

void Cell::SetX(const int x)
{
	this->x = x;
}

void Cell::SetY(const int y)
{
	this->y = y;
}

void Cell::SetState(const CellState state)
{
	this->state = state;
}
