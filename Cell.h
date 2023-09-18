#ifndef CELL_H
#define CELL_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

enum  CellState  // The state of a Cell. EMPTY, TREE, FIRE and BORDER.
{
	EMPTY = 0,
	TREE = 1,
	FIRE = 2,
	BORDER = 3
};

class Cell
{
	
private:

	int x;
	int y;
	CellState state;
	CellState nextState;
public:
	Cell(void);
	Cell(const int x, const int y, const CellState state);       // Constructs a Cell with an X and Y position, and a state.
	int GetX(void) const;
	int GetY(void) const;
	CellState GetState(void) const;	   // Returns the CellState.
	CellState GetNextState();		  // Returns the Next CellState.
	void SetX(const int x);          // Sets the X position.
	void SetY(const int y);			// Sets the Y position.
	void SetState(const CellState state); // Sets the CellState.
};

	

#endif